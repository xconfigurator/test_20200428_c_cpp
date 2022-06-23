/**
 * @file 050.cpp
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

class Cnt {
    friend void setX(Cnt &, int);
public:
    Cnt() {
        x = 0;
    }
    void print() {
        cout << x << endl;
    }
private:
    int x;
};

void setX(Cnt &c, int v) {
    c.x = v;
}

int main(int argc, char const *argv[]) {
    Cnt ob;
    char *p1 = "object.X after "
        , *p2 = "instantiantion "
        , *p3 = "call to setx friend function:";

    cout << p1 << p2;
    ob.print();

    cout << p1 << p3;
    setX(ob, 12);
    ob.print();

    return 0;
}