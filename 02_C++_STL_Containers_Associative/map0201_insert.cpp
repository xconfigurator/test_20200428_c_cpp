/**
 * @file map02.cpp
 * @author liuyang
 * @brief map示例
 * https://www.bilibili.com/video/BV1et411b73Z/?p=231&vd_source=8bd7b24b38e3e12c558d839b352b32f4
 * 
 * 构造、赋值
 * 
 * 1. map中所有元素都是pair
 * 2. pair.first -> key pair.second -> value
 * 3. 所有元素都会根据元素的键值自动排序
 * 
 * map不允许容器中有重复的key值元素。
 * multimap运行容器中有重复ke值元素。
 * 
 * @version 0.1
 * @date 2021-12-10
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
#include <map>      // map multimap
using namespace std;

void printMap(map<string, string>& m) {
    for (map<string, string>::iterator it = m.begin() ; it != m.end(); ++it) {
        cout << "key = " << (*it).first << " value = " << (*it).second << endl;// 注意*it.first这种写法是不对的。应该写成(*it).first
    }
    cout << endl;
}

void printMapConst(const map<string, string>& m) {
    for (map<string, string>::const_iterator it = m.cbegin(); it != m.cend(); ++it) {
        cout << "key = " << (*it).first << " value = " << (*it).second << endl;
    }
    cout << endl;
}

void printMapEhancedFor(const map<string, string>& m) {
    for (auto cpair : m) {
        cout << "key = " << cpair.first << " value = " << cpair.second << endl;
    }
    cout << endl;
}

int main(int argc, char const *argv[]) {
    // 构造
    map<string, string> m1;

    // insert
    m1.insert(make_pair("key999", "value999"));       // 关注一下输出时的顺序。（容器会按照key值进行排序）
    m1.insert(make_pair("key1", "value1"));
    m1.insert(pair<string, string>("key2", "value2"));// 注意只写pair("key2", "value2")是不对的。
    printMap(m1);
    printMapConst(m1);
    printMapEhancedFor(m1);

    // 拷贝构造
    cout << "拷贝构造" << endl;
    map<string, string> m2(m1);
    printMap(m2);

    // 赋值构造
    cout << "赋值构造" << endl;
    map<string, string> m3;
    m3 = m1;
    printMap(m3);
    
    return 0;
}