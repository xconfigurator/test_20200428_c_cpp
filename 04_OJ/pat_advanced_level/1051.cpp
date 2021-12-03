/**
 * @file 1051.cpp
 * @author liuyang copy from tianqin
 * @brief Pop Sequence
 * 
 * 题目：
 * https://pintia.cn/problem-sets/994805342720868352/problems/994805427332562944
 * 视频：天勤机考 3:46 (一道栈的常考题)
 * 视频：天琴机考 6:32 (题目和代码) 可以多看几遍视频演示再看代码。
 * 
 * tianqin原版未使用STL，如果炫技，可以拿来练手。这里就是用STL的stack了。
 * 
 * 说明：使用栈解题
 * 提示：
 * OJ状态：答案正确
 * 
 * @version 0.1
 * @date 2021-12-02
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
#include <stack>
using namespace std;

int main(int argc, char const *argv[]) {
    int M, N, K;                        // M栈容量，N每组数据个数， K是测试数据组数
    stack<int> s;
    cin >> M >> N >> K;
    for (int i = 0; i < K; ++i) {       // 处理k组数据
        // 清空栈
        while (!s.empty()) s.pop();     // STL的stack没有clear
        // 输入每组数据
        int* a = new int[N];            
        int t = 0;                      // 辅助从头到尾扫描出栈序列
        bool flag = true;
        for (int j = 0; j < N; j++) {
            cin >> a[j];
        }
        // 计算 (核心)
        for (int j = 1; j <= N; j++) {                      // 入栈
            s.push(j);                                      // 见鬼，为啥是j不是a[j]。靠，审题！
            if (s.size() > M) flag = false;                 // 栈超限，无法输出序列。
            while (!s.empty() && s.top() == a[t]) {         // 检查栈顶元素是否和a[t]一致
                t++;
                s.pop();
            }
            if(!s.empty() && s.top() != a[t] && j == N) {   // j == N表示都已入栈。序列处理完了栈顶元素不等于a[t]则表示无法输出序列。
                flag = false;
            }
        }
        // 输出
        cout << (flag ? "YES" : "NO");
        if (i != K - 1) cout << endl;   // 结尾无空行
        // 清理
        delete[] a;
    }
    return 0;
}