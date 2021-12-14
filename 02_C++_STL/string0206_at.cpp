/**
 * @file string0206_at.cpp
 * @author liuyang
 * @brief string
 * 
 * 字符存取
 * char& operator[](int n);             
 * char& at(int n);
 * 
 * 参考：
 * https://en.cppreference.com/w/cpp/string/basic_string/operator_at
 * https://en.cppreference.com/w/cpp/string/basic_string/at
 * 
 * @version 0.1
 * @date 2021-12-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
    string str1 = "https://en.cppreference.com/w/cpp/string/basic_string/operator_at";

    // []
    for (int i = 0; i < str1.length(); ++i) {
        cout << str1[i];
    }
    cout << endl;

    // at
    for (int i = str1.length() - 1; i >= 0; --i) {
        cout << str1.at(i);
    }
    cout << endl;

    // 修改
    str1[8] = 'B';
    str1[9] = 'A';
    str1[10] = 'I';
    str1.at(11) = 'D';
    str1.at(12) = 'U';
    cout << str1 << endl;

    return 0;
}