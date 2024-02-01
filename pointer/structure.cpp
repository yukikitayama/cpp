#include <iostream>
using namespace std;

struct s {
    float *f;
};

void make(s *p, float x = 10) {
    float *f = new float;

    cout << sizeof(*f) << endl;
    cout << sizeof(float) << endl;
    
    *f = sizeof(*f) / sizeof(float) * 10;
    p->f = f;
}

int main() {
    s *ss = new s;
    make(ss);
    cout << *(*ss).f;
    delete ss->f;
    delete ss;
    return 0;
}
