/**
 * @file 1056.cpp
 * @author liuyang copy from tianiqn
 * @brief Mice and Rice
 * 
 * 题目：
 * https://pintia.cn/problem-sets/994805342720868352/problems/994805419468242944
 * 
 * 说明：使用队列解题
 * 视频演示天勤机考6:48
 * 代码解释天勤机考8:39 
 * 提示：题目描述复杂，建议先看视频过程模拟
 * 
 * OJ状态：答案正确
 * 
输入样例：
11 3
25 18 0 46 37 3 19 22 57 56 10
6 0 8 7 10 5 9 1 4 2 3
输出样例:
5 5 5 2 5 5 5 3 1 3 5
 * 
 * @version 0.1
 * @date 2021-12-02
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
#include <queue>
using namespace std;

const int MAX_SIZE = 1010;          // 题目说最多1000个老鼠

struct mouse {
    int weight;
    int r;                          // 排名
};

int main(int argc, char const *argv[]) {
    // 输入
    int NP, NG, order;              // NP:老鼠的个数 NG:每组老鼠的个数 order:接收当前老鼠的编号
    mouse mouses[MAX_SIZE];         // 存放老鼠信息
    cin >> NP >> NG;
    for (int i = 0; i < NP; ++i) {
        cin >> mouses[i].weight;
    } 
    queue<int> q;                   // 存放分组规则
    for (int i = 0; i < NP; ++i) {
        cin >> order;
        q.push(order);
    }

    // 计算
    int riseInRankCount = NP, groupCount;                       // riseInRankCount:用于记录当前晋级的老鼠的个数， groupCount：用于记录当前分的组的个数。
    while (q.size() != 1) {
        // 求组的个数
        if (riseInRankCount % NG == 0) {
            groupCount = riseInRankCount / NG;
        } else {
            groupCount = riseInRankCount / NG + 1;              // 这一步实际上完成了“向上取整”
        }
        // 每组逐个选出每组的胜者，即选出每组最肥硕的老鼠
        for (int i = 0; i < groupCount; ++i) {
            int k = q.front();                                  // k是老鼠的编号, 用于记录本组的king
            for (int j = 0; j < NG; ++j) {                      // 扫描当前组的所有老鼠，跳出最大的
                if (i * NG + j >= riseInRankCount) break;       // 外层for循环假设每组都有NG个老鼠，这里加上这句，避免不够NG个老鼠的组出错。
                int front = q.front();                          // 下一个待比较的老鼠的编号
                if (mouses[front].weight > mouses[k].weight) {  // front更肥硕
                    k = front;
                }
                mouses[front].r = groupCount + 1;               // 计算排名 = 当前轮选出的晋级者数 + 1。因为每组选一个晋级，所以晋级者数 == 本轮分组数
                q.pop();                                        
            }
            q.push(k);                                          // 晋级者
        }
        // 下一轮
        riseInRankCount = groupCount;
    }
    mouses[q.front()].r = 1;                                    // 至此排名结束
    
    // 输出
    for (int i = 0; i < NP; ++i) {
        //cout << mouses[i].r << " ";                           // OJ提交要注意输出格式！！！
        cout << mouses[i].r;
        if (i < NP - 1) cout << " ";
    }
    return 0;
}