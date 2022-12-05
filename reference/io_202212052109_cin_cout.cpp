/**
 * @file io_202212052109_cin_cout.cpp
 * @author your name (you@domain.com)
 * @brief cin cout 稳定可靠！
 * @version 0.1
 * @date 2022-12-05
 * 
 * @copyright Copyright (c) 2022
 * 
输入样例：
10
1.1
c
string 
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    int a;
    float b;
    char c;
    char str[20];

    cin >> a;
    cin >> b;
    cin >> c;
    cin >> str;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "str = " << str << endl;

    return 0;
}