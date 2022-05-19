/*
测评内联函数的效率 P36
2021/9/18

设计一个程序，比较
1. 直接运行语句(i > j) ? i : j
2. 运行内联函数
3. 运行外部函数
三者所耗时间。

再将内联函数或外部函数设计得复杂一点之后比较三者所耗时间。(略)


结论：P39
首先，只有当函数足够小，并且频繁被调用时，才有理由使用inline函数。
以上两个例子可以看出，inline函数速度上的优越性随着函数体中语句的增多而减小。
从某种程度上讲，当inline函数调用的开销与执行函数体的开销相比不那么重要时，其优越性便减小了。

当编译时遇到inline定义时，它不会像普通函数定义那样产生代码，而是记住该函数的代码。
在inline函数调用中（看起来就像对其他函数的调用），编译程序会像对待其他函数调用一样检查其使用是否正确，然后再为函数调用替换代码。
因此，它是将预处理程序宏的效率与普通函数的错误检查结合在了一起。
*/
#include <iostream>
#include <time.h>
using namespace std;

inline int comp1(int a, int b) {
    return a > b ? a : b;
}

int comp2(int a, int b) {
    return a > b ? a : b;
}

// 测试内联函数调用
void callInline() {
    double t1, t2;
    t1 = (double) clock();

    for (int m = 0; m < 10000; m++) {
        for (int n =0; n < 10000; n++) {
            comp1(m, n);
        }
    }

    t2 = (double) clock();
    cout << "调用内联函数运行时间:\t" << (t2 - t1) / CLK_TCK << endl;
}

// 测试外部函数调用
void callNormal() {
    double t1, t2;
    t1 = (double) clock();

    for (int m = 0; m < 10000; m++) {
        for (int n =0; n < 10000; n++) {
            comp2(m, n);
        }
    }

    t2 = (double) clock();
    cout << "调用外部函数运行时间：\t" << (t2 - t1) / CLK_TCK << endl;
}

// 测试直接调用
void callDirect() {
    double t1, t2;
    t1 = (double) clock();

        for (int m = 0; m < 10000; m++) {
        for (int n =0; n < 10000; n++) {
            m > n ? m : n;
        }
    }

    t2 = (double) clock();
    cout << "直接运行时间:\t" << (t2 - t1) / CLK_TCK << endl;
}

int main(int argc, char const *argv[]) {
    callInline();
    callNormal();
    callDirect();
}