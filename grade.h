#ifndef GRADE_H
#define GRADE_H
#include <vector>
#include "Student_info.h"

double grade(double, double, const std::vector<double>&);
double grade(double, double, double);
double grade(Student_info&);

#endif // GRADE_H
