/**
 * @file 20.cpp 成绩转换
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*
Problem Description:
    输入一个百分制的成绩t，将其转换成对应的等级，具体转换规则如下：
    90 ~ 100    A
    80 ~ 89     B
    70 ~ 79     C
    60 ~ 69     D
    0 ~ 59      E 
Input:
    输入数据有多组，每组占一行，由一个整数组成。
Output:
    对于每组输入，输出一行。如果输入数据不在0 ~ 100范围内，请输出一行“Score is error!”
Sample Input:
56
67
100
123

Sample Output:
E
D
A
Score is error!
*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    int n;
    while (cin >> n) {
        if (n >=90 && n <= 100) {
            cout << "A" << endl;
        } else if (n >= 80 && n <= 89) {
            cout << "B" << endl;
        } else if (n >= 70 && n <= 79) {
            cout << "C" << endl;
        } else if (n >= 60 && n <= 69) {
            cout << "D" << endl;
        } else if (n >= 0 && n <= 59) {
            cout << "E" << endl;
        } else {
            cout << "Score is error!" << endl;
        }
    }
    return 0;
}