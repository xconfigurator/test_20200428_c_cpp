/*
认清副作用 P43 
2021/9/18

编写一个调用有副作用函数的程序。
2021/9/18

注：副作用由全局变量引起, 或者说，可以说是一种传递参数或信号的方式。

定义三个函数，分别返回1,2,3，使得主函数求得其函数和为6。
设置一个全局变量，在三个函数中交错修改该全局变量。
在函数中，其switch中的case入口取决于全局变量的值，所以它导致函数的行为不确定
（liuyang: 个人认为如果视为信号则实验结果在本程序内可预期，但如果涉及并发，则结果可能不确定）。

运行结果：
f() first 
g() second
k() third 
6
*/
#include <iostream>
using namespace std;

int b = 1;

int f() {
    switch(b) {
        case 1: cout << "f() first" << endl; break;
        case 2: cout << "f() second" << endl; break;
        case 3: cout << "f() third" << endl; break;
    }
    b++; 
    return 1;
}

int g() {
    switch(b) {
        case 1: cout << "g() first" << endl; break;
        case 2: cout << "g() second" << endl; break;
        case 3: cout << "g() third" << endl; break;
    }
    b++;
    return 2;
}

int k() {
    switch(b) {
        case 1: cout << "k() first" << endl; break;
        case 2: cout << "k() second" << endl; break;
        case 3: cout << "k() third" << endl; break;
    }
    b++;
    return 3;
}

int main(int argc, char const *argv[]) {
    int a;
    a = f() + g() + k();
    cout << a << endl;
    return 0;
}