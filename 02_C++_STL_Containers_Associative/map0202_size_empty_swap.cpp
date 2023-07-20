/**
 * @file map0202_size_swap.cpp
 * @author liuyang
 * 大小、交换
 * 
 * size()
 * empty()
 * swap()
 * 
 * @brief 
 * https://www.bilibili.com/video/BV1et411b73Z?p=232&spm_id_from=pageDriver&vd_source=8bd7b24b38e3e12c558d839b352b32f4
 * @version 0.1
 * @date 2021-12-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
#include <map>
using namespace std;

void printMap(const map<string, string>& m) {
    for (auto cpair : m) {
        cout << "[" << cpair.first << "," << cpair.second << "]" << endl;
    }
    cout << endl;
}

void testSize() {
    map<string, string> m1;
    cout << "m1.empty() = " << m1.empty() << endl;

    m1.insert(make_pair("k1", "v1"));
    m1.insert(make_pair("k2", "v2"));
    m1.insert(make_pair("k3", "v3"));
    m1.insert(make_pair("k4", "v4"));
    cout << "m1.size() = " << m1.size() << endl;
    cout << "m1.empty() = " << m1.empty() << endl;
}

void testSwap() {
    map<string, string> m1;
    m1.insert(make_pair("k1", "v1"));
    m1.insert(make_pair("k2", "v2"));
    
    map<string, string> m2;
    m2.insert(make_pair("k3", "v3"));
    m2.insert(make_pair("k4", "v4"));

    cout << "#交换前 m1" << endl;
    printMap(m1);
    cout << "#交换前 m2" << endl;
    printMap(m2);

    // 交换
    m1.swap(m2);

    cout << "#交换后 m1" << endl;
    printMap(m1);
    cout << "#交换后 m2" << endl;
    printMap(m2);
}

int main(int argc, char const *argv[]) {
    testSize();
    testSwap();
    return 0;
}