class Class {
public:
    void setVal(int value) {
        Class::value = value;
        // or
        // this -> value = value;
    }
    int getVal(void);
private:
    int value;
};
