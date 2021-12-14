/**
 * @file set0206_compare.cpp
 * @author liuyang
 * @brief 排序 (内置数据类型/自定义数据类型) 
 * 
 * 技术点：
 * 利用“仿函数”，可以改变排序规则。
 * 默认是从小到大（非递减）
 * 
 * @version 0.1
 * @date 2021-12-13
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
#include <set>
using namespace std;

// 比较内置数据类型
class MyCompare1 {
public:
    bool operator()(int v1, int v2) {// 仿函数就是重载了函数调用运算符()
        return v1 > v2;// 按照从大到小的顺序
    }
};
/*
// 类比, 比较函数的另外写法：
struct RuleMinHeap {
    bool operator() (const int & a, const int & b) {
        return a > b;
    }
};
*/

void printSet11(set<int> &s) {
    for (auto element : s) {
        cout << element << "    ";
    }
}

void printSet12(set<int, MyCompare1> &s)  {
    for (auto element : s) {
        cout << element << "    ";
    }
}


// 比较自定义数据类型
struct MyStruct {
    int a;
    int b;
    MyStruct(int a, int b) {
        this->a = a;
        this->b = b;
    }
};

class MyCompare2 {
public:
    bool operator()(const MyStruct& v1, const MyStruct& v2) {
        if (v1.a == v2.a) {
            return v1.b > v2.b;// 按照b降序（非递增）排列
        } else {
            return v1.a < v2.a;// 按照a升序（非递减）排列
        }
    }
};

int main(int argc, char const *argv[]) {
    // 排序：内置数据类型
    set<int, MyCompare1> s1;   // 通过仿函数指定排序规则。
    s1.insert(10);
    s1.insert(40);
    s1.insert(20);
    s1.insert(50);
    s1.insert(30);
    //printSet11(s1);
    printSet12(s1);
    cout << endl;

    // 排序：自定义数据类型
    MyStruct e1(1, 2);
    MyStruct e2(2, 2);
    MyStruct e3(2, 3);
    MyStruct e4(99, 99);
    set<MyStruct, MyCompare2> s2;
    s2.insert(e1);
    s2.insert(e2);
    s2.insert(e3);
    s2.insert(e4);
    for (auto elem : s2) {
        cout << elem.a << " " << elem.b << endl;
    }

    return 0;
}