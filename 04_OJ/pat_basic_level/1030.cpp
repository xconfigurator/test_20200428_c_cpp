/**
 * @file 1030.cpp
 * @author liuyang
 * @brief 二分法练习 
 * 
 * 题目：完美数列
 * https://pintia.cn/problem-sets/994805260223102976/problems/994805291311284224
 * 说明：01:57 听视频解释想法，然后跟着写出来。
 * OJ状态：答案正确
 * 
输入样例：
10 8
2 3 20 4 5 1 6 7 8 9

输出样例：
8
 * 
 * @version 0.1
 * @date 2021-12-04
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<iostream>
#include<algorithm>
using namespace std;

int bSearch(int L, int R, long long key, long long arr[]) {
    while (L <= R) {
        //int mid = (L + R) / 2; 
        int mid = L + (R - L) / 2;
        if (key < arr[mid]) {
            R = mid - 1;
        } else if (arr[mid] < key) {
            L = mid + 1;
        } else {
            return mid;
        }
    }
    return R;// 退出循环时L = R + 1;因为本题要求，没必要找到一个等于key的数，只需要找到不大于key的数字就好。
}

int main(int argc, char const *argv[]) {
    long long N, p;
    long long arr[100010];  // pow(10, 5);
    cin >> N >> p;
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }
    sort(arr, arr + N);     // 默认升序排序
    int max = 1;            // 用于跟踪最长的完美序列的长度
    for (int i = 0; i < N; ++i) {
        // 找到M（M <= mp）
        int k = bSearch(i + 1, N - 1, p * arr[i], arr);
        // 保存max
        if (max < k - i + 1) 
            max = k - i + 1;
    }
    cout << max << endl;
    return 0;
}