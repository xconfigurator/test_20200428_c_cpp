/**
 * @file 113.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

class sample {
    int x, y;
public:
    sample()                {x = 0; y = 0;}
    sample(int i, int j)    {x = i; y = j;}
    void copy(sample &A)    {x = A.x; y = A.y;}
    void add()              {x += y++; y += x++;}
    void display() {
        cout << "x=" << x << endl;
        cout << "y=" << y << endl;
    }
};

int main(int argc, char const *argv[]) {
    sample ob1, ob2(1, 2);
    ob2.add();
    ob1.copy(ob2);
    ob1.add();
    ob1.display();
    return 0;
}