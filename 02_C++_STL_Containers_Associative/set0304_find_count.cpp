/**
 * @file set0304_find_count.cpp
 * @author liuyang
 * @brief 
 * 
 * find(key);           // 查找key是否存在，若存在，返回该键的元素的迭代器；若不存在，返回set.end();
 * count(key);          // 统计key的元素个数。对于set而言，这个结果无非是0或1。
 * 
 * 参考：
 * https://en.cppreference.com/w/cpp/container/set/find
 * https://en.cppreference.com/w/cpp/container/set/count
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

int main(int argc, char const *argv[]) {
    set<int> s1;
    s1.insert(2);
    s1.insert(1);
    s1.insert(3);
    s1.insert(4);

    // find();
    set<int>::iterator it = s1.find(4);
    cout << "s1.find(4) = " << (it == s1.end() ? "没找到": "找到") << endl;
    it = s1.find(5);
    cout << "s1.find(5) = " << (it == s1.end() ? "没找到": "找到") << endl;
    
    // count();
    cout << "s1.count(4) = " << s1.count(4) << endl;
    cout << "s1.count(5) = " << s1.count(5) << endl; 
    return 0;
}