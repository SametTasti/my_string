#ifndef _MY_STRING_H_
#define _MY_STRING_H_

#include "my_printable.h"
#include <cstddef>
#include <string>

class my_string : public my_printable
{
protected:
    std::size_t size;

public:
    virtual const char& operator[](std::size_t) const = 0;
    virtual const char* to_c_str() const = 0;
    std::size_t length() const;
    bool empty() const;
    virtual void clear() = 0;
    virtual void swap(my_string&) = 0;
    virtual void swap(std::string&) = 0;
    virtual int compare(const my_string&) const = 0;
    virtual int compare(const std::string&) const = 0;
    virtual int compare(const char*) const = 0;
    virtual bool operator==(const my_string&) const = 0;
    virtual bool operator!=(const my_string&) const = 0;
    virtual bool operator<(const my_string&) const = 0;
    virtual bool operator>(const my_string&) const = 0;
    virtual bool operator<=(const my_string&) const = 0;
    virtual bool operator>=(const my_string&) const = 0;
    virtual std::size_t find(const my_string&) const = 0;
    virtual std::size_t find(const std::string&) const = 0;
    virtual std::size_t find(const char*) const = 0;
};

#endif // !_MY_STRING_H_