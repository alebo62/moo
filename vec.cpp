#include "vec.h"

Vec::Vec()
{

}

template<class T>
Vec<T>& Vec<T>::operator =(const Vec &v)
{
    if(this == &v)
        return *this;
    uncreate();
    create(v.begin(), v.end());
    return *this;
}
