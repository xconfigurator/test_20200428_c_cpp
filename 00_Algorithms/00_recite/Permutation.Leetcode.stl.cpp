/*
全排列
@since 2021/2/19
@author liuyang

文档(STL Algorithms)：
https://en.cppreference.com/w/cpp/algorithm/next_permutation

题目：46
https://leetcode-cn.com/problems/permutations/

视频：
next_permutation
https://www.bilibili.com/video/BV1554y1R7RW?from=search&seid=15752728863264297471
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> res;
    int n = nums.size(), x = 1;
    for (int i = 2; i <= n; i++) x *= i; // 计算阶乘
    while (x--) {
        res.push_back(nums);
        next_permutation(nums.begin(), nums.end());
    }
    return res;
}

int main () {
    vector<int> v  = {1 ,2, 3, 4};
    vector<vector<int>> vpermute = permute(v);

    // output begin
    for (int i = 0; i < vpermute.size(); i++) {
        cout << (i + 1) << ":\t";
        for (int j = 0; j < vpermute[i].size(); j++) {
            cout << vpermute[i][j] << " ";
        }
        cout << endl;
    }
    // output end
    return 0;
}