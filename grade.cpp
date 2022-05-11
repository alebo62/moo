#include "grade.h"
#include "median.h"
using std::vector;

double grade(double midterm, double final, const vector<double>& hw)
{
    if(hw.size() == 0)
        throw std::domain_error("No home work!");

    return grade(midterm, final, median(hw));
}

double grade(double midterm, double final, double homework)
{
    return (.2 * midterm) + (.4 * final) + (.4 * homework);
}

//double grade(Student_info & s)
//{
//    return grade(s.midterm, s.final, s.homework);
//}
