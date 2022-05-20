/*
@author liuyang
@since 2021/2/19

视频：
codeup 1934 找x 08:40
https://www.bilibili.com/video/BV1Ty4y1n7JH?p=5

分类：模拟
找x

题目描述：
输入一个数n，然后输入n个数值各不相同，再输入一个值x，输出这个值在这个数组中的下标（从0开始，若不在数组中则输出-1）

输入：
测试数据有多组，输入n(1 <= n <= 200)，接着输入n个数，然后输入x。

输出：
对于每组输入，请输出结果。

输入样例：
4
1 2 3 4
3

输出样例：
2
*/
#include <iostream>
using namespace std;

const unsigned int MAX_SIZE = 200;

int main() {
    int n, x;
    int array[MAX_SIZE];
    while (cin >> n) {// while(scanf("%d", &n) != EOF)
        for (int i = 0; i < n; ++i) {
            cin >> array[i];
        }
        cin >> x;
        int i = 0;
        for (i = 0; i < n; ++i) {
            if (x == array[i]) {
                cout << i << endl;
                break;
            }
        }
        if (i == n) {
            cout << -1 << endl;
        }
    }
    return 0;
}