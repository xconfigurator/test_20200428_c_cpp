/**
 * @file regex_01.cpp
 * @author your name (you@domain.com)
 * @brief 
 * C++ 11
 * 视频参考： https://www.bilibili.com/video/av7701532/?p=12&vd_source=8bd7b24b38e3e12c558d839b352b32f4
 * @version 0.1
 * @date 2023-09-28
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
#include <regex>
using namespace std;

void info(bool flag) {
    cout << (flag ? "Matched" : "Not matched") << endl;
}

int main(int argc, char const *argv[]) {
    regex pattern("[a-z]{3}");
    bool result = regex_match("abc", pattern);
    info(result);

    regex pattern2("[a-z]{3}", regex_constants::icase);
    bool result2 = regex_match("Abc", pattern2);
    info(result2);
    
    return 0;
}