/*
@author liuyang
@since 2021/2/19

分类：模拟
挖掘机技术哪家强
https://pintia.cn/problem-sets/994805260223102976/problems/994805289432236032

参考：https://www.bilibili.com/video/BV1Ty4y1n7JH?p=5&spm_id_from=pageDriver

输入样例：
6
3 65
2 80
1 100
2 70
3 40
3 0

输出样例：
2 150
*/
#include <iostream>
using namespace std;

const unsigned int MAX_SIZE = 100001;
unsigned int scores[MAX_SIZE] = {};// 所有元素都会初始化为0
// unsigned int scores[MAX_SIZE] = {1};// 所有元素都会初始化为1
// unsigned int scores[MAX_SIZE];// 所有元素都会未知

int main() {
    int n, schoolId, score, max = 0, flag = 0;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> schoolId >>  score;
        scores[schoolId] += score;
    }
    for (int i = 1; i <=n; ++i) {
        if (max < scores[i]) {
            max = scores[i];
            flag = i;
        }
    }
    cout << flag << " " << scores[flag] << endl;
    return 0;
}
