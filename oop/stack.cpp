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
    private:
    int sum;
    public:
    AddingStack(void);
    void push(int value);
    int pop(void);
    int getSum(void);
};

// Constructor of subclass
AddingStack::AddingStack(void) : Stack() {
    sum = 0;
}

void AddingStack::push(int value) {
    sum += value;
    Stack::push(value);
}

int AddingStack::pop(void) {
    int val = Stack::pop();
    sum -= val;
    return val;
}

int AddingStack::getSum(void) {
    return sum;
}

int main(void) {

    // Superclass
    Stack little_stack, another_stack, funny_stack;

    little_stack.push(1);
    another_stack.push(little_stack.pop() + 1);
    funny_stack.push(another_stack.pop() + 2);

    cout << funny_stack.pop() << endl;

    // Subclass
    AddingStack super_stack;

    for (int i = 1; i < 10; i++)
        super_stack.push(i);

    cout << super_stack.getSum() << endl;

    for (int i = 1; i < 10; i++)
        super_stack.pop();

    cout << super_stack.getSum() << endl;
        
    return 0;
}
