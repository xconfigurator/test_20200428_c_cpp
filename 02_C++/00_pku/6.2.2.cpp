/*
课本P112
几何形体程序实例(多态)
输入若干个几何形体的参数，要求按面积排序输出。输出时要指明形状。

输入示例：
4
R 3 5
C 9
T 3 4 5
R 2 2

输出示例：
Rectangle:4
Triangle:6
Rectangle:15
Circle:254.34

提示：
本例课件多态为提高程序的扩充性提供了坚实的基础。
用基类指针数组存放各种派生类对象的指针，然后遍历数组。
就能实现对个个派生对象做各种操作。这是很常用的做法。

看一下p119 关于多态的注意事项
6.4.1 
  在非构造函数，非析构函数的成员函数中调用虚函数，是多态。
6.4.2 
  在构造函数和析构函数中调用虚函数，不是多态。编译时即可确定，调用的函数是自己的类或基类中定义的函数，
  不会等到运行时才决定调用自己还是派生类的函数。(编译器就是这样设计的)
几何形体那个视频里面郭炜的例子可能更说明问题，考虑抄下来。

编译：
g++ 6.2.2.cpp -o 6.2.2.exe

运行(powershell)：
cat 6.2.2.data | ./6.2.2.exe

@author: liuyang copy from guowei
@since: 2020/05/31
*/
#include <cmath>
#include <iostream>
#include <stdlib.h>
using namespace std;

const double PI = 3.14;
const int INPUT_SIZE = 100; // 题目保证输入不超过100组

class CShape {
public:
    virtual double Area() = 0;
    virtual void PrintInfo() = 0;
}; // 注意分号

class CRectangle : public CShape {
public:
    int w, h;
    double Area();    // 必须要写。virutal可以不写
    void PrintInfo(); // 必须要写。virtual可以不写
};

class CCircle : public CShape {
public:
    int r;
    double Area();
    void PrintInfo();
};

class CTriangle : public CShape {
public:
    int a, b, c;
    double Area();
    void PrintInfo();
};

double CRectangle::Area() { return w * h; }

void CRectangle::PrintInfo() { cout << "Rectangle:" << Area() << endl; }

double CCircle::Area() { return PI * r * r; }

void CCircle::PrintInfo() { cout << "Circle:" << Area() << endl; }

double CTriangle::Area() { // 海伦公式
    double p = (a + b + c) / 2.0;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

void CTriangle::PrintInfo() { cout << "CTriangle:" << Area() << endl; }

CShape *pShapes[INPUT_SIZE]; // 用来存放各种几何形体

// 视频 8:35左右开始
int MyCompare(const void *s1, const void *s2) { // 自定义排序规则
    // s1, s2是void *， 不可以写 "*s1"来取得s1指向的内容。因为编译器根本不知道*s1是多少个字节。
    // s1, s2指向pShapes数组中的元素，数组元素的类型是CShape*
    // 我们现在需要让p1，p2分别指向CShape*这种类型的指针，也就是说p1、p2是指向指针的指针。
    CShape **p1 = (CShape **)s1; // s1是指向指针的指针，其指向的指针为CShape*类型
    CShape **p2 = (CShape **)s2;
    double a1 = (*p1)->Area(); // p1指向几何形体对象的指针，*p1才指向几何形体对象 （liuyang:p1是指向几何形体对象的指针的指针，*p1才是指向几何形体对象的指针。）
    double a2 = (*p2)->Area();
    if (a1 < a2) {
        return -1;
    } else if (a2 < a1) {
        return 1;
    } else {
        return 0;
    }
}

int main(int argc, char const *argv[]) {
    // int main() {
    int n;
    CRectangle *pr;
    CCircle *pc;
    CTriangle *pt;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        char c;
        cin >> c;
        switch (c) {
        case 'R': // 矩形
            pr = new CRectangle();
            cin >> pr->w >> pr->h;
            pShapes[i] = pr;
            break;
        case 'C': // 圆形
            pc = new CCircle();
            cin >> pc->r;
            pShapes[i] = pc;
            break;
        case 'T': // 三角形
            pt = new CTriangle();
            cin >> pt->a >> pt->b >> pt->c;
            pShapes[i] = pt;
            break;
        }
    } // end of for
    qsort(pShapes, n, sizeof(CShape *), MyCompare);
    for (int i = 0; i < n; ++i) {
        pShapes[i]->PrintInfo();
        delete pShapes[i]; // 释放空间
    }
    return 0;
}