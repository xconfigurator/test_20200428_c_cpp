/**
 * @file set0205_multiset.cpp
 * @author liuyang
 * @brief 
 * 
 * set不可以插入重复数据， 而multiset可以
 * set插入数据的同事会返回结插入结果，表示插入是否成功
 * multiset不会检测数据，因此可以插入重复数据
 * 
 * @version 0.1
 * @date 2021-12-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
#include <set>
using namespace std;

// set容器和multiset容器的区别
void test01() {
    
    set<int> s;
    pair<set<int>::iterator, bool> ret;
    ret = s.insert(1);
    cout << "是否插入成功：" << ret.second << endl;
    ret = s.insert(1);
    cout << "是否插入成功：" << ret.second << endl;

    multiset<int> ms;// multiset的insert不会返回上面的那个pair，而是一个iterator
}

int main(int argc, char const* argv[]) {
    test01();
    return 0;
}