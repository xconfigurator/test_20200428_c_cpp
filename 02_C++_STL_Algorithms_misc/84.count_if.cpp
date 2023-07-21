/**
 * @file 84.count_if.cpp
 * @author your name (you@domain.com)
 * @brief 按条件统计元素个数
 * 参考：
 * https://en.cppreference.com/w/cpp/algorithm/count
 * 视频：
 * https://www.bilibili.com/video/BV1et411b73Z/?p=250&spm_id_from=pageDriver&vd_source=8bd7b24b38e3e12c558d839b352b32f4
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

// 内置数据类型
class UnaryPredicate01 {
public:
    bool operator() (const int & val) {
        return val > 2;
    }
};
void test01() {
    vector<int> v;
    v.push_back(0);
    v.push_back(2);
    v.push_back(0);
    v.push_back(3);
    v.push_back(1);
    v.push_back(4);
    v.push_back(3);
    v.push_back(3);

    cout << "容器中大于2的元素个数：" << count_if(v.begin(), v.end(), UnaryPredicate01()) << endl;
}

// 自定义数据类型
class Person {
public:
    Person(string name, int age):m_Name(name), m_Age(age) {}
    string m_Name;
    int m_Age;
};
class UnaryPredicate02 {
public:
    bool operator() (const Person & p) {
        return p.m_Age > 20;
    }
};
void test02() {
    vector<Person> v;
    Person p1("aaa", 10);
    Person p2("bbb", 20);
    Person p3("ccc", 30);
    Person p4("ddd", 40);
    Person p5("ddd", 20);
    Person p6("ddd", 30);
    Person p7("ddd", 40);
    Person p8("aaa", 10);

    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    v.push_back(p5);
    v.push_back(p6);
    v.push_back(p7);
    v.push_back(p8);

    cout << "容器中年龄大于20的元素个数：" << count_if(v.begin(), v.end(), UnaryPredicate02()) << endl;
}

int main(int argc, char const *argv[]) {
    test01();
    test02();
    return 0;
} 