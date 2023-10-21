/**
 * @file array09_parameter_01_string_arr.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-06
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#include <string>
using namespace std;

string weekdays[] = {
    "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"
};

//void show(string[] strArr, int n) {// C++可不能这么写！
void show(string strArr[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << strArr[i] << endl;
    }
}

int main(int argc, char const *argv[]) {
    show(weekdays, 7);
    return 0;
}