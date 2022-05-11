//#include <iostream>
//#include <ios>
//#include <iomanip>
//#include <string>

//using std::setprecision;
//using std::streamsize;
//using std::string;
//using std::cout;
//using std::cin;
//using std::endl;

//int main()
//{
//    cout << "Enter your name";
//    string name;
//    cin >> name;
//    cout << "Hello, " + name;
//    cout << endl;

//    cout << "Enter middle and final grades:";
//    double midterm, final;
//    double sum = 0;
//    double grade;
//    int i = 0;

//    cin >> midterm >> final;

//    cout << "Enter DZ grades:";
//    while(cin >> grade){
//        sum += grade;
//        i++;
//    }

//    streamsize prec = cout.precision();
//    cout << "Mean grade is " << setprecision(3) << ((.2 * midterm) + (.4 * final) + (.4 * (sum / i)))
//                            << setprecision(prec) << endl;
//    return 0;
//}


//int main()
//{
//    //setlocale(LC_ALL,"Russian");
//    //QTextCodec::setCodecForLocale( QTextCodec::codecForName("CP1251"));
//    //QTextCodec::setCodecForLocale(QTextCodec::codecForName("CP866"));
//    //QTextCodec::setCodecForLocale( (QTextCodec::codecForName("CP1251"));


//    std::cout << "Enter your name\n";//QTextCodec::codecForName("CP866")->fromUnicode("Введите ваше имя").data();
//    std::string name = "AlexAlexAlex";
//    //std::cin >> name;
//    std::string greeting = "Hello , " + name;    //std::cout << greeting << std::endl;
//    const int vpad = 2;
//    const int hpad = 10;
//    const int numRows = 2 * vpad + 3;
//    const int numColums = greeting.size() + hpad * 2 + 2;
//    int r = 0;
//    int c = 0;

//    while( r < numRows){
//        while(c < numColums){
//            if(r == 0 || r == numRows - 1 || c == 0 || c == numColums - 1 )
//                std::cout << '*';
//            else if(r == vpad + 1 && c == hpad + 1) {
//                std::cout << greeting;
//                c += greeting.size() - 1;
//            }
//            else
//                std::cout << ' ';
//            c++;
//        }
//        c = 0;
//        std::cout << std::endl;
//        r++;
//    }
//    return 0;
//}
