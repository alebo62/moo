#ifndef VEC_H
#define VEC_H
#include <memory>
#include <cstring>
#include <iostream>
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
    explicit Vec(size_type sz, const T& val = T())    { create(sz, val);}
    Vec(const Vec& v) { create(v.begin(),v.end());}
    Vec& operator =(const Vec& v);
    ~Vec(){ uncreate();}
private:
    T* data;
    T* avail;
    T* limit;
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
    reference operator[](size_type i){return data[i];}
    const_reference operator[](size_type i) const {return data[i];}

    void push_back(const T& );
    void clear() {}
};

#endif // VEC_H
