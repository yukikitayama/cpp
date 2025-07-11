#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring {
private:
    char *str;
public:
    Mystring();
    Mystring(const char *s);
    // Copy constructor
    Mystring(const Mystring &source);
    ~Mystring();
    void display() const;
    int get_length() const;
    const char *get_str() const;

    // Copy assignment
    Mystring &operator=(const Mystring &rhs);
};

#endif // _MYSTRING_H_