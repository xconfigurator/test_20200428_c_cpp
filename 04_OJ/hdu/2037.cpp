/**
 * @file 2037.cpp
 * @author liuyang copy from tianqin
 * @brief 贪心算法练习（区间贪心）
 * 
 * 题目：杭电OJ 2037
 * 
 * 说明：视频3:53开始
 * OJ状态：2021/12/04 无法访问杭电OJ
 * 
输入样例：
12
1 3
3 4
0 7
3 8
15 19
15 20
10 15
8 18
6 12
5 10
4 14
2 9
0

输出样例：
5 
 * 
 * @version 0.1
 * @date 2021-12-04
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
#include <algorithm>
using namespace std;

struct program {
    int start;
    int end;
};

bool cmp(program& L, program& R) {
    if (L.start == R.start) {
        return L.end < R.end;       // 结束时间从小到大排序
    } else {
        return L.start > R.start;   // 按开始时间从大到小排序
    }
}

int main(int argc, char const *argv[]) {
    program programs[100];          // 节目最多100个
    int n;                        
    while (cin >> n) {
        if (n == 0) break;          // 题目要求n=0的时候结束处理     
        int m = 1, lastProgramStart;// m = 1 意思是开始就把第一个（经过排序之后，开始时间最大的那个）节目选到了。
        for (int i = 0; i < n; ++i) {
            cin >> programs[i].start >> programs[i].end;
        }
        sort(programs, programs + n, cmp);
        lastProgramStart = programs[0].start;
        for (int i = 1; i < n; ++i) {// 已经选中的节目保存在下标为0的位置，所以这里从1开始。
            if (programs[i].end <= lastProgramStart) {
                ++m;
                lastProgramStart = programs[i].start;
            }
        }
        cout << m << endl;
    }
    return 0;
}