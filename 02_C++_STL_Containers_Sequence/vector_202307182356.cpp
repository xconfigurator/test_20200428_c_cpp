/**
 * @file vector_202307182356.cpp
 * @author your name (you@domain.com)
 * @brief 侦测vector动态扩展次数
 * https://www.bilibili.com/video/BV1et411b73Z?p=203&spm_id_from=pageDriver&vd_source=8bd7b24b38e3e12c558d839b352b32f4
 * 
 * @version 0.1
 * @date 2023-07-18
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
#include <vector>
using namespace std;

const int NUM = 100000;

int main(int argc, char const *argv[]) {

    int num = 0;
    int *p = NULL;

    vector<int> v;
    //v.reserve(NUM);// 打开注释，只需要分配1次。
    for (int i = 0; i < NUM; ++i) {
        v.push_back(i);
        if (p != &v[0]) {
            p = &v[0];
            num ++;
        }
    }
    cout << "装载 " << NUM << " 个元素，vector扩展了" << num << " 次。" << endl;

    return 0;
}