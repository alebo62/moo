#ifndef HANDLE_H
#define HANDLE_H
#include <core.h>
template <class T>
class Handle
{

public:
    Handle():p(0){}
    Handle(const Handle& s):p(0){if (s.p) p = s.p->clone();}
    Handle& operator=(const Handle&);
    ~Handle() {delete p;}

    Handle(T* t):p(t)   {}
    operator bool() const {return p;}
    T& operator *() const;
    T* operator ->() const;
private:
    T* p;
};

bool compare_Core_handles(Handle<Core> h1, Handle<Core> h2)
{
    return h1->name() > h2->name();
}

#endif // HANDLE_H
