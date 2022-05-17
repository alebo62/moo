#include "frame.h"

int main()
{

    Frame* fr = new Frame();
    fr->read(std::cin);
    fr->writeFrameCycle();
    return 0;
}
