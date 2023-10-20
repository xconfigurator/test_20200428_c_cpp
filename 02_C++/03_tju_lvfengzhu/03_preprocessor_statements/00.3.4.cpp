/**
 * @file 00.3.4.cpp
 * @author your name (you@domain.com)
 * @brief 
 * 按要求编写一个菜单
 * 当选择菜单项A时表示输入学生成绩
 * 当选择菜单项B时表示查找学生成绩
 * 当选择菜单项C时表示显示学生成绩
 * 当选择菜单项Q时表示退出
 * 不区分大小写
 * @version 0.1
 * @date 2023-10-19
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    char choice;
    cout << "菜单项：A, B, C, Q,请选择之一：";
    cin >> choice;
    switch(choice) {
        case 'a':
        case 'A':
            cout << "输入学生成绩。\n";
            break;
        case 'b':
        case 'B':
            cout << "查找学生成绩。\n" ;
            break;
        case 'c':
        case 'C':
            cout << "显示学生成绩。\n";
            break;
        case 'q':
        case 'Q':
            cout << "退出。\n";
            exit(0);
            break;
        default:
            cout << "输入错。\n";
    }
    return 0;
}