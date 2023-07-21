/**
 * @file 93.accumulate.cpp
 * @author your name (you@domain.com)
 * @brief 计算容器元素累计和
 * 参考：
 * https://en.cppreference.com/w/cpp/algorithm/accumulate
 * 视频：
 * https://www.bilibili.com/video/BV1et411b73Z/?p=259&spm_id_from=pageDriver&vd_source=8bd7b24b38e3e12c558d839b352b32f4
 * 
 * @version 0.1
 * @date 2023-07-21
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
#include <algorithm>
#include <numeric>// accumulate
#include <vector>
using namespace std;

int main(int argc, char const * argv[]) {
    vector<int> v {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    // +
    cout << accumulate(v.begin(), v.end(), 0) << endl;
    //cout << accumulate(v.begin(), v.end(), v[0]) << endl;
    
    // *
    cout << accumulate(v.begin(), v.end(), 1, multiplies<int>()) << endl;
    
    
    return 0;
}