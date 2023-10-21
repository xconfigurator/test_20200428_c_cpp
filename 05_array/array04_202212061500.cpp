/**
 * @file array04_202212061500.cpp
 * @author your name (you@domain.com)
 * @brief 关于郭炜给出例子的另外表示方式。
 *        不适用string的二维数组表示方法
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

// 输出部分与上例完全相同
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