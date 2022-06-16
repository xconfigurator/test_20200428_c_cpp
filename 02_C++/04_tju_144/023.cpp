/**
 * @file 023.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-16
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[]) {
    char s1[20];
    cin >> s1;// 输入: hello world

    cout << "s1 = " << s1 << endl;
    cout << "s1:" << strlen(s1) << endl;

    char s2[] = "Hello C\0++";
    cout << "s2:" << strlen(s2) << endl;
    
    return 0;
}