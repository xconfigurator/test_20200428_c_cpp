/**
 * @file dynamic.tsinghua.2.cpp
 * @author your name (you@domain.com)
 * @brief 分鱼问题 从A到E递推
 * 清华 程序设计基础 动态规划实例 - 2 邬晓钧
 * 
 * @version 0.1
 * @date 2022-07-02
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    // 定义数组
    int num[5];

    // 枚举num[0]
    for (num[0] = 1; ;num[0]++) {
        // A
        if (num[0] % 5 != 1) {
            continue;
        }
        // B
        num[1] = (num[0] - 1) / 5 * 4;
        if (num[1] % 5 != 1) {
            continue;
        }
        // C
        num[2] = (num[1] - 1) / 5 * 4;
        if (num[2] % 5 != 1) {
            continue;
        }
        // D
        num[3] = (num[2] - 1) / 5 * 4;
        if (num[3] % 5 != 1) {
            continue;
        }
        // E
        num[4] = (num[3] - 1) / 5 * 4;
        if (num[4] % 5 != 1) {
            continue;
        }
        // 找到了
        break;
    }
    // 输出答案
    for (int i = 0; i < 5; i++) {
        cout << num[i] << ' ';
    }
    
    return 0;
}