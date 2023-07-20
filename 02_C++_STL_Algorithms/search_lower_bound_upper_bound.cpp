/**
 * @file search_lower_bound_upper_bound.cpp
 * @author your name (you@domain.com)
 * @brief 二分查找下界
 * 
 * 在对元素类型为T的从小到大排好序的基本类型的数组中进行查找
 * T* lower_bound(数组名 + n1, 数组名 + n2, 值)
 * T* lower_bound(数组名 + n1, 数组名 + n2, 值, 排序规则结构名())
 * 返回一个指针T* p
 * *p是查找区间里下标最小的，大于等于“值”的元素（可以排在值后面）。如果找不到，p执行下标为n2的元素。
 * 
 * 在对元素类型为T的从小到大排好序的基本类型的数组中进行查找
 * T* upper_bound(数组名 + n1, 数组名 + n2, 值)
 * T* upper_bound(数组名 + n1, 数组名 + n2, 值, 排序规则结构名())
 * 返回一个指针T* p
 * *p是查找区间里下标最小的，大于“值”的元素（必须排在值后面）。如果找不到，p执行下标为n2的元素
 * 
 * @version 0.1
 * @date 2023-07-20
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

struct Rule {
    bool operator() (const int & a1, const int & a2) {
        return a1 % 10 < a2 % 10;// 谁得个位数小谁就排在前面
    }
};

void Print(int a[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << a[i] << "\t";
    }
    cout << endl;
}

#define NUM 7
int main(int argc, char const *argv[]) {
    int a[NUM] = {12, 5, 3, 5, 98, 21, 7};
    sort(a, a + NUM);
    Print(a, NUM);// 3, 5, 5, 7, 12, 21, 98
    int * p = lower_bound(a, a + NUM, 5);
    cout << *p << "," << p - a << endl; // 5, 1
    p = upper_bound(a, a + NUM, 5);
    cout << *p << "," << p - a << endl; // 7, 3
    cout <<  * upper_bound(a, a + NUM, 13) << endl;// 21

    // 按照个位从小到大排
    sort(a, a + NUM, Rule());
    Print(a, NUM);// 21      12      3       5       5       7       98
    cout << * lower_bound(a, a + NUM, 16, Rule()) << endl;// 7  (翻译：个位数大于等于6的最小的值)
    cout << lower_bound(a, a + NUM, 25, Rule()) - a << endl;// 3
    cout << upper_bound(a, a + NUM, 18, Rule()) - a << endl;// 7 （翻译：个位数大于8的最小元素的位置）
    if (upper_bound(a, a + NUM, 18, Rule()) == a + NUM) {
        cout << "not found" << endl;
    }
    cout << * upper_bound(a, a + NUM, 5, Rule()) << endl; // 7
    cout << * upper_bound(a, a + NUM, 4, Rule()) << endl; // 5
    return 0;
}