/**
 * @file 1003.cpp
 * @author liuyang
 * @brief 分治算法练习 Max Sum
 * 
 * 题目：杭电OJ 1003
 * 
 * 说明：跟浙大陈越老师讲的一样。不过辉总给出了代码！
 * OJ状态： OJ目前无法访问，第二组结果输出与预期不同。
 * 
输入样例：
2
5 6 -1 5 4 -7
7 0 6 -1 1 -6 7 -5

输出样例：
Case 1:
14 1 4
Case 2:
7 1 6
 * 
 * @version 0.1
 * @date 2021-12-05
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<iostream>
using namespace std;

void getCrossMax(int arr[], int &L, int &mid, int &R, int &max) {// mid没有必要使用引用型
    int maxCross = 0, maxL = -1001, maxR = -1001, l = mid, r = mid + 1;// maxCross用于分别计算左右两边最大的值
    for (int i = mid; i >= L; --i) {
        maxCross += arr[i];
        if (maxCross >= maxL) {
            l = i;
            maxL = maxCross;    // maxL用于  
        }
    }
    for (int i = mid + 1, maxCross = 0; i <= R; ++i) {
        maxCross += arr[i];
        if (maxCross >= maxR) {
            r = i;
            maxR = maxCross;
        }
    }
    max = maxL + maxR;
    L = l;
    R = r;
}

void getMax(int arr[], int &L, int &R, int &max) {
    if (L < R) {
        int l = L, r = R, maxL, maxR, maxCross;
        int m = (L + R) / 2;
        int l1 = l, r1 = m, l2 = m + 1, r2 = r;
        getMax(arr, l1, r1, maxL); // 分治 左
        getMax(arr, l2, r2, maxR); // 分治 右
        getCrossMax(arr, l, m , r, maxCross);
        int tempMax = maxL, tempL = l1, tempR = r1;
        
        // 在maxL, maxR, maxCross中选一个最大的给max，然后复位L, R
        if (tempMax < maxR) {
            tempMax = maxR;
            tempL = l2;
            tempR = r2;
        }
        if (tempMax < maxCross) {
            tempMax = maxCross;
            tempL = l;
            tempR = r;
            max = tempMax;
            L = tempL;
            R = tempR;
        }
        max = tempMax;
        L = tempL;
        R = tempR;
    } else {
        max = arr[L];// 递归出口
    }
}

int main(int argc, char const *argv[]) {
    int i, j = 1, n, m, L, R, max;
    int a[100001];
    cin >> n;
    while (n--) {
        cin >> m;
        for (int i = 1; i <= m; ++i) {
            cin >> a[i];
        }
        L = 1;
        R = m;
        getMax(a, L, R, max);
        cout << "Case "<< j++ << ":\n" << max << " " << L << " " << R << endl;
        if (n != 0) cout << endl;
    }
    return 0;
}