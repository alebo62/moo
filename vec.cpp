#include "vec.h"

template<class T>
Vec<T>& Vec<T>::operator =(const Vec &v)
{
    if(this == &v)
        return *this;
    uncreate();
    create(v.begin(), v.end());
    return *this;
}

template<class T>
void Vec<T>::create()
{
    data = avail = limit = 0;
}

template<class T>
void Vec<T>::create(Vec::size_type sz, const T & val)
{
    data = alloc.allocate(sz);
    if(data){
        avail = limit = data + sz;
    }
    std::uninitialized_fill(data, limit, val);

}

template<class T>
void Vec<T>::create(Vec::const_iterator i, Vec::const_iterator j)
{
    data = alloc.allocate(j - i);
    limit = avail = std::uninitialized_copy(j, i, data);
}

template<class T>
void Vec<T>::uncreate()
{
    if(data){
        iterator it = avail;
        while(it != data)
            alloc.destroy(it);
        alloc.deallocate(data, limit - data);
        data = avail = limit = 0;
    }
}

template<class T>
void Vec<T>::grow()
{
    size_type new_sz = max(2 * (limit - data), std::ptrdiff_t(1));
    iterator new_data = alloc.allocate(new_sz);
    iterator new_avail = std::uninitialized_copy(data, avail, new_data);
    uncreate();
    data = new_data;
    avail = new_avail;
    limit = data + new_sz;
}

template<class T>
void Vec<T>::unchecked_append(const T & val)
{
    alloc.construct(avail++, val);
}

template<class T>
void Vec<T>::push_back(const T & val)
{
    if(avail == limit)
        grow();
    unchecked_append(val);
}
