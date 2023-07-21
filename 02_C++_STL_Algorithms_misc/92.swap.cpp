/**
 * @file 92.swap.cpp
 * @author your name (you@domain.com)
 * @brief 互换两个容器的元素(两个容器需要同种类型)
 * 参考：
 * https://en.cppreference.com/w/cpp/algorithm/swap
 * 视频：
 * https://www.bilibili.com/video/BV1et411b73Z/?p=258&spm_id_from=pageDriver&vd_source=8bd7b24b38e3e12c558d839b352b32f4
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
    vector<int> v1 {1, 2, 3};
    vector<int> v2 {20, 30, 50, 30, 40,20, 10, 20};

    cout << "交换前：" << endl;
    cout << "v1:";
    for_each(v1.begin(), v1.end(), Print());
    cout << endl;
    cout << "v2:";
    for_each(v2.begin(), v2.end(), Print());
    cout << endl;

    // 交换
    swap(v1, v2);

    cout << "交换后：" << endl;
    cout << "v1:";
    for_each(v1.begin(), v1.end(), Print());
    cout << endl;
    cout << "v2:";
    for_each(v2.begin(), v2.end(), Print());
    cout << endl;

    return 0;
}