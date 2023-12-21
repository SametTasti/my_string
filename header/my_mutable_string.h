#ifndef MY_MUTABLE_STRING_H
#define MY_MUTABLE_STRING_H

#include "my_string.h"
#include <string>
#include <functional>

class my_mutable_string : public my_string
{
    char* mutable_string;
    std::size_t capacity;

public:
    // Constructors
    my_mutable_string();
    my_mutable_string(const char*);
    my_mutable_string(const std::string&);
    my_mutable_string(const my_mutable_string&);
    my_mutable_string(my_mutable_string&&) noexcept;

    // Destructor
    ~my_mutable_string();

    // Assignment Operators
    my_mutable_string& operator=(const my_mutable_string&);
    my_mutable_string& operator=(my_mutable_string&&);

    // Subscript Operators
    const char& operator[](std::size_t) const override final;
    char& operator[](std::size_t);

    // Accessor Methods
    char& at(std::size_t);
    char& front();
    char& back();
    const char* to_c_str() const override final;
    std::size_t find(const my_string&) const override final;
    std::size_t find(const std::string&) const override final;
    std::size_t find(const char*) const override final;
    my_mutable_string substr(std::size_t pos, std::size_t len = std::string::npos) const;

    // Mutator Methods
    void clear() override;
    void insert(char);
    void append(const my_string&);
    void append(const std::string&);
    void append(const char*);
    void erase(std::size_t, std::size_t);
    template<typename Func> void remove(std::size_t, std::size_t, Func);
    void replace(std::size_t pos, std::size_t len, const my_mutable_string&);
    void to_upper();
    void to_lower();
    void trim();
    void trim_start();
    void trim_end();
    void swap(my_string&) override final;
    void swap(std::string&) override final;
    void reserve(std::size_t);
    void shrink_to_fit();

    // Concatenation Operators
    my_mutable_string operator+(const my_mutable_string&) const;
    my_mutable_string operator+(const std::string&) const;
    my_mutable_string operator+(const char*) const;
    my_mutable_string& operator+=(const my_mutable_string&);
    my_mutable_string& operator+=(const std::string&);
    my_mutable_string& operator+=(const char*);

    // Comparison Operators
    bool operator==(const my_string&) const override final;
    bool operator!=(const my_string&) const override final;
    bool operator<(const my_string&) const override final;
    bool operator>(const my_string&) const override final;
    bool operator<=(const my_string&) const override final;
    bool operator>=(const my_string&) const override final;
    int compare(const my_string&) const override final;
    int compare(const std::string&) const override final;
    int compare(const char*) const override final;

    // Print Method
    void print(std::ostream&) const override final;
};

#endif // MY_MUTABLE_STRING_H
