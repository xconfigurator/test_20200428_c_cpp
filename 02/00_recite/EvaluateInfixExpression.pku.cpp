
/*
表达是求值
使用表达式的递归定义直接求解，不是变成后缀表达式后再求值。

一个综合小例子。
https://www.bilibili.com/video/BV1Zb411q7iY?p=10

解题重点：
听一下表达式的递归定义在视频的前半部分讲解。程序不需要死记硬背。

输入示例：(本例程不能有空格)
(2+3)*(5+7)+9/3

输出示例：
63
 */
#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int factor_value(); // 读入一个因子并计算因子的值
int term_value(); // 读入一个项并计算项的值
int expression_value(); // 读入一个表达式并计算表达式的值

int main(int argc, char const *argv[]) {
    cout << expression_value() << endl;
    return 0;
}

int expression_value() {
    int result = term_value(); // 求第一个项的值
    bool more = true;
    while (more) {
        char op = cin.peek(); // 看一个字符，不取走。
        if (op == '+' || op == '-') {
            cin.get(); // 从输入中取走一个字符
            int value = term_value();
            if ( op == '+' ) {
                result += value;
            } else {
                result -= value;
            }
        } else {
            more = false;
        }
    }
    return result;
}

int term_value() {
    int result = factor_value(); // 求第一个因子的值
    while (true) {
        char op = cin.peek();
        if (op == '*' || op == '/') {
            cin.get();
            int value = factor_value();
            if (op == '*') {
                result *= value;
            } else {
                result /= value;
            }
        } else {
            break;
        }
    }
    return result;
}

int factor_value() {
    int result = 0;
    char c = cin.peek();
    if (c == '(') {
        cin.get();
        result = expression_value();
        cin.get();
    } else {
        while (isdigit(c)) {
            result = 10 * result + c - '0';
            cin.get();
            c = cin.peek();
        }
    }
    return result;
}