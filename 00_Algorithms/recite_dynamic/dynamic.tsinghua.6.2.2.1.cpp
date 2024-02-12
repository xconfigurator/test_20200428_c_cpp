/**
 * @file dynamic.tsinghua.2.2.cpp
 * @author your name (you@domain.com)
 * @brief 分鱼问题 从E到A递推
 * 清华 程序设计基础 动态规划实例 - 2 邬晓钧
 * 
 * 分析：
 * 反解递推条件
 * 已知num[i + 1] = (num[i] - 1) / 5 * 4;
 * 反求得：num[i] = num[i + 1] / 4 * 5 + 1;
 * 限制条件变化：
 * 已知num[i] % 5 == 1（我应该分成五份后还余一条）
 * 知num[i + 1] % 4 == 0（现在这个鱼的数目应该是4的倍数）
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

    // 枚举num[4]（从6开始）
    for (num[4] = 6; ; num[4] += 5) {
        if (num[4] % 4 != 0 ) {
            continue;
        }
        num[3] = num[4] / 4 * 5 + 1;
        if (num[3] % 4 != 0) {
            continue;
        }
        num[2] = num[3] / 4 * 5 + 1;
        if (num[2] % 4 != 0) {
            continue;
        } 
        num[1] = num[2] / 4 * 5 + 1;
        if (num[1] % 4 != 0) {
            continue;
        }
        num[0] = num[1] / 4 * 5 + 1;
        break;
    }

    // 输出结果
    for (int i = 0; i < 5; ++i) {
        cout << num[i] << ' ';
    }

    return 0;
 }
