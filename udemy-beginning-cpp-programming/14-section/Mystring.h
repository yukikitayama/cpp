#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring {
    friend bool operator==(const Mystring &lhs, const Mystring &rhs);
    friend Mystring operator-(const Mystring &obj);
    friend Mystring operator+(const Mystring &lhs, const Mystring &rhs);
    friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
    friend std::istream &operator>>(std::istream &in, Mystring &rhs);
private:
    char *str;
public:
    Mystring();
    Mystring(const char *s);

    // Copy constructor
    Mystring(const Mystring &source);
    // Move constructor
    Mystring(Mystring &&source);
    
    ~Mystring();
    void display() const;
    int get_length() const;
    const char *get_str() const;

    // Copy assignment
    Mystring &operator=(const Mystring &rhs);
    // Move assignment
    Mystring &operator=(Mystring &&rhs);

    // Unary operator
    // Mystring operator-() const;
    // Binary operator
    // Mystring operator+(const Mystring &rhs) const;
    // bool operator==(const Mystring &rhs) const;

    // Overload operator member methods
    Mystring operator-() const;  // Make lowercase
    Mystring operator+(const Mystring &rhs) const;  // Concatenate
    bool operator==(const Mystring &rhs) const;  // Equals
    bool operator!=(const Mystring &rhs) const;  // Not equal
    bool operator<(const Mystring &rhs) const;  // Less than
    bool operator>(const Mystring &rhs) const;  // Greater than
    Mystring &operator+=(const Mystring &rhs);  // Concat and assign
    Mystring operator*(int n) const;  // Repeat n times
    Mystring &operator*=(int n);
    Mystring &operator++();  // pre-increment
    Mystring operator++(int);  // post-increment
};

#endif // _MYSTRING_H_