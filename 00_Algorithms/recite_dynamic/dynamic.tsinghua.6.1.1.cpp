/**
 * @file dyncmic.tsinghua.1.cpp
 * @author your name (you@domain.com)
 * @brief 兔子数列问题
 * 清华 程序设计基础 动态规划实例 - 1
 * https://www.xuetangx.com/learn/THU08091000270/THU08091000270/10322319/video/17398614?channel=i.area.learn_title
 * https://www.xuetangx.com/learn/THU08091000270/THU08091000270/10322319/video/17398615?channel=i.area.learn_title
 * 
 * @version 0.1
 * @date 2022-07-02
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {

    int n;
    cin >> n;

    // 定义数组
    int small[12], big[12];

    // 设定初值
    small[0] = 1;
    big[0] = 0;

    // 递推
    for (int i = 1; i < n; ++i) {
        small[i] = big[i - 1];
        big[i] = big[i - 1] + small[i - 1];
    }

    // 输出总数
    cout << small[n - 1] + big[n - 1] << endl;

    return 0;
}