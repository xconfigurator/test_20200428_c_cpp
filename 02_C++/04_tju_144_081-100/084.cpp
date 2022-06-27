/**
 * @file 084.CPP
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

int fun(int &x, int y = 5);

int main(int argc, char const *argv[]) {
    int a = 4;
    cout << fun(a) << " ";
    cout << fun(a, fun(a, fun(a))) << endl;
    return 0;
}

int fun(int &x, int y) {
    x++;
    int s = x + y;
    return s;
}

// 注意引用方式调用会改变参数值