/*
约瑟夫问题 (双向循环链表实现)
@since 2017/12/7
@author liuyang
编译环境：Qt Creator + MinGW 5.3.0 32bit for C++

参考视频：
https://www.bilibili.com/video/BV1Yt41197sM?p=83

练习
马士兵的
Count3Quit.java     // 数组版本
Count3Quit2.java    // 双向循环链表版本
*/
#include <iostream>
#include <deque>
using namespace std;
#define N 6				// 一共有多少人
#define M 2				// 报数
#define S 0				// 从第几个人开始报数  （循环链表版本没有实现这个）


int main() {
    deque<int> * dq = new deque<int>();

    // 初始化圈
    for (int i = 0; i < N; i++) {
        dq->push_back(i + 1);
    }

    // 解决约瑟夫问题
    deque<int>::iterator iter = dq->begin();
    while(!dq->empty()) {
        for (int i = 0; i < M -1; i++) {        // 数M-1次
            dq->push_back(*iter);               // 队头元素加入队尾
            iter = dq->erase(iter);
        }
        cout << *iter << "\t";
        iter = dq->erase(iter);                 // 第M个人出列
    }

    delete dq;
    return 0;
}