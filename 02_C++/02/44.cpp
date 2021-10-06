/*
类的派生 P94

给出下面的基类：
class AreaClass {
public:
    // ...
protected:
    double height;
    double width;
};
建立两个派生类Box(方形类)与Isosceles(等腰三角形类)。
让每个派生类包含一个函数Area(),分别用来返回方形与等腰三角形的面积。
用参数化构造函数对height与width进行初始化。
*/
#include <iostream>
using namespace std;

class AreaClass {
public:
  AreaClass(int x = 0, int y = 0) : height(x), width(y) {}

protected:
  double height;
  double width;
};

class Box : public AreaClass {
public:
    Box(double h, double w) : AreaClass(h, w){};
    double Area();
};

class Isosceles : public AreaClass {
public:
    Isosceles(double h, double w) : AreaClass(h, w) {}
    double Area();
};

double Box::Area() {
    return width * height;
}

double Isosceles::Area() {
    return 0.5 * width * height;
}

int main(int argc, char const *argv[]) {
    Box b(10.0, 5.0);
    Isosceles d(4.0, 6.0);

    cout << "Box:" << b.Area() << endl;
    cout << "Triangle:" << d.Area() << endl;
    return 0;
}