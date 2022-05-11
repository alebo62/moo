#ifndef VEC_H
#define VEC_H

template<class T>
class Vec
{
public:
    Vec() { create();}
    explicit Vec(std::size_t sz, const T& val = T())    { create(sz, val);}
private:
   T* data;
   T* limit;
   //T* array;
};

#endif // VEC_H
