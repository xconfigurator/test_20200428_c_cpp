#include <iostream>
#define N 100
using namespace std;

// Hello 50 OK! 注意原题没有delete栈，故没输出Bye

class CStack {
public:
  CStack() {
    top = 0;
    cout << "Hello ";
  }
  ~CStack() { cout << "Bye"; }
  void push(int i);
  int pop();

private:
  int stack[N];
  int top;
};

void CStack::push(int i) {
    if (top == N) {
      cout << "Overflow";
      return;
    } else {
      top++;
      stack[top] = i;
    }
}

int CStack::pop() {
  int temp;
  if (top == 0) {
    cout << "Underflow";
    return 0;
  } else {
    temp = stack[top];
    top--;
    return temp;
  }
}

int main() {
  CStack *ptr = new CStack;
  ptr->push(10);
  ptr->push(50);
  cout << ptr->pop() << " ";
  cout << "OK!" << endl;
  // liuyang
  delete ptr; // 原题没有delete 不输出"Bye"
  ptr = NULL;
  return 0;
}