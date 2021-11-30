/*
@author liuyang
@since 2021/2/19

分类：模拟
跟奥巴马一起学编程
https://pintia.cn/problem-sets/994805260223102976/problems/994805285812551680

参考：https://www.bilibili.com/video/BV1Ty4y1n7JH?p=5&spm_id_from=pageDriver
13分钟左右
*/
#include <iostream>
using namespace std;

int main() {
    int N, row;
    char ch;
    cin >> N >> ch;
    // 为了让输出更像正方形（一般显示器出处行间距都大于列间距）所做的处理，即向上取整。
    if (N%2 == 0) {
        row = N / 2;
    } else {
        row = N / 2 + 1;
    }
    // 第一行
    for (int i = 0; i < N; ++i) {
        cout << ch;
    }
    cout << endl;
    // 中间行
    for (int i = 0; i < row - 2; ++i) {
        for (int j = 0; j < N; ++j) {
            if (j == 0) {
                cout << ch; 
            } else if (j == N - 1) {
                cout << ch << endl;
            } else {
                cout << " ";
            }
        }
    }
    // 最后一行
    for (int i = 0; i < N; ++i) {
        cout << ch;
    }
    return 0;
}