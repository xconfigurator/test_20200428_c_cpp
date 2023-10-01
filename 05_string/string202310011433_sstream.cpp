/**
 * @file string202310011433.cpp
 * @author your name (you@domain.com)
 * 郭炜介绍string。
 * istringstream
 * 视频：
 * https://www.bilibili.com/video/BV1ob411q7vb/?p=40&vd_source=8bd7b24b38e3e12c558d839b352b32f4
 * @brief 
 * @version 0.1
 * @date 2023-10-01
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
#include <sstream> // istringstream ostringstream
using namespace std;

int main(int argc, char const *argv[]) {
    // istringstream
    string input("Input test 123 4.7 A");
    istringstream inputString(input);
    string string1, string2;
    int i;
    double d;
    char c;
    inputString >> string1 >> string2 >> i >> d >> c;
    cout << string1 << endl << string2 << endl << i << endl << d << endl << c << endl;
    long L;
    if (inputString >> L) {
        cout << "long\n";
    } else {
        cout << "empty\n";
    }

    // ostringstream
    ostringstream outputString;
    int a = 10;
    outputString << "This " << a << "ok" << endl;
    cout << outputString.str() << endl;

    return 0;
}