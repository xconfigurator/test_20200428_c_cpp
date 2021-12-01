/**
 * @file string01.cpp
 * @author liuyang copy from guowei
 * @brief string用法示例
 * 
 * P89 6.4.5.1.cpp
 * 
 * @version 0.1
 * @date 2021-12-01
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
#include <string>                       // 注意！
#include <cstring>
using namespace std;

int main(int argc, char const *argv[]) {
    string s1 = "123", s2;              // s2是空串
    s2 += s1;                           // s2 = "123"
    s1 = "abc";                         // s1 = "abc"
    s1 += "def";                        // s1 = "abcdef"
    cout << "1. " << s1 << endl;
    
    if (s2 < s1) {
        cout << "2. s2 < s1" << endl;   // s2 < s1 问题："abc" < "abcdef" ? 见最后面的测试代码。
    } else {
        cout << "2. s2 >= s1" << endl;  // 不被执行 
    }

    s2[1] = 'A';                        // s2 = "1A3"
    s1 = "XYZ" + s2;                    // s1 = "XYZ1A3"
    string s3 = s1 + s2;                // s3 = "XYZ1A31A3"
    cout << "3. " << s3 << endl;        
    cout << "4. " << s3.size() << endl; // 9
    string s4 = s3.substr(1, 3);        // "YZ1" 下标从1开始，长度为3
    cout << "5. " << s4 << endl;
    char str[20];
    strcpy(str, s4.c_str());            // 复制s4中的字符串到str 
    cout << "6. " << str << endl;       // "YZ1"

    // 字母多的大
    // liuyang begin
    cout << "##" << endl;
    s1 = "abc";
    s2 = "abcde";
    cout << s1 << endl << s2 <<endl;
    cout << (s1 < s2) << endl;
    // liuyang endl;
    return 0;
}