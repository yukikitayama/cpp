#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring {
    friend bool operator==(const Mystring &lhs, const Mystring &rhs);
    friend Mystring operator-(const Mystring &obj);
    friend Mystring operator+(const Mystring &lhs, const Mystring &rhs);
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
};

#endif // _MYSTRING_H_