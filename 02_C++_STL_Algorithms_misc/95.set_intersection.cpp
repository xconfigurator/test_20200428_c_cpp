/**
 * @file 95.set_intersection.cpp
 * @author your name (you@domain.com)
 * @brief 交
 * 参考：
 * https://en.cppreference.com/w/cpp/algorithm/set_intersection
 * 视频：
 * https://www.bilibili.com/video/BV1et411b73Z/?p=261&spm_id_from=pageDriver&vd_source=8bd7b24b38e3e12c558d839b352b32f4
 * 
 * @version 0.1
 * @date 2023-07-21
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
 
int main()
{
    std::vector<int> v1 {7, 2, 3, 4, 5, 6, 7, 8};
    std::vector<int> v2 {5, 7, 9, 7};
    std::sort(v1.begin(), v1.end());
    std::sort(v2.begin(), v2.end());
 
    std::vector<int> v_intersection;
    std::set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(),
                          std::back_inserter(v_intersection));
 
    for (int n : v_intersection)
        std::cout << n << ' ';
    std::cout << '\n';
}