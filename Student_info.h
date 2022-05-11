#ifndef STUDENT_INFO_H
#define STUDENT_INFO_H
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include <iomanip>

struct Student_info {
private:
    std::string n;
    double final, midterm;
    std::vector<double> homework;
public:
    Student_info ();
    Student_info (std::istream&);
    double grade() const;
    std::istream& read(std::istream&);
    std::string name()  {return n;}
    bool valid() const {return !homework.empty();}
};

std::istream& read_hw(std::istream&, std::vector<double>&);
std::istream&    read(std::istream&, Student_info& );
bool compare(Student_info&, Student_info&);
bool did_all_hw(const Student_info& s);
#endif // STUDENT_INFO_H
