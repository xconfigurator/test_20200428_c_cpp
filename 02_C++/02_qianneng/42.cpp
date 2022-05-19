/*
形状类及其派生 P88

写出下面程序的运行结果，并解释为什么。
liuyang:非常直白的继承结构构造和析构过程演示。

输出：

Base::Draw()
Polygon::Draw()

Base::Draw()
Polygon::Draw()
Rectangle::Draw()

Base::Draw()
Polygon::Draw()
Rectangle::Draw()
Square::Draw()
----------------------------
Square::Erase()
Rectangle::Erase()
Polygon::Erase()
Base::Erase()

Rectangle::Erase()
Polygon::Erase()
Base::Erase()

Polygon::Erase()
Base::Erase()

*/
#include <iostream>
using namespace std;

class Shape {
public:
    void Draw() { cout << endl << "Base::Draw()" << endl; }
    void Erase() { cout << "Base::Erase()" << endl << endl; }
    Shape() { Draw(); }
    virtual ~Shape() { Erase(); }
};

class Polygon:public Shape {
public:
    Polygon() { Draw(); }
    void Draw() { cout << "Polygon::Draw()" << endl;}
    void Erase() { cout << "Polygon::Erase()" << endl; }
    ~Polygon() { Erase(); }
};

class Rectangle:public Polygon {
public:
    Rectangle() { Draw(); }
    void Draw() { cout << "Rectangle::Draw()" << endl; }
    void Erase() { cout << "Rectangle::Erase()" << endl; }
    ~Rectangle() { Erase(); }
};

class Square: public Rectangle {
public:
    Square() {Draw(); }
    void Draw() { cout << "Square::Draw()" << endl; }
    void Erase() { cout << "Square::Erase()" << endl; }
    ~Square() { Erase();}
};

int main(int argc, char const *argv[]) {
    Polygon c;
    Rectangle s;
    Square t;
    cout << "----------------------------" << endl;
    return 0;
}