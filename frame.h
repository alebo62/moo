#ifndef FRAME_H
#define FRAME_H
#include <string>
#include <iostream>

class Frame
{
public:

    Frame(const std::string& s = "NN", std::string gs = "Hello", int rp = 1, int cp = 1):name(s),
        greeting(gs), rpads(1), cpads(1) {}
    void writeFrame() const;
    void writeFrameCycle() const;
    std::istream& read(std::istream& );
private:
    std::string name;
    std::string greeting;
    int rpads;
    int cpads;
};

#endif // FRAME_H
