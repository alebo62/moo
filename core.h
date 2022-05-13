#ifndef CORE_H
#define CORE_H
#include "Student_info.h"
#include "grade.h"
class Core
{
    friend class Stdnt_info;
public:
    Core():midterm(0), final(0) {}
    Core(std::istream& is) { read(is);}
    virtual ~Core(){}
    std::string name() const;
    virtual std::istream& read(std::istream&);
    virtual double grade() const;
protected:
    virtual Core* clone() const { return new Core(*this); }
    std::istream& read_common(std::istream&);
    double midterm, final;
    std::vector<double> homework;
private:
    std::string n;
};

bool compareCore(const Core&, const Core&);
bool compareCore_ptrs(const Core*, const Core*);
#endif // CORE_H

