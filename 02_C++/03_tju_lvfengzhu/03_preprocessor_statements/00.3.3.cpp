/**
 * @file 00.3.3.cpp
 * @author your name (you@domain.com)
 * @brief 编写一个程序将百分制成绩转换为A,B,C,D4个等级。
 * @version 0.1
 * @date 2023-10-19
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;

int main() {
    int score;
    cout << "请输入成绩：";
    cin >> score;
    if (score >= 90) {
        cout << "A" << endl;
    } else if (score >= 80) {
        cout << "B" << endl;
    } else if (score >= 60) {
        cout << "C" << endl;
    } else {
        cout << "D" << endl;
    }
    return 0;
}
