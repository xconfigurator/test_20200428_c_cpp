/*
整数类中+运算符重载的选择 P77
最佳实践：
友元函数（二元运算符更自然的重载选择） + 隐式类型转换（减少冗余）

说明：
当操作符重载时，很多情况下友元函数或成员函数可以得到同样的结果。
友元函数比成员函数多一个参数。

说明：
简而言之，在没有其他强制性要求的情况下，使用成员函数可以简化概念的表示；
如果想强行使用某种特殊的语法，也可以使用成员函数（使用成员函数operator = (int)可以防止用户使用 1 = A这样的语句）
如果语法要求所有的参数与次序无关，则可以使用friend（并且使用隐式类型转换来减少编码）<----- 这一点值得商榷！
*/
#include <iostream>
using namespace std;

class Integer3 {
public:
    Integer3(int ii = 0) {i = ii;}// 隐式类型转换
    friend Integer3 operator + (Integer3&, Integer3&);
private:
    int i;
};

Integer3 operator + (Integer3& x, Integer3& y) {
    return x.i + y.i;
}

int main(int argc, char const *argv[]) {
    Integer3 A(10), B(20), C;
    C = A + B;
    //C = A + 4;// gcc 会报错 cl能通过但有警告
    //C = 4 + A;// gcc 会报错 cl能通过但有警告
    return 0;
}