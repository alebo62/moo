#ifndef CORE_H
#define CORE_H
#include "Student_info.h"
#include "grade.h"
class Core
{
public:
    Core();
    Core(std::istream&);
    std::string name() const;
    std::istream& read(std::istream&);
    double grade() const;
protected:
    std::istream& read_common(std::istream&);
    double midterm, final;
    std::vector<double> homework;
private:
    std::string n;
};

#endif // CORE_H
