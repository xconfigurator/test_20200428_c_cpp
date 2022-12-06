/**
 * @file pointer02_202212061521_function.cpp
 * @author your name (you@domain.com)
 * @brief 函数指针示例
 * @version 0.1
 * @date 2022-12-06
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

// minus n 
int subtract(int a, int b) {
    return a - b;
}

int main(int argc, char const *argv[]) {
    int (*p)(int, int);
    char n;
    cin >> n;// + - q
    while (n != 'q') {
        switch(n) {
            case '+':
                p = add;// 指针指向函数
                break;
            case '-':
                p = subtract;// 指针指向函数
                break;
            default:
                cout << "Illegal" << endl;
                cin >> n;
                continue;
                break;
        }
        cout << p(3, 4) << endl;w
        cin >> n;
    }
    return 0;
}