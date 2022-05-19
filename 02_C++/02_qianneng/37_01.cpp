/*
整数类中+运算符重载的选择 P77
结论：友元函数允许一种更自然的语法。

说明：
当操作符重载时，很多情况下友元函数或成员函数可以得到同样的结果。
友元函数比成员函数多一个参数。

下面是两个Integer类，分别采用成员函数和友元函数重载+运算符。
检查其测试函数语句是否非法并说明为什么？
如何避免Integer2中的程序冗余（多次定义相同的函数 operator + (integer2&, int)和operator + (int, Integer2&)）?
见：37_02_fix.cpp
*/
#include <iostream>
using namespace std;

// 成员函数版本
class Integer {
public:
    void Set(int ii = 0) {i = ii;}
    Integer operator + (int);
    Integer operator + (Integer&);// B = A + 4 或 B = A + C，但B = 4 + A是非法的
private:
    int i;
};

Integer Integer::operator + (int x) {
    Integer result;
    result.Set(i + x);
    return result;
}

Integer Integer::operator + (Integer& x) {
    Integer result;
    result.Set(i + x.i);// 注意这个写法
    return result;
}

// 友元版本
class Integer2 {
public:
    void Set(int ii = 0) {i = ii;}
    friend Integer2 operator + (Integer2&, Integer2&);
    friend Integer2 operator + (Integer2&, int);// B = A + 4
    friend Integer2 operator + (int, Integer2&);// B = 4 + A 这样定义符合语法但显得重复
private:
    int i;
};

Integer2 operator + (Integer2& x, Integer2& y) {
    Integer2 result;
    result.Set(x.i + y.i);
    return result;
}

Integer2 operator + (Integer2& x, int a) {
    Integer2 result;
    result.Set(x.i + a);
    return result;
}

Integer2 operator + (int a, Integer2& x) {
    Integer2 result;
    result.Set(x.i + a);
    return result;
}

int main(int argc, char const *argv[]) {
    Integer A, B, C;
    A.Set(20);
    C.Set(10);
    B = A + 4;
    B = A + C;
    //B = 4 + A;// 非法！

    Integer2 D, E, F;
    D.Set(100);
    F.Set(200);
    E = D + 40;
    E = E + F;
    E = 40 + D;// OK
    return 0;
}