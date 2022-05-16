#ifndef FRAME_H
#define FRAME_H
#include <string>
#include <iostream>

class Frame
{
public:

    Frame(const std::string& s = "NN", std::string gs = "Hello", int p = 1):name(s), greeting(gs), pads(p){}
    void writeFrame() const;
    void writeFrameCycle() const;
    std::istream& read(std::istream& );
private:
    std::string name;
    std::string greeting;
    int pads;
};

#endif // FRAME_H
