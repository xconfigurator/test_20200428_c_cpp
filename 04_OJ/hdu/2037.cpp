/**
 * @file 2037.cpp
 * @author liuyang copy from tianqin
 * @brief 贪心算法练习（区间贪心）
 * 
 * 题目：杭电OJ 2037
 * http://acm.hdu.edu.cn/showproblem.php?pid=2037
 * 
 * 
 * 说明：视频3:53开始
 * OJ状态：2021/12/04 无法访问杭电OJ
 *
问题描述：
“今年暑假不AC？”
“是的。”
“那你干什么呢？”
“看世界杯呀，笨蛋！”
“@#$%^&*%...”

确实如此，世界杯来了，球迷的节日也来了，估计很多ACMer也会抛开电脑，奔向电视了。
作为球迷，一定想看尽量多的完整的比赛，当然，作为新时代的好青年，你一定还会看一些其它的节目，比如新闻联播（永远不要忘记关心国家大事）、非常6+7、超级女生，以及王小丫的《开心辞典》等等，假设你已经知道了所有你喜欢看的电视节目的转播时间表，你会合理安排吗？（目标是能看尽量多的完整节目）

输入：
输入数据包含多个测试实例，每个测试实例的第一行只有一个整数n(n<=100)，表示你喜欢看的节目的总数，然后是n行数据，每行包括两个数据Ti_s,Ti_e (1<=i<=n)，分别表示第i个节目的开始和结束时间，为了简化问题，每个时间都用一个正整数表示。n=0表示输入结束，不做处理。

输出：
对于每个测试实例，输出能完整看到的电视节目的个数，每个测试实例的输出占一行。

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