#include <cstring>
#include <iostream>
#include "Mystring.h"

Mystring::Mystring()
    : str{nullptr} {
    str = new char[1];
    *str = '\0';
}

Mystring::Mystring(const char *s)
    : str {nullptr} {
    if (s == nullptr) {
        str = new char[1];
        *str = '\0';
    } else {
        str = new char[std::strlen(s) + 1];
        std::strcpy(str, s);
    }
}

// Copy constructor
Mystring::Mystring(const Mystring &source)
    : str {nullptr} {
    str = new char[std::strlen(source.str) + 1];
    std::strcpy(str, source.str);
    std::cout << "Copy constructor used" << std::endl;
}

// Move constructor
Mystring::Mystring(Mystring &&source)
    : str(source.str) {
    source.str = nullptr;
    std::cout << "Move constructor used" << std::endl;
}

// Destructor
Mystring::~Mystring() {
    delete [] str;
}

void Mystring::display() const {
    std::cout << str << ": " << get_length() << std::endl;
}

int Mystring::get_length() const { return std::strlen(str); }

const char *Mystring::get_str() const { return str; }

// Copy assignment
Mystring &Mystring::operator=(const Mystring &rhs) {
    std::cout << "Copy assignment" << std::endl;

    if (this == &rhs)
        return *this;
    
    delete [] this->str;

    str = new char[std::strlen(rhs.str) + 1];
    std::strcpy(this->str, rhs.str);

    return *this;
}

// Move assignment
Mystring &Mystring::operator=(Mystring &&rhs) {
    std::cout << "Using move assignment" << std::endl;
    
    if (this == &rhs)
        return *this;
    
    delete [] str;

    str = rhs.str;

    rhs.str = nullptr;

    return *this;
}

// Overloading equality operator
// bool Mystring::operator==(const Mystring &rhs) const {
//     return (std::strcmp(str, rhs.str) == 0);
// }

// Unary operator, lowercase
// Mystring Mystring::operator-() const {
//     char *buff = new char[std::strlen(str) + 1];
//     std::strcpy(buff, str);
//     for (size_t i=0; i < std::strlen(buff); i++)
//         buff[i] = std::tolower(buff[i]);
    
//     Mystring temp {buff};
    
//     delete [] buff;

//     return temp;
// }

// Binary operator, concatenate
// Mystring Mystring::operator+(const Mystring &rhs) const {
//     char *buff = new char[std::strlen(str) + std::strlen(rhs.str) + 1];
//     std::strcpy(buff, str);
//     std::strcat(buff, rhs.str);
    
//     Mystring temp {buff};

//     delete [] buff;

//     return temp;
// }

// Equality
bool operator==(const Mystring &lhs, const Mystring &rhs) {
    return (std::strcmp(lhs.str, rhs.str) == 0);
}

// Make lowercse
Mystring operator-(const Mystring &obj) {
    char *buff = new char[std::strlen(obj.str) + 1];
    std::strcpy(buff, obj.str);
    for (size_t i = 0; i < std::strlen(buff); i++) {
        buff[i] = std::tolower(buff[i]);
    }
    Mystring temp {buff};

    delete [] buff;

    return temp;
}

// Concatenation
Mystring operator+(const Mystring &lhs, const Mystring &rhs) {
    char *buff = new char[std::strlen(lhs.str) + std::strlen(rhs.str) + 1];
    std::strcpy(buff, lhs.str);
    std::strcat(buff, rhs.str);

    Mystring temp {buff};

    delete [] buff;

    return temp;
}

// Overload insertion operator
std::ostream &operator<<(std::ostream &os, const Mystring &rhs) {
    os << rhs.str;
    return os;
}

// Overload extraction operator
std::istream &operator>>(std::istream &in, Mystring &rhs) {
    char *buff = new char[1000];
    in >> buff;
    rhs = Mystring {buff};
    delete [] buff;
    return in;
}

// Equality
bool Mystring::operator==(const Mystring &rhs) {
    return (std::strcmp(str, rhs.str) == 0);
}

// Not equality
bool Mystring::operator!=(const Mystring &rhs) {
    return !(std::strcmp(str, rhs.str) == 0);
}

// Less than
bool Mystring::operator<(const Mystring &rhs) {
    return !(std::strcmp(str, rhs.str) < 0);
}

// Greater than
bool Mystring::operator>(const Mystring &rhs) {
    return !(std::strcmp(str, rhs.str) > 0);
}

// Make lowercase
Mystring Mystring::operator-() const {
    char *buff = new char[std::strlen(str) + 1];
    std::strcpy(buff, str);
    for (size_t i = 0; i < std::strlen(buff); i++)
        buff[i] = std::tolower(buff[i]);
    Mystring temp {buff};
    delete [] buff;
    return temp;
}

// Concatenate
Mystring Mystring::operator+(const Mystring &rhs) const {
    char *buff = new char [std::strlen(str) + std::strlen(rhs.str) + 1];
    std::strcpy(buff, str);
    std::strcat(buff, rhs.str);
    Mystring temp {buff};
    delete [] buff;
    return temp;
}

// Concat and assign
Mystring &Mystring::operator+=(const Mystring &rhs) {
    *this = *this + rhs;
    return *this;
}

// Repeat
Mystring Mystring::operator*(int n) const {
    Mystring temp;
    for (int i = 1; i <= n; i++)
        temp = temp + *this;
    return temp;
}

// Repeat and assign
Mystring &Mystring::operator*=(int n) {
    *this = *this * n;
    return *this;
}

// Pre-increment - make the string upper-case
Mystring &Mystring::operator++() {
    for (size_t i = 0; i < std::strlen(str); i++)
        str[i] = std::toupper(str[i]);
    return *this;
}

// Post-increment - make the string upper-case
Mystring Mystring::operator++(int) {
    Mystring temp (*this);
    operator++();
    return temp;
}