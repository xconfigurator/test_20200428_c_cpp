/**
 * @file 96.set_union.cpp
 * @author your name (you@domain.com)
 * @brief 并
 * 参考：
 * https://en.cppreference.com/w/cpp/algorithm/set_union
 * 视频：
 * https://www.bilibili.com/video/BV1et411b73Z?p=262&vd_source=8bd7b24b38e3e12c558d839b352b32f4
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
 
void println(std::vector<int> const& v)
{
    for (int i : v)
        std::cout << i << ' ';
    std::cout << '\n';
}
 
int main()
{
    std::vector<int> v1, v2, dest;
 
    v1 = {1, 2, 3, 4, 5};
    v2 = {      3, 4, 5, 6, 7};
 
    std::set_union(v1.cbegin(), v1.cend(),
                   v2.cbegin(), v2.cend(),
                   std::back_inserter(dest));
    println(dest);
 
    dest.clear();
 
    v1 = {1, 2, 3, 4, 5, 5, 5};
    v2 = {      3, 4, 5, 6, 7};
 
    std::set_union(v1.cbegin(), v1.cend(),
                   v2.cbegin(), v2.cend(),
                   std::back_inserter(dest));
    println(dest);
}