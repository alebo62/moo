#ifndef STDNT_INFO_H
#define STDNT_INFO_H
#include "core.h"
#include "grad.h"

class Stdnt_info {
public:
    // конструкторы и управление копированием.
    Stdnt_info(): cp(0) { }
    Stdnt_info(std::istream& is): cp(0) { read(is); }
    Stdnt_info(const Stdnt_info&);
    Stdnt_info& operator=(const Stdnt_info&);
    ~Stdnt_info() {delete cp; }
    // Операции.
    std::istream& read(std::istream&);

    std::string name() const {
        if (cp)
            return cp->name();
        else throw std::runtime_error("неинициализированные Student-данные");
    }

    double grade() const {
        if (cp)
            return cp->grade();
        else
            throw std::runtime_error("Неинициализированные Student-данные");
    }

    static bool compare(const Stdnt_info& s1, const Stdnt_info& s2) {
        return s1.name() < s2.name();
    }

private:
    Core* cp;

};

#endif // STDNT_INFO_H
