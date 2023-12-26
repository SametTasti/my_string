#ifndef MY_STRING_H
#define MY_STRING_H

#include "my_printable.h"
#include <cstddef>
#include <string>

class my_string : public my_printable {
protected:
    std::size_t size;

public:
    std::size_t length() const;
    bool empty() const;

    virtual const char& operator[](std::size_t) const = 0;
    virtual const char* to_c_str() const = 0;
    virtual std::size_t find_first(const my_string&) const = 0;
    virtual std::size_t find_first(const std::string&) const = 0;
    virtual std::size_t find_first(const char*) const = 0;
    virtual my_string substr(std::size_t, std::size_t len = std::string::npos) const = 0;

    virtual void clear() = 0;
    virtual void swap(my_string&) = 0;
    virtual void swap(std::string&) = 0;

    virtual my_string operator+(const my_string&) const = 0;
    virtual my_string operator+(const std::string&) const = 0;
    virtual my_string operator+(const char*) const = 0;

    virtual void print(std::ostream&) const override = 0;

    virtual int compare(const my_string&) const = 0;
    virtual int compare(const std::string&) const = 0;
    virtual int compare(const char*) const = 0;
    virtual bool operator==(const my_string&) const = 0;
    virtual bool operator!=(const my_string&) const = 0;
    virtual bool operator<(const my_string&) const = 0;
    virtual bool operator>(const my_string&) const = 0;
    virtual bool operator<=(const my_string&) const = 0;
    virtual bool operator>=(const my_string&) const = 0;
};

#endif // MY_STRING_H
