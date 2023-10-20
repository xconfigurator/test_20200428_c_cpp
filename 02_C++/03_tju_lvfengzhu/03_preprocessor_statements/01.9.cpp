/**
 * @file 02.9.cpp
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
    int a(5), b(6), i(0), j(0);
    switch(a) {
        case 5: switch(b) {
            case 5: i++; break;
            case 6: j++; break;
            default: i++; j++;
        }
        case 6: i++;
            j++;
            break;
        default: i++; j++;
    }
    cout << i << "," << j << endl;
    return 0;
}