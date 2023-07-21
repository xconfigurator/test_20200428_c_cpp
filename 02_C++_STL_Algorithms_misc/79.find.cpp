/**
 * @file 79.find.cpp
 * @author your name (you@domain.com)
 * @brief 查找指定元素，找到则返回指定元素的迭代器，找不到则返回结束迭代器end()
 * 参考：
 * https://en.cppreference.com/w/cpp/algorithm/find
 * 视频：
 * https://www.bilibili.com/video/BV1et411b73Z/?p=245&spm_id_from=pageDriver&vd_source=8bd7b24b38e3e12c558d839b352b32f4
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

// 查找内置数据类型
void test01() {
    const int AIM = 5;
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int>::iterator iter = find(v.begin(), v.end(), AIM);
    cout << (iter == v.end() ? "没找到": "找到了") << endl;
}


// 查找自定义数据类型
class Person {
public:
    Person(string name, int age):m_Name(name), m_Age(age) {}
    bool operator == (const Person & p) {// 自定义数据类型需要重载== (.equals())
        return this->m_Name == p.m_Name && this->m_Age == p.m_Age;
    }
    string m_Name;
    int m_Age;
};

void test02() {
    vector<Person> v;
    Person p1("aaa", 10);
    Person p2("bbb", 20);
    Person p3("ccc", 30);
    Person p4("ddd", 40);
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);

    Person px1("aaax", 10);
    Person px2("aaa", 20);

    vector<Person>::iterator iter = find(v.begin(), v.end(), p1);
    cout << (iter == v.end() ? "没找到" : "找到了") << endl;
    iter = find(v.begin(), v.end(), px1);
    cout << (iter == v.end() ? "没找到" : "找到了") << endl;
    iter = find(v.begin(), v.end(), px2);
    cout << (iter == v.end() ? "没找到" : "找到了") << endl;
}


int main(int argc, char const *argv[]) {
    // 查找内置数据类型
    test01();
    // 查找自定义数据类型
    test02();
    return 0;
}