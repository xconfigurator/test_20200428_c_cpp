/*
基类指针的使用 P96

指出下面程序的错误，改正并说明为什么。

说明：
基类指针可以指向派生类对象，但只可以访问派生类对象从该基类继承下来的那些成员。
基类指针只认识基类，它不知道关于派生类的成员信息。
*/
#include <iostream>
using namespace std;

class Base {
public:
  void SetX(int i) { x = i; }
  int GetX() { return x; }

private:
  int x;
};

class Derived : public Base {
public:
  void SetY(int i) { y = i; }
  int GetY() { return y; }

private:
  int y;
};

int main(int argc, char const *argv[]) { 
    Base *p;
    Base b_ob;
    Derived d_ob;
    
    p = &b_ob;
    p->SetX(11);
    cout << "base object x:" << p->GetX() << endl;

    p = &d_ob;// 多态
    p->SetX(55);
    cout << "derived object x:" << p->GetX() << endl;

    //p->SetY(99);// error
    d_ob.SetY(99);
    cout << "derived object y:" << d_ob.GetY() << endl;

    return 0; 
}
