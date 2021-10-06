/*
用类方法求解一元二次方程 P46

实现一个Complex类和一个Real类。
将Real类定义为Complex类的子类。
然后设计一个求解一元二次实系数方程的根的类Rot。
class Root {
public:
    const Complex& Solve();
    ...
};

注1：setiosflags(ios::showpos)/resetiosflags(ios::showpos)的使用
注2：演示了一下“toString”, 即
friend ostream& operator << (ostream& out, const Complex&);
复习：友元函数不是成员，不能用对象名来限制，友元函数不被继承，但是友元函数可以是不止一个类的友元。

输入三组数据观察结果：
1 2 3   （delta < 0）

1 6 3   （delta > 0）

1 4 4   （delta == 0）
*/
#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;

class Complex {
public:
  Complex(double r = 0, double i = 0) {
    re = r;
    im = i;
  }
  virtual void Print();
  friend ostream &operator<<(ostream &out, const Complex &);

protected:
  double re, im;
};

class Real : public Complex {
public:
  Real(double r = 0) : Complex(r, 0) {}
  void Print() { cout << re; }
  friend ostream &operator<<(ostream &out, const Real &);
};

class Root {
public:
  Root(double m1, double m2, double m3) {
    a = m1;
    b = m2;
    c = m3;
  }
  void Print();
  void Solve();

protected:
  double a, b, c;
};

void Complex::Print() { cout << "(" << re << "," << im << "i)"; }

// Complex toString()
ostream &operator<<(ostream &out, const Complex &c) {
  out << "(" << c.re << "," << c.im << "i)";
  return out;
}

// Real toString()
ostream &operator<<(ostream &out, const Real &r) {
  out << r.re;
  return out;
}

void Root::Print() {
  cout << "方程 " << a << setiosflags(ios::showpos) << "*X*X" << b << "*X" << c
       << " = 0" << resetiosflags(ios::showpos) << endl;
}

void Root::Solve() {
  Print(); // member of Root
  cout << "的解是：" << endl;
  // 求根公式
  double delta = b * b - 4 * a * c;

  // delta == 0
  if (fabs(delta) < 1e-5) {
    Real x(-b / (2 * a));
    cout << "X1 = X2 = " << x << endl;
    return;
  }

  // delta > 0
  if (delta > 0) {
    Real x1(-b / (2 * a) + sqrt(delta) / (2 * a)); // -b/2/a + sqrt(delta)/2/a
    Real x2(-b / (2 * a) - sqrt(delta) / (2 * a));
    cout << "X1 = " << x1 << endl << "X2 = " << x2 << endl;
    return;
  }

  // delta < 0
  if (delta < 0) {
    Complex x1(-b / (2 * a), sqrt(-delta) / (2 * a));
    Complex x2(-b / (2 * a), -sqrt(-delta) / (2 * a));
    cout << "X1 = " << x1 << endl << "X2 = " << x2 << endl;
    return;
  }
}

int main(int argc, char const *argv[]) {
  double a, b, c; // 方程洗漱
  cout << endl << "请输入一元二次方程的系数： a, b, c:";
  cin >> a >> b >> c;

  Root root(a, b, c);
  root.Solve();
  return 0;
}