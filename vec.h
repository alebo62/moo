#ifndef VEC_H
#define VEC_H

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
private:
   T* data;
   T* limit;
   //T* array;
public:
   iterator begin() {return data;}
   const_iterator begin() const {return data;}

   iterator end() { return limit;}
   const_iterator end() const { return limit;}

   size_type size() const {return limit - data;}
   reference operator[](size_type st){return data[i];}
   const_reference operator[](size_type st){return data[i];}

};

#endif // VEC_H
