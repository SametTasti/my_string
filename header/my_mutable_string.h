#ifndef _MY_MUTABLE_STRING_H_
#define _MY_MUTABLE_STRING_H_

#include "my_string.h"
#include <string>
#include <functional>

class my_mutable_string : public my_string
{
    char* mutable_string;
    std::size_t capacity;

public:
    my_mutable_string();
    my_mutable_string(const char*);
    my_mutable_string(const std::string&);
    my_mutable_string(const my_mutable_string&);
    my_mutable_string(my_mutable_string&&) noexcept;
    ~my_mutable_string();
    my_mutable_string& operator=(const my_mutable_string&);
    my_mutable_string& operator=(my_mutable_string&&);
    const char& operator[](std::size_t) const override final;
    char& operator[](std::size_t);
    char& at(std::size_t);
    char& front();
    char& back();
    const char* to_c_str() const override final;
    char* to_c_str();
    void print(std::ostream&) const override final;
    void clear() override;
    void insert(char);
    void erase(std::size_t, std::size_t);
    void append(const my_string&);
    void append(const std::string&);
    void append(const char*);
    template<typename Func> void remove(std::size_t, std::size_t, Func);
    void swap(my_string&) override final;
    void swap(std::string&) override final;
    int compare(const my_string&) const override final;
    int compare(const std::string&) const override final;
    int compare(const char*) const override final;
    bool operator==(const my_string&) const override final;
    bool operator!=(const my_string&) const override final;
    bool operator<(const my_string&) const override final;
    bool operator>(const my_string&) const override final;
    bool operator<=(const my_string&) const override final;
    bool operator>=(const my_string&) const override final;
    std::size_t find(const my_string&) const override final;
    std::size_t find(const std::string&) const override final;
    std::size_t find(const char*) const override final;
};

#endif // !_MY_MUTABLE_STRING_H_