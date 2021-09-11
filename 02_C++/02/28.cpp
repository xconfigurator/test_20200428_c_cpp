/*
字符栈类 P57
用Stack类，写一个函数LoadStack(), 用来返回已经将字母(a-z)入栈的堆栈。
在调用函数中，讲这个堆栈赋值给另一个对象，并且证明它包含字母表。
可以改变堆栈的尺寸，以便它大得足以支持字母表。
*/
#include <iostream>
using namespace std;

const int SIZE = 27;

// Declare a stack class for English alphabet
class Stack {
public:
    Stack():tos(0){};
    void Push(char ch); // push letter to stack
    char Pop();         // pop letter from stack
private:
    char stck[SIZE];    // holds the stack
    int tos;            // index of top-of-stack
};

void Stack::Push(char ch) {
    if (SIZE == tos) {
        cout << "\nStack is full\n";
        return ;
    }
    stck[tos++] = ch;
}

char Stack::Pop() {
    if (0 == tos) {
        cout << "\nStack is empty\n";
        return 0;       // return null on empty stack.
    }
    tos --;
    return stck[tos];   // top of stack becomes top - 1
}

void ShowStack(Stack& s);
Stack LoadStack();

int main() {
    Stack s1;
    s1 = LoadStack();   // defaultassign operator in class Stack
    ShowStack(s1);
    return 0;
}

// Display the contents of a stack
void ShowStack(Stack& s) {
    char ch;
    // When this statement ends, the s stack is empty
    while ((ch = s.Pop()) != 0) {// 0是Pop方法约定好的
        cout << ch << " ";
    }
    cout << endl;
}

// Load a stack with the letters of the alphabet
Stack LoadStack() {
    Stack t;
    for (char ch = 'a'; ch <= 'z'; ch++) {
        t.Push(ch);
    }
    return t;
}