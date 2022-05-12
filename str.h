#ifndef STR_H
#define STR_H
#include "vec.h"

class Str
{
public:
    typedef Vec<char>::size_type size_type;

    size_type size() const {return data.size();}

    friend std::istream& operator>>(std::istream&, Str& );
    friend std::ostream& operator<<(std::ostream&, const Str& );
    friend Str operator +(const Str& s1, const Str& s2){
        Str s(s1);
        s += s2;
        return s;
    }

    Str() {}
    Str(size_type sz, char c): data(sz, c)  {}
    Str(const char* c) { std::copy(c , c + std::strlen(c), std::back_inserter(data));}

    template<class In>
    Str(In b, In e){std::copy(b, e, std::back_inserter(data));}

    char& operator[](size_type sz){ return data[sz];}
    const char& operator[](size_type sz)const{ return data[sz];}

    Str& operator+(const Str& s){
        std::copy(s.data.begin(), s.data.end(), std::back_inserter(data) );
        return *this;
    }
private:
    Vec<char> data;
};

#endif // STR_H
