/**
 * @file set0203_erase_clear.cpp
 * @author liuyang
 * @brief 
 * 
 * insert(elem);            // 在容器中插入元素
 * clear();                 // 清除所有元素
 * erase(pos);              // 删除pos迭代器所指的元素，返回下一个元素的迭代器。
 * erase(first, last);      // 删除[first, last)的所有元素，返回下一个元素的迭代器。
 * erase(elem);             // 删除容器中值为elem的元素
 *
 * 参考：
 * http://c.biancheng.net/view/7198.html
 * https://en.cppreference.com/w/cpp/container/set/erase
 * 
 * @version 0.1
 * @date 2021-12-10
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
#include <set>
#include <cstdlib>                      // 随机数
#include <ctime>                        // 时钟
#include <cmath>                        // floor
using namespace std;

void print1(set<int>& s) {
    for (set<int>::iterator it = s.begin(); it != s.end(); it ++) {
        cout << *it << " ";
    }
    cout << endl;
}

void print2(const set<int>& s) { // 实测 OK 20211210
    for (auto e : s) {
        cout << e << " ";
    }
    cout << endl;
}
// 对比Java的写法：
/*
    List<Integer> list = List.of(1, 2, 3, 4);
    for (Integer i : list) {
        System.out.println(i);
    }
*/

// insert
void initSet(set<int>& s, int elemSize = 10) {
    srand((unsigned int) time(NULL));   // 设置种子
    for (int i = 0; i < elemSize; ++i) {
        s.insert(floor((rand() * 1.0 / RAND_MAX * 1.0) * 100));// [0, 100)
    }
}

// clear
void testClear() {
    set<int> s;
    initSet(s);
    cout << "#clear 前" << endl;
    print2(s);
    
    // clear
    s.clear();
    cout << "#clear 后" << endl;
    print2(s);
}

// erase 打断点观察 懒得写输出语句了。
void testErase() {
    cout << "#测试删除 打断点看吧" << endl;
    set<int> s1;
    initSet(s1);
    s1.erase(s1.begin());

    set<int> s2;
    initSet(s2);
    s1.erase(s1.begin(), s1.end());

    set<int> s3;
    s3.insert(1);
    s3.insert(2);
    s3.insert(3);
    s3.insert(4);
    s3.insert(5);
    s3.erase(4);
}

int main(int argc, char const *argv[]) {
    set<int> s1;
    initSet(s1);
    //print1(s1);
    cout << "#测试C++的增强for循环" << endl;
    print2(s1);// 实测 ok 20211210

    testClear();
    testErase();

    return 0;
}