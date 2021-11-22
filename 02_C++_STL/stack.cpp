/*
stack
https://en.cppreference.com/w/cpp/container/stack
*/
#include <iostream>
#include <stack>
#include <string>
using namespace std;

// Container adapators
stack<string> s = stack<string>();

int main() {
    s.push("hello");
    s.push("stack");

    cout << "s.top() = " << s.top() << endl;
    s.pop();
    cout << "s.pop();s.top() = " << s.top() << endl;

    s.push("foo");
    s.push("bar");
    while (!s.empty()) {
        cout << s.top() << endl;
        s.pop(); 
    }
    return 0;
}