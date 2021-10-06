/*
使用complex.h版本

输入三组数据观察结果：
1 2 3   （delta < 0）

1 6 3   （delta > 0）

1 4 4   （delta == 0）
*/
#include <iomanip>
#include <iostream>
#include <complex.h>
using namespace std;

class Root {
public:
    Root(double m1, double m2, double m3) {a = m1, b = m2, c = m3;}
    void Equation();
    void Solve();
protected:
    double a, b, c;
};

// solution1.cpp中的void Root::Print() 
void Root::Equation() {
    cout << "方程 " << a << setiosflags(ios::showpos) << "*X*X" << b << "*X" << c
    << " = 0" << resetiosflags(ios::showpos) << endl;
}
// solution1.cpp中的void Root::Solve() 略做修改
void Root::Solve() {
    Equation();
    cout << "的解是：" << endl;
  // 求根公式
  double delta = b * b - 4 * a * c;

  // 根
  complex<double> x1, x2;

  // delta == 0
  if (fabs(delta) < 1e-5) {
    //Real x(-b / (2 * a));
    x1 = (-b / (2 * a));
    cout << "X1 = X2 = " << x1 << endl;
    return;
  }

  // delta > 0
  if (delta > 0) {
    //Real x1(-b / (2 * a) + sqrt(delta) / (2 * a)); // -b/2/a + sqrt(delta)/2/a
    //Real x2(-b / (2 * a) - sqrt(delta) / (2 * a));
    x1 = -b / (2 * a) + sqrt(delta) / (2 * a);
    x2 = -b / (2 * a) - sqrt(delta) / (2 * a);
    cout << "X1 = " << x1 << endl 
         << "X2 = " << x2 << endl;
    return;
  }

  // delta < 0
  if (delta < 0) {
    //Complex x1(-b / (2 * a), sqrt(-delta) / (2 * a));
    //Complex x2(-b / (2 * a), -sqrt(-delta) / (2 * a));
    x1 = complex<double>(-b / (2 * a), sqrt(-delta) / (2 * a));
    x2 = complex<double>(-b / (2 * a), -sqrt(-delta) / (2 * a));
    cout << "X1 = " << x1 << endl 
         << "X2 = " << x2 << endl;
    return;
  }
}

// 同solution1.cpp
int main(int argc, char const *argv[]) {
    double a, b, c; // 一元二次方程的系数
    cout << endl << "请输入一元二次方程的系数： a, b, c:";
    cin >> a >> b >> c;

    Root root(a, b, c);
    root.Solve();
    return 0;
}