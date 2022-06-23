/**
 * @file 043.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-23
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

class counter {
private:
    int objno;
public:
    static int count;
    counter() {
        count++;
        objno = count;
    }
    ~counter() {
        count--;
    }
    void show();
};

void counter::show() {
    cout << "obj" << objno << " " << "count=" << count << endl;
}

int counter::count = 0;

void show() {
    cout << "At present obj num:" << counter::count << endl;
}

int main(int argc, char const *argv[]) {
    counter obj1;
    obj1.show();
    counter *pc;
    pc = new counter;
    pc->show();
    obj1.show();
    show();

    counter obj2;
    obj1.show();
    obj2.show();
    pc->show();

    delete pc;
    show();

    counter obj3;
    obj3.show();
    show();
    
    return 0;
}