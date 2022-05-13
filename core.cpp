#include "core.h"

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

bool compareCore(const Core & c1, const Core & c2)
{
    return c1.name() < c2.name();
}

bool compareCore_ptrs(const Core * cp1, const Core * cp2)
{
    return compareCore(*cp1, *cp2);
}
