#include "grad.h"

Grad::Grad()
{

}

std::istream &Grad::read(std::istream & in)
{
    Core::read_common(in);
    in >> thesis;
    read(in, Core::homework);
    return in;
}
