#ifndef _MY_PRINTABLE_H_
#define _MY_PRINTABLE_H_

#include <iostream>

class my_printable
{
    friend std::ostream& operator<<(std::ostream&, const my_printable&);

protected:
    virtual void print(std::ostream& os) const = 0;

public:
    virtual ~my_printable() = default;
};

#endif // !_MY_PRINTABLE_H_


