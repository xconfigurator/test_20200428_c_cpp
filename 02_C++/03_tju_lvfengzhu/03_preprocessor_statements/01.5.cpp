/**
 * @file 02.5.cpp
 * @author your name (you@domain.com)
 * @brief 分析程序输出结果
 * @version 0.1
 * @date 2023-10-20
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;

int main() {
    int i(1);
    do {
        i++;
        cout << ++i << endl;
    } while(i == 3);
    cout << "ok!\n";
    return 0;
}