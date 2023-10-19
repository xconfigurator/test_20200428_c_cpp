/**
 * @file 1.1.cpp
 * @author your name (you@domain.com)
 * @brief 
 * 1.1-the-first-example
 * C++ 11
 * https://www.bilibili.com/video/BV1Vf4y1P7pq/?p=2&spm_id_from=pageDriver&vd_source=8bd7b24b38e3e12c558d839b352b32f4
 *
 * g++ hello.cpp --std=c++11 -o hello
 * 
 * @version 0.1
 * @date 2023-10-19
 * 
 * @copyright Copyright (c) 2023
 * 
 */
 #include <iostream>
 #include <vector>
 #include <string>

 using namespace std;

 int main() {
    vector<string> msg {"Hello", "C++", "World", "!"};
    for (const string& word : msg) {
        cout << word << " ";
    }
    cout << endl;
 }