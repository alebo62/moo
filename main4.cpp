//#include <iostream>
//#include <istream>
//#include <ios>
//#include <iomanip>
//#include <string>
//#include <algorithm>
//#include <vector>
//#include <stdexcept>
//#include "median.h"
//#include "Student_info.h"
//#include "grade.h"

//using std::setprecision;
//using std::streamsize;
//using std::string;
//using std::cout;
//using std::cin;
//using std::endl;
//using std::vector;

//int main()
//{
//    vector<Student_info> vStudents;
//    Student_info record;
//    string::size_type maxlen = 0;

//    while(read(cin, record)) {
//        maxlen = std::max(maxlen, record.name.size());
//        vStudents.push_back(record);
//    }
//    sort(vStudents.begin(), vStudents.end(), compare);

//    for(vector<Student_info>::size_type i = 0; i != vStudents.size(); i++){
//        cout << vStudents[i].name
//             << string(maxlen + 1 - vStudents[i].name.size(), ' ');


//        try{
//            double final_grade = grade(vStudents[i]);
//            streamsize prec = cout.precision();
//            cout << "Mean grade is " << setprecision(3) << final_grade << setprecision(prec) << endl;
//        }
//        catch(std::domain_error e){
//            cout << e.what();
//            return 1;
//        }
//        cout << endl;
//    }

//    return 0;
//}








