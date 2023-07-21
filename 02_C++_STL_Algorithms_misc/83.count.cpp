/**
 * @file 83.count.cpp
 * @author your name (you@domain.com)
 * @brief 统计元素个数
 * 参考：
 * https://en.cppreference.com/w/cpp/algorithm/count
 * 视频：
 * https://www.bilibili.com/video/BV1et411b73Z/?p=249&spm_id_from=pageDriver&vd_source=8bd7b24b38e3e12c558d839b352b32f4
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
void test01() {
    const int TARGET = 3;

    vector<int> v;
    v.push_back(0);
    v.push_back(2);
    v.push_back(0);
    v.push_back(3);
    v.push_back(1);
    v.push_back(4);
    v.push_back(3);
    v.push_back(3);

    int stat_count = count(v.begin(), v.end(), TARGET);
    cout << TARGET << " 出现了 " << stat_count << " 次。" <<endl;
}

// 自定义数据类型
class Person {
public:
    Person(string name, int age):m_Name(name), m_Age(age) {}
    bool operator == (const Person & p) {// .equals()
        return this->m_Name == p.m_Name && this->m_Age == p.m_Age;        
    }
    friend ostream& operator << (ostream& out, const Person & p) {// .toString()
        out << "(" << p.m_Name << "," << p.m_Age << ")\t";
        return out;
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

    Person px1("aaax", 10);
    Person px2("aaa", 10);

    cout << px1 << " 出现了 " << count(v.begin(), v.end(), px1) << " 次。" << endl;// Person必须重载==
    cout << p1 << " 出现了 " << count(v.begin(), v.end(), p1) << " 次。 " << endl;
}

int main(int argc, char const *argv[]) {
    test01();
    test02();
    return 0;
}