#ifndef _MY_STRING_CPP_
#define _MY_STRING_CPP_

#include "../header/my_string.h"

std::size_t my_string::length() const
{
    return size;
}

bool my_string::empty() const
{
    return (size == 0);
}

#endif // !_MY_STRING_CPP_