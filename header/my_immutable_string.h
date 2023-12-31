#ifndef MY_IMMUTABLE_STRING_H
#define MY_IMMUTABLE_STRING_H

#include "my_string.h"
#include <string>
#include <cstring>
#include <functional>
#include <cstddef>

class my_immutable_string : public my_string
{
    const char* immutable_string;

public:
    my_immutable_string(const char*);
    my_immutable_string(const std::string&);
    my_immutable_string(const my_immutable_string&);
    my_immutable_string(my_immutable_string&&) noexcept;
    ~my_immutable_string();

    const char& at(std::size_t) const;
    const char& front() const;
    const char& back() const;

    const char& operator[](std::size_t) const override final;
    const char* to_c_str() const override final;
    std::size_t find_first(const my_string&) const override final;
    std::size_t find_first(const std::string&) const override final;
    std::size_t find_first(const char*) const override final;
    my_string* substr(std::size_t, std::size_t len = std::string::npos) const override final;

    void clear() override final;
    void swap(my_string&) override final;
    void swap(std::string&) override final;

    my_string* operator+(const my_string&) const override final;
    my_string* operator+(const std::string&) const override final;
    my_string* operator+(const char*) const override final;

    void print(std::ostream&) const override final;

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
