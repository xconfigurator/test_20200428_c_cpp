/**
 * @file array04.cpp
 * @author liuyang
 * @brief 杂例
 * 
 * 02:26 有时候会用一个数组存放一些固定不变的值，以取代复杂的程序分支结构。
 * 
 * @version 0.1
 * @date 2021-11-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
#include <string>
using namespace std;

string weekdays[] = {
    "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"
};

int main(int argc, char const *argv[]) {
    int n;
    cin >> n;
    while (n != -1) {
        if (n > 7 || n < 1) {
            cout << "Illegal" << endl;
        } else {
            cout << weekdays[n - 1] << endl;
        }
        cin >> n;
    }
    return 0;
}