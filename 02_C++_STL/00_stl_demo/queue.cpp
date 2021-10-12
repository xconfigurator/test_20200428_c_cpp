/*
queue
https://en.cppreference.com/w/cpp/container/queue

@author liuyang
@since 20211012

编译环境 VSCode + Mingw64
*/
#include <iostream>
#include <deque>
#include <queue>
#include <string>
using namespace std;

// Container adapators
queue<string> q = queue<string>();

int main(int argc, char const *argv[]) {
    q.push("hello");
    q.push("queue");

    cout << "q.size() = " << q.size() << endl;
    cout << "q.front() = " << q.front() << endl;
    cout << "q.size() = " << q.size() << endl;

    cout << "q.size() = " << q.size() << endl;
    q.pop();
    cout << "q.pop(); q.front() = " << q.front() << endl;
    cout << "q.size() = " << q.size() << endl;

    q.push("foo");
    q.push("bar");
    while (!q.empty()) {
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}