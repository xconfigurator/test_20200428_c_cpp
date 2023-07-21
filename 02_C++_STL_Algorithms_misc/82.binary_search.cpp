/**
 * @file 82.binary_search.cpp
 * @author your name (you@domain.com)
 * @brief 在已排好序的容器中查找指定元素 
 * 参考：
 * https://en.cppreference.com/w/cpp/algorithm/binary_search
 * 视频：
 * https://www.bilibili.com/video/BV1et411b73Z/?p=248&spm_id_from=pageDriver&vd_source=8bd7b24b38e3e12c558d839b352b32f4
 * 
 * @version 0.1
 * @date 2023-07-21
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char const *argv[]) {
    // 来自https://en.cppreference.com/w/cpp/algorithm/binary_search
    std::vector<int> haystack {1, 3, 4, 5, 9};// 注：haystack必须有序，binary_search结果才有意义。
    std::vector<int> needles {1, 2, 3};
 
    for (auto needle : needles)
    {
        std::cout << "Searching for " << needle << '\n';
        if (std::binary_search(haystack.begin(), haystack.end(), needle))
            std::cout << "Found " << needle << '\n';
        else
            std::cout << "no dice!\n";
    }
    return 0;
}