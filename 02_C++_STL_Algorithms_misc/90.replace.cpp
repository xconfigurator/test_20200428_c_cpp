/**
 * @file 90.replace.cpp
 * @author your name (you@domain.com)
 * @brief 将指定范围内的旧元素改为新元素  
 * 参考：
 * https://en.cppreference.com/w/cpp/algorithm/replace
 * 视频：
 * https://www.bilibili.com/video/BV1et411b73Z/?p=256&spm_id_from=pageDriver&vd_source=8bd7b24b38e3e12c558d839b352b32f4
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

class Print {
public:
    void operator() (const int & v) {
        cout << v << "\t";
    }
};

int main(int argc, char const *argv[]) {
    vector<int> v {20, 30, 50, 30, 40,20, 10, 20};
    
    cout << "替换前：" ;
    for_each(v.begin(), v.end(), Print());
    cout << endl;

    // 替换：把20替换成2000
    replace(v.begin(), v.end(), 20, 2000);
    cout << "替换后：";
    for_each(v.begin(), v.end(), Print());
    cout << endl;

    return 0;
}