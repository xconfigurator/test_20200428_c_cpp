/**
 * @file 85.sort.cpp
 * @author your name (you@domain.com)
 * @brief 
 * 参考：
 * https://en.cppreference.com/w/cpp/algorithm/sort
 * 视频:
 * https://www.bilibili.com/video/BV1et411b73Z/?p=251&spm_id_from=pageDriver&vd_source=8bd7b24b38e3e12c558d839b352b32f4
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
#include <functional>// greater
using namespace std;

void Print(const int & val) {
    cout << val << "\t";
}

int main(int argc, char const *argv[]) {
    vector<int> v {10, 30, 50, 20, 40};

    cout << "排序前:\t";
    for_each(v.begin(), v.end(), Print);
    cout << endl; 
    
    sort(v.begin(), v.end());// 默认升序
    cout << "升序：\t";
    for_each(v.begin(), v.end(), Print);
    cout << endl;

    sort(v.begin(), v.end(), greater<int>());// 降序
    cout << "降序：\t";
    for_each(v.begin(), v.end(), Print);
    cout << endl;

    return 0;
}