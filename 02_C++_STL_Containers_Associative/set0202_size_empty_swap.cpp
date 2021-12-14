/**
 * @file set0202_swap.cpp
 * @author liuyag
 * @brief set示例 
 * 
 * 大小、交换
 * size()                   注意，set没有提供resize方法（vector, list, deque都提供了。）
 * empty()
 * swap();
 * 
 * 、插入、删除、查找、统计
 * 
 * @version 0.1
 * @date 2021-12-10
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
#include <set>
#include <cstdlib>			// 随机数
#include <ctime>			// 时钟
#include <cmath>            // floor
using namespace std;

void printSet(set<int>& s) {
    for (set<int>::iterator it = s.begin(); it != s.end(); it ++) {
        cout << *it << " ";
    }
    cout << endl;
}

void initSet(set<int>& s) {
    srand((unsigned int) time(NULL));   // 设置种子
    for (int i = 0; i < 10; i++) {
        // cout << floor((rand() * 1.0 / RAND_MAX * 1.0) * 100) << " "; // 控制x在[0,100) 这个算法不一定对，但给个大概吧。20211210
        s.insert(floor((rand() * 1.0 / RAND_MAX * 1.0) * 100));
    }
}

// 大小
void testSize() {
    set<int> s1;
    initSet(s1);

    cout << "set.empty() = " << s1.empty() << endl;
    cout << "set.size() = " << s1.size() << endl;
}

// 交换
void testSwap() {
    set<int> s1;
    s1.insert(1);
    set<int> s2;
    s2.insert(2);
    
    cout << "交换前:" << endl;
    printSet(s1);
    printSet(s2);

    // 交换
    s1.swap(s2);                       
    
    cout << "交换后:" << endl;
    printSet(s1);
    printSet(s2);
}

int main(int argc, char const *argv[]) {
    set<int> s;
    initSet(s);
    printSet(s);
    testSize();
    testSwap();
    return 0;
}