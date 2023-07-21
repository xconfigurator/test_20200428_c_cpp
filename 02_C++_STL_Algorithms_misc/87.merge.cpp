/**
 * @file 87.merge.cpp
 * @author your name (you@domain.com)
 * @brief 合并两个有序序列
 * 参考：
 * https://en.cppreference.com/w/cpp/algorithm/merge
 * 视频：
 * https://www.bilibili.com/video/BV1et411b73Z/?p=253&spm_id_from=pageDriver&vd_source=8bd7b24b38e3e12c558d839b352b32f4
 * 
 * @version 0.1
 * @date 2023-07-21
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <algorithm>
#include <functional>
#include <iostream>
#include <iterator>
#include <random>
#include <vector>

// liuyang:注：需要C++ 14
auto print = [](auto const rem, auto const& v)
{
    std::cout << rem;
    std::copy(v.begin(), v.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << '\n';
};
 
int main()
{
    // fill the vectors with random numbers
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<> dis(0, 9);
 
    std::vector<int> v1(10), v2(10);
    std::generate(v1.begin(), v1.end(), std::bind(dis, std::ref(mt)));
    std::generate(v2.begin(), v2.end(), std::bind(dis, std::ref(mt)));
 
    print("Originally:\nv1: ", v1);
    print("v2: ", v2);
 
    std::sort(v1.begin(), v1.end());
    std::sort(v2.begin(), v2.end());
 
    print("After sorting:\nv1: ", v1);
    print("v2: ", v2);
 
    // merge
    std::vector<int> dst;
    // 写法1：
    std::merge(v1.begin(), v1.end(), v2.begin(), v2.end(), std::back_inserter(dst));
    // 写法2：begin
    //dst.resize(v1.size() + v2.size());// 先分配空间
    //std::merge(v1.begin(), v1.end(), v2.begin(), v2.end(), dst.begin());// liuyang 不可以单独这样写！！！！否则会崩溃！
    // 写法2：end
    // 显然参考示例给出的写法更简便。

    print("After merging:\ndst: ", dst);
}