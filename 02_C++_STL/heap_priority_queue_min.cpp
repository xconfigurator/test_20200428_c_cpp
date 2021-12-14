/*
最小堆例程
https://en.cppreference.com/w/cpp/container/priority_queue

@since 2017/12/8
@author liuyang
编译环境：Visual Studio 2017 Community/ Qt Creator

2020/12/15 VSCode + Mingw64环境也OK
*/
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// 默认构建的是最大堆，若想建立最小堆需要指定排序规则
struct RuleMinHeap {
    bool operator() (const int & a, const int & b) {
        return a > b;
    }
};

int main() {

    int a[] = { 9, 8, 7, 6, 5, 11, 12 , 13, 14 , 88, 99 };
    //priority_queue<int, vector<int>, RuleMinHeap> heap;
    priority_queue<int, vector<int>, greater<int>> heap;

    // 建堆
    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
        heap.push(a[i]);
    }

    // 使用
    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
        cout << heap.top() << "\t";
        heap.pop();
    }
    cout << endl;

    return 0;
}