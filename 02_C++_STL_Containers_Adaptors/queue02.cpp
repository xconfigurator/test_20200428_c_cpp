/**
 * @file queue02.cpp
 * @author liuyang copy from tianqin
 * @brief 天勤上机 STL queue 测试代码
 * @version 0.1
 * @date 2021-12-01
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
#include <queue>
using namespace std;

int main(int argc, char const *argv[]) {
    queue<int> q;
    cout << "empty?:" << q.empty() << endl;// 1 
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.pop();
    q.pop();
    q.push(5);
    cout << "empty?:" << q.empty() << endl;// 0
    cout << "first:" << q.front() << endl;
    cout << "last:" << q.back() << endl;
    cout << "elements:";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}