//#include <iostream>
//#include "Student_info.h"
//#include <numeric>
//#include "grade.h"

//// Median
//double grade_aux(const Student_info& s)
//{
//    try{
//        return grade(s);
//    }
//    catch(domain_error){
//        return grade(s.midterm, s.final, 0);
//    }
//}
//// Average
//double average(const vector<double>& v)
//{
//    return accumulate(v.begin(), v.end(), 0.0) / v.size();
//}

//double average_grade(const vector<Student_info>& s)
//{
//    return grade(s.midterm, s.final, average(s.homework));
//}
//// Optimistic median
//double optimistic_median(const vector<Student_info>& s)
//{

//    return grade(s.midterm, s.final, average(s.homework));
//}


//double median_analysis(const vector<Student_info>& students)
//{
//    vector<double> grades;
//    transform(students.begin(), students.end(), back_inserter(grades), grade_aux);
//    return median(grades);
//}
//double average_analysis(const vector<Student_info>& students)
//{
//    vector<double> grades;
//    transform(students.begin(), students.end(), back_inserter(grades), average_grade);
//    return median(grades);
//}
//double optimistic_median_analysis(const vector<Student_info>& students)
//{
//    vector<double> nonzero;
//    transform(students.begin(), students.end(), back_inserter(nonzero), 0);

//    if(nonzero.empty())
//        return grade(s.midterm, s.final, 0);
//    else
//        return grade(s.midterm, s.final, median(s.homework));
//}

//void write_analysis(std::iostream& out, const string& name, double analysis(const vector<Student_info>&),
//                    const vector<Student_info>& did,
//                    const vector<Student_info>& didnt)
//{
//out << name << ": median(did) = " << analysis(did) << ", median(didnt) : = " << analysis(didnt) << std::endl;
//}
