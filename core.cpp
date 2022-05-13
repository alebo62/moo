#include "core.h"

Core::Core()
{

}

std::string Core::name() const
{
    return n;
}

std::istream &Core::read(std::istream & in)
{
    read_common(in);
    read_hw(in, homework);
    return in;
}

double Core::grade() const
{
    return ::grade(final, midterm, homework);
}

std::istream &Core::read_common(std::istream & in)
{
    in >> n >> midterm >> final;
    return in;
}
