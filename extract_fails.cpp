#include "Student_info.h"
#include "grade.h"
#include <vector>
#include <list>

using std::vector;
using std::list;

//bool fgrade(Student_info& s)
//{
//    return grade(s) < 60;
//}

//vector<Student_info> extract_fail(vector<Student_info>& s)
//{
//    vector<Student_info> fail;
//    vector<Student_info>::iterator iterator = s.begin();
//    while(iterator != s.end()) {
//        if(fgrade(*iterator)){
//            fail.push_back(*iterator);
//            iterator = s.erase(iterator);
//        }
//        else
//            iterator++;
//    }
//    return fail;
//}

//// for list   list.sort(compare) ---- for vectors  sort(v1.begin(),v1.end(),compare)
//list<Student_info> extract_fail(list<Student_info>& s)
//{
//    list<Student_info> fail;
//    list<Student_info>::iterator iterator = s.begin();
//    while(iterator != s.end()) {
//        if(fgrade(*iterator)){
//            fail.push_back(*iterator);
//            iterator = s.erase(iterator);
//        }
//        else
//            iterator++;
//    }
//    return fail;
//}
