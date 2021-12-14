/**
 * @file set0201_insert.cpp
 * @author liuyang
 * @brief set示例
 * 
 * 构造、赋值
 * 
 * set操作提要：
 * insert/erase/find
 * 
 * @version 0.1
 * @date 2021-12-10
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
#include <set>          // set multiset
using namespace std;

void printSet(set<int>& s);

int main(int argc, char const *argv[]) {
    // 构造
    set<int> myset;

    // 赋值 insert
    myset.insert(11);
    myset.insert(12);
    myset.insert(13);
    myset.insert(14);
    myset.insert(0);
    myset.insert(0);
    myset.insert(-1);
    printSet(myset);    // 容器特点：不重复，排序。

    // 拷贝构造
    cout << "拷贝构造" << endl;
    set<int> mysetcopy(myset);
    printSet(mysetcopy);  

    // 赋值
    cout << "赋值构造" << endl;
    set<int> myset3;
    myset3 = myset;
    printSet(myset3);

    // erase
    

    // find


    return 0;
}

// 遍历
void printSet(set<int>& s) {
    for (set<int>::iterator it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}
