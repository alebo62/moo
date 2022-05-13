#include "stdnt_info.h"

Stdnt_info::Stdnt_info(const Stdnt_info & si): cp(0)
{
    if(si.cp)
        cp = si.cp->clone();
}

Stdnt_info &Stdnt_info::operator=(const Stdnt_info & si)
{
    if(&si != this){
        delete cp;
        if(si.cp)
            cp = si.cp->clone();
        else
            cp = 0;
    }
    return *this;
}

std::istream &Stdnt_info::read(std::istream & is)
{
    delete cp;
    char ch;

    is >> ch; // Считываем тип записи.
    if (ch == 'U') {
        cp = new Core(is);
    } else {
        cp = new Grad(is);
    }
    return is;
}
