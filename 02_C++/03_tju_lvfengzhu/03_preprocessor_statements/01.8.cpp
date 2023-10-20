/**
 * @file 02.8.cpp
 * @author your name (you@domain.com)
 * @brief 分析程序运行结果
 * @version 0.1
 * @date 2023-10-20
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;

int main() {
    int x(5);
    do {
        switch(x % 2) {
            case 1:
                x--;
                break;
            case 2:
                x++;
                break;
        }
        x--;
        cout << x << endl;
    } while(x > 0);
    return 0;
}