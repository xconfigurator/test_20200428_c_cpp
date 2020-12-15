#include <iostream>
using namespace std;

#include "Stack.h"

Stack::Stack() : myTop(-1) {}

bool Stack::empty() const { return (myTop == -1); }

void Stack::push(const StackElement &value) {
  if (myTop < STACK_CAPACITY - 1) {
    ++myTop;
    myArray[myTop] = value;
  } else {
    cerr << "*** Stack full -- can't add new value *** " << endl;
    cerr << "Must increase value of STACK_CAPACITY in Stack.h" << endl;
    exit(1);
  }
}

void Stack::display(ostream &out) const {
  for (int i = myTop; i >= 0; i--) {
    out << myArray[i] << endl;
  }
}

StackElement Stack::top() const {
  if (!empty()) {
    return (myArray[myTop]);
  } else {
    cerr << "*** Stack is empty -- returning garbage value ***" << endl;
    // StackElement garbage;
    // return garbage;
    // return;
  }
}

void Stack::pop() {
  if (!empty()) {
    myTop--;
  } else {
    cerr << "*** Stack is empty -- can't remove a value" << endl;
  }
}