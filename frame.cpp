#include "frame.h"

void Frame::writeFrame() const
{
    std::string result = greeting + ", " + name + "!";
    size_t sz;
    std::cout << std::string(sz + 2, '*') << std::endl;
    for(int i = 0; i < pads; i++)
        std::cout << "*" << std::string(sz, ' ') << "*" << std::endl;
    std::cout << "* " << result << " *" << std::endl;
    for(int i = 0; i < pads; i++)
        std::cout << "*" << std::string(sz, ' ') << "*" << std::endl;
    std::cout << std::string(sz + 2, '*') << std::endl;
}

void Frame::writeFrameCycle() const
{
    std::string result = greeting + ", " + name + "!";
    size_t cols = result.size() + 2 + 2 * pads; // two spaces
    size_t rows = 3 + 2 * pads;
    for(int i = 0; i < rows; i++){

        for(int j = 0; j < cols; j++){
            if(i == 0 || i == rows - 1)
                std::cout << "*";
            else if( i == pads + 1 && j == pads + 1){
                std::cout << result;
                j += result.size();
            }
            else{
                if(j == 0 || j == cols - 1 )
                    std::cout << "*";
                else
                    std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
}

std::istream &Frame::read(std::istream & is)
{
    std::cout << "Enter you name: ";
    is >> name;
    std::cout << "\nEnter pads number 0..N : ";
    is >> pads;
    return is;
}
