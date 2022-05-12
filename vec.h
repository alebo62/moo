#ifndef VEC_H
#define VEC_H
#include <memory>
template<class T>
class Vec
{
public:
    typedef T* iterator;
    typedef const T* const_iterator;
    typedef const T& const_reference;
    typedef T& reference;
    typedef std::size_t size_type;
    typedef T value_type;

    Vec() { create();}
    explicit Vec(size_type, const T& val = T())    { create(sz, val);}
    Vec(const Vec& v) { create(v.begin(),v.end());}
    Vec& operator =(const Vec& v);
    ~Vec(){ uncreate();}
private:
    T* data;
    T* limit;
    T* avail;
    std::allocator<T> alloc;

    void create();
    void create(size_type, const T&);
    void create(const_iterator, const_iterator);

    void uncreate();

    void grow();
    void unchecked_append(const T&);
public:
    iterator begin() {return data;}
    const_iterator begin() const {return data;}

    iterator end() { return avail;}
    const_iterator end() const { return avail;}


    size_type size() const {return avail - data;}
    reference operator[](size_type st){return data[i];}
    const_reference operator[](size_type st){return data[i];}

    void push_back(const T& val){
        if(avail == limit)
            grow();
        unchecked_append(val);
    }
};

#endif // VEC_H
