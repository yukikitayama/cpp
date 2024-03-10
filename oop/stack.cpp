#include <iostream>

using namespace std;

class Stack {
private:
    int stackstore[100];
    // Value isn't initialized here
    int SP;
public:
    // Constructor 
    Stack(void) { SP = 0; }
    void push(int value);
    int pop(void) {
        return stackstore[--SP];
    }
};

void Stack::push(int value) {
    stackstore[SP++] = value;
}

class AddingStack:Stack {

};

int main(void) {
    Stack little_stack, another_stack, funny_stack;

    little_stack.push(1);
    another_stack.push(little_stack.pop() + 1);
    funny_stack.push(another_stack.pop() + 2);

    cout << funny_stack.pop() << endl;

    return 0;
}
