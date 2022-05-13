#ifndef GRAD_H
#define GRAD_H
#include "Student_info.h"
#include "core.h"

class Grad: public Core
{
public:
    Grad* clone() const { return new Grad(*this); }
    Grad():Core(), thesis(0.0) {}
    Grad(std::istream& is) {read(is);}
    std::istream& read(std::istream&);// ??????????
    double grade() const;     // ??????????
private:
    double thesis;
};

#endif // GRAD_H
