#include "frame.h"

void Frame::writeFrame() const
{
    std::string result = greeting + ", " + name + "!";
    size_t sz = result.size() + 2;
    std::cout << std::string(sz + 2, '*') << std::endl;
    for(int i = 0; i < cpads; i++)
        std::cout << "*" << std::string(sz, ' ') << "*" << std::endl;
    std::cout << "* " << result << " *" << std::endl;
    for(int i = 0; i < cpads; i++)
        std::cout << "*" << std::string(sz, ' ') << "*" << std::endl;
    std::cout << std::string(sz + 2, '*') << std::endl;
}

void Frame::writeFrameCycle() const
{
    std::string result = greeting + ", " + name + "!";
    size_t cols = result.size() + 2 + 2 * cpads; // two spaces
    size_t rows = 3 + 2 * rpads;
    for(int i = 0; i < rows; i++){

        for(int j = 0; j < cols; j++){
            if(i == 0 || i == rows - 1)
                std::cout << "*";
            else if( i == rpads + 1 && j == cpads + 1){
                std::cout << result;
                j += result.size() - 1;
            }
            else{
                if(j == 0 || j == cols - 1 )
                    std::cout << "*";
                else{
                    //std::cout << std::string(cols - 2, ' ');
                    //j += cols;
                    std::cout << " ";
                }
            }
        }
        std::cout << std::endl;
    }
}

std::istream &Frame::read(std::istream & is)
{
    std::cout << "Enter you name: ";
    is >> name;
    std::cout << "\nEnter rows number 0..N : ";
    is >> rpads;
    std::cout << "\nEnter columns number 0..N : ";
    is >> cpads;
    return is;
}
