/**
 * @file 045.cpp
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

class M {
    int x, y;
public:
    M() {
        x = y = 0;
    }
    M(int i, int j) {
        x = i;
        y = j;
    }
    void setxy(int i, int j) {
        x = i;
        y = j;
    }
    void copy(M *m) {
        x = m->x;
        y = m->y;
    }
    void print() {
        cout << "x=" << x << " y=" << y << endl;
    }
};

void fun(M m1, M *m2, M &m3) {
    m1.setxy(10, 20);
    m2->setxy(11, 22);
    m3.setxy(1, 2);
}

int main(int argc, char const *argv[]) {
    M mp(3, 9), mq(33, 44), mr;

    cout << "mp:"; mp.print();
    cout << "mq:"; mq.print();

    mr.copy(&mp);
    cout << "mr:"; mr.print();

    fun(mp, &mq, mr);

    cout << "mp:"; mp.print();
    cout << "mq:"; mq.print();
    cout << "mr:"; mr.print();

    return 0;
}