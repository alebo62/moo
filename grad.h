#ifndef GRAD_H
#define GRAD_H
#include "Student_info.h"
#include "core.h"

class Grad: public Core
{
public:
    Grad();
    Grad(std::istream&);
    std::istream& read(std::istream&);// переопределяем
    double grade() const;     // переопределяем
private:
    double thesis;
};

#endif // GRAD_H
