/**
 * @file array09_parameter_03_towdemension_str.cpp
 * @author your name (you@domain.com)
 * @brief 字符串数组做参数（字符串数组可以视为二维数组）
 * @version 0.1
 * @date 2022-12-06
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#include <string>
using namespace std;

//string weekdays[] = {
char *weekdays[] = {// 注意到这样写的话C++是有警告的！ ISO C++ forbids converting a string constant to 'char*' [-Wwrite-strings]
    "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"
};


void show(char *strArr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << strArr[i] << endl;
    }
}

int main(int argc, char const *argv[]) {
    show(weekdays, 7);
    return 0;
}