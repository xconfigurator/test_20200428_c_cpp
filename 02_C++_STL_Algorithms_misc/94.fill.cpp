/**
 * @file 94.fill.cpp
 * @author your name (you@domain.com)
 * @brief 向容器中指定区间填充指定元素
 * 参考：
 * https://en.cppreference.com/w/cpp/algorithm/fill
 * 视频：
 * https://www.bilibili.com/video/BV1et411b73Z/?p=260&spm_id_from=pageDriver&vd_source=8bd7b24b38e3e12c558d839b352b32f4
 * 
 * @version 0.1
 * @date 2023-07-21
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void Print(const int & v) {
    cout << v << "\t";
}

int main(int argc, char const *argv[]) {
    vector<int> v;
    v.resize(10);// 默认填充0
    cout << "默认填充值：\t";
    for_each(v.begin(), v.end(), Print);
    cout << endl;

    // 全部填充成指定值
    fill(v.begin(), v.end(), 4);
    cout << "用fill填充：\t";
    for_each(v.begin(), v.end(), Print);
    cout << endl;
    return 0;
}