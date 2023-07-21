/**
 * @file 91.replace_if.cpp
 * @author your name (you@domain.com)
 * @brief 将区间内满足条件的元素，替换成指定元素
 * 参考：
 * https://en.cppreference.com/w/cpp/algorithm/replace
 * 视频：
 * https://www.bilibili.com/video/BV1et411b73Z/?p=257&spm_id_from=pageDriver&vd_source=8bd7b24b38e3e12c558d839b352b32f4
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

class UnaryPredicate {
public:
    bool operator() (const int & v) {
        return v >= 30;
    }
};

int main(int argc, char const *argv[]) {
    vector<int> v {20, 30, 50, 30, 40,20, 10, 20};

    cout << "替换前：";
    for_each(v.begin(), v.end(), Print());
    cout << endl;

    // 替换：大于等于30的元素替换成3000
    replace_if(v.begin(), v.end(), UnaryPredicate(), 3000);
    cout << "替换后：";
    for_each(v.begin(), v.end(), Print());
    cout << endl;

    return 0;
}