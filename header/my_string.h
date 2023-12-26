#ifndef MY_STRING_H
#define MY_STRING_H

#include "my_printable.h"
#include <cstddef>
#include <string>

class my_string : public my_printable {
protected:
    std::size_t size;

public:
    // Accessor methods
    virtual const char& operator[](std::size_t) const = 0;
    virtual const char* to_c_str() const = 0;
    std::size_t length() const;
    bool empty() const;

    // String comparison methods
    virtual int compare(const my_string&) const = 0;
    virtual int compare(const std::string&) const = 0;
    virtual int compare(const char*) const = 0;
    virtual bool operator==(const my_string&) const = 0;
    virtual bool operator!=(const my_string&) const = 0;
    virtual bool operator<(const my_string&) const = 0;
    virtual bool operator>(const my_string&) const = 0;
    virtual bool operator<=(const my_string&) const = 0;
    virtual bool operator>=(const my_string&) const = 0;

    // Search methods
    virtual std::size_t find_first(const my_string&) const = 0;
    virtual std::size_t find_first(const std::string&) const = 0;
    virtual std::size_t find_first(const char*) const = 0;

    // Concatenation methods
    virtual my_string operator+(const my_string&) const = 0;
    virtual my_string operator+(const std::string&) const = 0;
    virtual my_string operator+(const char*) const = 0;

    // Mutator methods
    virtual void clear() = 0;
    virtual void swap(my_string&) = 0;
    virtual void swap(std::string&) = 0;

    // Inherited from my_printable
    virtual void print(std::ostream&) const override = 0;
};

#endif // MY_STRING_H
