#ifndef MY_IMMUTABLE_STRING_H
#define MY_IMMUTABLE_STRING_H

#include "my_string.h"
#include <string>
#include <functional>

class my_immutable_string : public my_string
{
    const char* immutable_string;

public:
    // Constructors
    my_immutable_string();
    my_immutable_string(const char*);
    my_immutable_string(const std::string&);
    my_immutable_string(const my_immutable_string&);
    my_immutable_string(my_immutable_string&&) noexcept;

    // Destructor
    ~my_immutable_string();

    // Subscript Operators
    const char& operator[](std::size_t) const override final;

    // Accessor Methods
    const char& at(std::size_t) const;
    const char& front() const;
    const char& back() const;
    const char* to_c_str() const override final;
    std::size_t find(const my_string&) const override final;
    std::size_t find(const std::string&) const override final;
    std::size_t find(const char*) const override final;
    my_immutable_string substr(std::size_t pos, std::size_t len = std::string::npos) const;

    // Print to console method
    void print(std::ostream&) const override final;

    // String comparison methods
    int compare(const my_string&) const override final;
    int compare(const std::string&) const override final;
    int compare(const char*) const override final;
    bool operator==(const my_string&) const override final;
    bool operator!=(const my_string&) const override final;
    bool operator<(const my_string&) const override final;
    bool operator>(const my_string&) const override final;
    bool operator<=(const my_string&) const override final;
    bool operator>=(const my_string&) const override final;
};

#endif // MY_IMMUTABLE_STRING_H
