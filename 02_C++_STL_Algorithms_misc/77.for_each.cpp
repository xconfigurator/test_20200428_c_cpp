/**
 * @file 77.for_each.cpp
 * @author your name (you@domain.com)
 * @brief：
 * 参考：
 * https://en.cppreference.com/w/cpp/algorithm/for_each
 * 视频：
 * https://www.bilibili.com/video/BV1et411b73Z?p=243&vd_source=8bd7b24b38e3e12c558d839b352b32f4
 * 
 * @version 0.1
 * @date 2023-07-20
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 使用普通函数完成输出
void Print01(int val) {
    cout << val << "\t";
}

// 使用函数对象进行输出
class Print02 {
public:
    void operator() (int val) {
        cout << val << "\t";
    }
};

int main(int argc, char const *argv[]) {
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // 使用普通函数
    for_each(v.begin(), v.end(), Print01);
    
    cout << endl;

    // 使用函数对象（仿函数)
    for_each(v.begin(), v.end(), Print02());
    return 0;
}