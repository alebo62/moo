//#include "grad.h"
//#include "core.h"

//int main()
//{
//    std::vector<Core> students;
//    Core record;
//    std::string::size_type maxlen = 0;

//    while(record.read(std::cin)){
//        maxlen = std::max(maxlen , record.name().size());
//        students.push_back(record);
//    }

//    std::sort(students.begin(), students.end(), compareCore);

//    for (std::vector<Core>::size_type i = 0; i != students.size(); ++i) {
//        std::cout << students[i].name()
//                  << std::string(maxlen + 1 - students[i].name().size() , ' ' );
//        try {
//            double final_grade = students[i].grade(); //

//            std::streamsize prec = std::cout.precision();
//            std::cout << std::setprecision(3) << final_grade
//                      << std::setprecision(prec) << std::endl;
//        } catch (std::domain_error e) {
//            std::cout << e.what() << std::endl;
//        }
//    }

//    return 0;
//}
