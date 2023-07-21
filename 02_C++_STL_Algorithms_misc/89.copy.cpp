/**
 * @file 89.copy.cpp
 * @author your name (you@domain.com)
 * @brief 
 * 参考：
 * https://en.cppreference.com/w/cpp/algorithm/copy
 * 视频：
 * https://www.bilibili.com/video/BV1et411b73Z/?p=255&spm_id_from=pageDriver&vd_source=8bd7b24b38e3e12c558d839b352b32f4
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

void Print(const int & val) {
    cout << val << "\t";
}

int main(int argc, char const *argv[]) {
    vector<int> v1 {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    vector<int> v2;

    copy(v1.begin(), v1.end(), back_inserter(v2));

    for_each(v1.begin(), v1.end(), Print);
    cout << endl;
    for_each(v2.begin(), v2.end(), Print);
    cout << endl;

    return 0;
}