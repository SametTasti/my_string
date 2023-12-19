#ifndef _MY_PRINTABLE_CPP_
#define _MY_PRINTABLE_CPP_

#include "../header/my_printable.h"

std::ostream& operator<<(std::ostream& os, const my_printable& obj)
{
    obj.print(os);
    return os;
}

#endif // !_MY_PRINTABLE_CPP_