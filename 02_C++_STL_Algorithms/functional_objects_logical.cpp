/**
 * @file functional_objects_logical.cpp
 * @author your name (you@domain.com)
 * @brief 内建仿函数-逻辑仿函数（在开发中基本用不到）
 * 文档：
 * https://en.cppreference.com/w/cpp/utility/functional
 * 视频：
 * https://www.bilibili.com/video/BV1et411b73Z/?p=242&spm_id_from=pageDriver&vd_source=8bd7b24b38e3e12c558d839b352b32f4
 *
 * @version 0.1
 * @date 2023-07-20
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>
using namespace std;

void printVector(const vector<bool>& v) {
    for (auto e : v) {
        cout << e << " ";
    }
    cout << endl;
}

int main(int argc, char const *argv[]) {
    vector<bool> v1 = {true, false, true, false};
    // v.push_back(true);
    printVector(v1);

    // 取反后放入另外的容器
    vector<bool> v2;
    v2.resize(v1.size());// 注意：transform的目标容器一定要提前开辟好空间！否则会运行时报错，可以尝试。
    transform(v1.begin(), v1.end(), v2.begin(), logical_not<bool>());
    cout << "取反后结果" << endl;
    printVector(v2);
    return 0;
}