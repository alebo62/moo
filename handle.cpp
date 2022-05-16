#include "handle.h"
#include <Student_info.h>
//Handle::Handle()
//{

//}

template<class T>
Handle<T>& Handle<T>::operator=(const Handle & h)
{
    if(&h != this){
        delete p;
        p = h.p? h.p->clone():0;
    }
    return *this;
}

template<class T>
T& Handle<T>::operator *() const
{
   if(p)
       return *p;
   throw std::runtime_error("Not linked Handle-object");
}

template<class T>
T *Handle<T>::operator ->() const
{
    if(p)
        return p;
    throw std::runtime_error("Not linked Handle-object");
}
