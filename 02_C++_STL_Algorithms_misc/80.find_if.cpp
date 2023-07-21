/**
 * @file 80.find_if.cpp
 * @author your name (you@domain.com)
 * @brief 按条件查找元素
 * 参考：
 * https://en.cppreference.com/w/cpp/algorithm/find
 * 视频：
 * https://www.bilibili.com/video/BV1et411b73Z/?p=246&spm_id_from=pageDriver&vd_source=8bd7b24b38e3e12c558d839b352b32f4
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

// 内置类型
class UnaryPredicate01 {
public:
    bool operator() (int val) {
        return val > 5;
    }
};
void test01() {
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int>::iterator iter = find_if(v.begin(), v.end(), UnaryPredicate01());
    cout << *iter << endl;
}

// 自定义类型
class Person {
public:
    Person(string name, int age): m_Name(name), m_Age(age) {};
    // 运算符重载 (.toString())
	// 参考
    /*
	bool operator <=(HfmNode & R) { return data <= R.data; }
	bool operator >(HfmNode & R) { return data > R.data; }
	*/
    /*
	friend ostream& operator<<(ostream& out, const HfmNode& n) {
		out << n.data << "\t";
		return out;
	}
    */
    friend ostream& operator<<(ostream& out, const Person & p) {
        out << "(" << p.m_Name << "," << p.m_Age << ")\t";
        return out;
    }
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
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);

    vector<Person>::iterator iter = find_if(v.begin(), v.end(), UnaryPredicate02());
    cout << *iter << endl;
}

int main(int argc, char const *argv[]) {
    test01();
    test02();
    return 0;
}
