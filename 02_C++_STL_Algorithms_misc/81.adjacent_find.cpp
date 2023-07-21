/**
 * @file 81.adjacent_find.cpp
 * @author your name (you@domain.com)
 * @brief 查找相邻重复元素
 * 参考：
 * https://en.cppreference.com/w/cpp/algorithm/adjacent_find
 * 视频：
 * https://www.bilibili.com/video/BV1et411b73Z/?p=247&spm_id_from=pageDriver&vd_source=8bd7b24b38e3e12c558d839b352b32f4
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

int main(int argc, char const *argv[]) {
    vector<int> v;
    v.push_back(0);
    v.push_back(2);
    v.push_back(0);
    v.push_back(3);
    v.push_back(1);
    v.push_back(4);
    v.push_back(3);// adjacent_find会返回这个位置的迭代器
    v.push_back(3);// 注释掉这一行后会输出未找到相邻重复元素

    vector<int>::iterator iter = adjacent_find(v.begin(), v.end());
    if (iter == v.end()) {
        cout << "未找到相邻重复元素" << endl;
    } else {
        cout << "相邻重复元素：" << *iter << endl;
    }
    return 0;
}