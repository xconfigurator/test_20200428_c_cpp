/*
阶乘

递归的经典入门程序

https://www.bilibili.com/video/BV1Zb411q7iY?p=6
*/
#include <iostream>
using namespace std;

int Factorial(int n) {
    if (n == 0) {
        return 1;
    } else  {
        return n * Factorial(n - 1);
    }
}

int main(int argc, char const *argv[]) {
    cout << "4! = " << Factorial(4) << endl;
    return 0;
}