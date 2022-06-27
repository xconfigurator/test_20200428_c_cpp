/**
 * @file 116.cpp
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

class xt {
    friend class y;
public:
    void set(int i) {x = i;}
    void display()  {cout << x << " " << y << endl;}
private:
    int x;
    static int y;
};

class y {
public:
    y(int i, int j) {a.x = i; xt::y = j;}
    void display()  {cout << a.x << " " << xt::y++ << endl;}
private:
    xt a;
};

int xt::y = 2;

int main(int argc, char const *argv[]) {
    xt ob1;
    ob1.set(5);
    ob1.display();

    y ob2(3, 4);
    ob2.display();
    ob1.display();
    return 0;
}