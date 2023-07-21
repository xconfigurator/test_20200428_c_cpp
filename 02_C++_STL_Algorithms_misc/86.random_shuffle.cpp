/**
 * @file 86.random_shuffle.cpp
 * @author your name (you@domain.com)
 * @brief 指定范围内的元素随机调整次序
 * 参考：
 * https://en.cppreference.com/w/cpp/algorithm/random_shuffle
 * 视频：
 * https://www.bilibili.com/video/BV1et411b73Z/?p=252&spm_id_from=pageDriver&vd_source=8bd7b24b38e3e12c558d839b352b32f4
 * 视频中提供的版本已经在C++14被标注deprecated，在C++17中已经被移除。
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
#include <random>
#include <vector>
#include <ctime>
 
int main()
{
    srand((unsigned int)time(NULL));// 随机种子 放到这里也不影响来自参考的代码，只能影响后半段
    // 来自：https://en.cppreference.com/w/cpp/algorithm/random_shuffle
    std::vector<int> v {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
 
    std::random_device rd;
    std::mt19937 g(rd());
 
    std::shuffle(v.begin(), v.end(), g);
 
    std::copy(v.begin(), v.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << '\n';


    // 视频中演示的random_shuffle
    // (deprecated in C++14)
    // (removed in C++17)
    // 注：不过这个用起来真是简单啊！！
    //srand((unsigned int)time(NULL));// 随机种子
    std::random_shuffle(v.begin(), v.end());

    std::copy(v.begin(), v.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << '\n';
}