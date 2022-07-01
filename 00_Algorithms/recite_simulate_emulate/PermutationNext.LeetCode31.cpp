/**
 * @file PermutationNext.LeetCode31.cpp
 * @author liuyang
 * @brief 
 * 
 * 参考视频:
 * 宰相小甘罗讲解
 * https://www.bilibili.com/video/BV1DV411v7MM?from=search&seid=3861083446882188060&spm_id_from=333.337.0.0
 * 米开讲解
 * https://www.bilibili.com/video/BV15t411374P?from=search&seid=3861083446882188060&spm_id_from=333.337.0.0
 * 
 * @version 0.1
 * @date 2021-11-28
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <vector>
#include <algorithm>
using namespace std;

// 宰相小甘罗讲解
void nextPermutation(vector<int> & num) {
    if (num.empty()) {
        return;
    }

    int violation_index = num.size() - 2;
    for (; violation_index >= 0; violation_index--) {
        if (num[violation_index] < num[violation_index + 1]) {
            break;
        }
    }

    reverse(begin(num) + violation_index + 1, end(num));

    if (violation_index == -1) {
        return ;
    }

    auto it = upper_bound(
        begin(num) + violation_index + 1, num.end(), num[violation_index]
    );

    swap(num[violation_index], *it);
}