/**
 * @file functional_objects_comparisons.cpp
 * @author your name (you@domain.com)
 * @brief 内建仿函数-关系仿函数
* 文档：
 * https://en.cppreference.com/w/cpp/utility/functional
 * 视频：
 * https://www.bilibili.com/video/BV1et411b73Z/?p=241&spm_id_from=pageDriver&vd_source=8bd7b24b38e3e12c558d839b352b32f4
 *
 * @version 0.1
 * @date 2023-07-20
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
#include <functional>// greater
#include <vector>
#include <algorithm>// sort
using namespace std;

void printVector(const vector<int>& v) {
    for (auto e : v) {
        cout << e << endl;
    }
}

int main(int argc, char const *argv[]) {
    // 准备数据
    vector<int> v;
    v.push_back(10);
    v.push_back(30);
    v.push_back(40);
    v.push_back(20);
    v.push_back(50);
    printVector(v);

    // 排序（降序）
    sort(v.begin(), v.end(), greater<int>());
    cout << "#### 排序后 ####" << endl;
    printVector(v);

    return 0;
}