/*
全排列
@since 2021/2/19
@author liuyang

题目：46
https://leetcode-cn.com/problems/permutations/

视频：
next_permutation
https://www.bilibili.com/video/BV1554y1R7RW?from=search&seid=15752728863264297471
*/
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> res;
    int n = nums.size(), x = 1;
    for (int i = 2; i <= n; i++) x *= i;
    return res;
}

int main () {
    return 0;
}