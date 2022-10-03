/**
 * @file dynamic.tsinghua.2.1.2.cpp
 * @author your name (you@domain.com)
 * @brief  * @brief 分鱼问题 从A到E递推 - 用循环简化书写
 * 清华 程序设计基础 动态规划实例 - 2 邬晓钧
 * 
 * @version 0.1
 * @date 2022-10-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */
 #include <iostream>
 using namespace std;

 int main(int argc, char *argv[]) {
    // 定义数组
    int num[5];

    // 枚举
    for (num[0] = 1; ; num[0]++) {
        if (num[0] % 5 != 1) {
            continue;
        }
        // /////////////////////////////////////
        // B C D E
        int i;
        for (i = 1; i <= 4; i++) {
            num[i] = (num[i - 1] - 1) / 5 * 4;
            if (num[i] % 5 != 1) {
                break;
            }
        }
        if (i <= 4) {
            continue;
        }
        // /////////////////////////////////////
        break;
    }

    // 输出结果
    for (int i = 0; i < 5; i++) {
        cout << num[i] << ' ';
    }

    return 0;
 }