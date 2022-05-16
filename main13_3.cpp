//#include "stdnt_info.h"

//int main() {
//    std::vector<Stdnt_info> students;
//    Stdnt_info record;
//    std::string::size_type maxlen = 0;
//    // Считываем и сохраняем данные.
//    while (record.read(std::cin)) {
//        maxlen = std::max(maxlen, record.name().size()) ;
//        students.push_back(record);
//    }
//    // � асполагаем записи в алфавитном порядке.
//    sort(students.begin(), students.end(), Stdnt_info::compare);
//    // Выводим имена и итоговые оценки.
//    for (std::vector<Stdnt_info>::size_type i = 0;
//         i != students.size(); ++i) {
//        std::cout << students[i].name()
//             << std::string(maxlen + 1 - students[i].name().size(),' ');
//        try {
//            double final_grade = students[i].grade();
//            std::streamsize prec = std::cout.precision();
//            std::cout << std::setprecision(3) << final_grade
//                 << std::setprecision(prec) << std::endl;
//        } catch (std::domain_error e) {
//            std::cout << e.what() << std::endl;
//        }

//    }
//    return 0;
//}
