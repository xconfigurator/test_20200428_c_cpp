/**
 * @file search_binary_search.cpp
 * @author your name (you@domain.com)
 * @brief 
 * http://www.icourse163.org/learn/PKU-1001553023?tid=1001995004#/learn/content?type=detail&id=1002616240
 * 
 * 注1：a等于b <=> “a必须在b前面”和“b必须在a前面”都不成立
 * 注2：查找时的排序规则必须和排序时的排序规则一致！
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
    // 按个位数从小到大排序
    bool operator() (const int & a1, const int & a2) {
        return a1 % 10 < a2 % 10;
    }
};

void Print(int a[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << a[i] << "\t";
    }
    cout << endl;
}

int main(int argc, char const * argv[]) {
    int a[] = {12, 45, 3, 98, 21, 7};
    int size = sizeof(a) / sizeof(a[0]);
    sort(a, a + size);
    Print(a, size);
    cout << "result:" << binary_search(a, a + size, 12) << endl;
    cout << "result:" << binary_search(a, a + size, 77) << endl;

    sort(a, a + size, Rule());// 按个位数从小到大排序
    Print(a, size);
    cout << "result:" << binary_search(a, a + 6, 7) << endl;// 指定规则与排序规则不一致（查找的结果没有意义），找不到。
    cout << "result:" << binary_search(a, a + 6, 8, Rule()) << endl; // 指定规则与排序规则一致（查找的结果有意义），找得到。
    return 0;
}