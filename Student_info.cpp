#include "Student_info.h"
#include "grade.h"
using std::istream;
using std::vector;

double Student_info::grade() const
{
    return ::grade(midterm, final, homework);
}

bool compare(Student_info& x, Student_info& y) {
    return x.name() < y.name();
}

//bool did_all_hw(const Student_info& s)
//{
//    return (find(s.homework.begin(), s.homework.end(), 0) == s.homework.end());
//}

//std::istream& read(istream& is, Student_info& s)
//{
//    is >> s.name >> s.midterm >> s.final;
//    read_hw(is, s.homework);
//    return is;
//}

//std::istream& read_hw(istream& is, vector<double>& hw)
//{
//    if(is) {
//        double value;
//        hw.clear();

//        while(is >> value)
//            hw.push_back(value);

//        is.clear();
//    }
//    return is;
//}
