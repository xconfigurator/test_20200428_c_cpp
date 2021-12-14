/**
 * @file pair.cpp
 * @author liuyang
 * @brief 
 * 
 * 可以利用pair在C++中返回两个数据。
 * pair<type1, type2> p(v1, v2);
 * pair<type1, type2> p = make_pair(v1, v2);
 * 
 * 参考：
 * http://c.biancheng.net/view/7169.html
 * 
 * @version 0.1
 * @date 2021-12-13
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    // 第一种方式
    pair<string, int> p1("foo", 1);
    // 第二种方式
    pair<string, int> p2 = make_pair("bar", 2);

    // 访问
    cout << p1.first << "\t" << p2.second << endl;
    return 0;
}