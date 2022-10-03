/**
 * @file dynamic.tsinghua.2.2.2.cpp
 * @author your name (you@domain.com)
 * @brief 分鱼问题 从E到A递推 - 改进
 * 清华 程序设计基础 动态规划实例 - 2 邬晓钧
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
        // //////////////////////////////////
        int i = 4;
        for (; i >= 1; --i) {
            if (num[i] % 4 != 0) {
                break;
            }    
            num[i - 1] = num[i] / 4 * 5 + 1;
        }
        if (i >= 1) {
            continue;
        }
        // //////////////////////////////////
        break;
    }

    // 输出结果
    for (int i = 0; i < 5; ++i) {
        cout << num[i] << ' ';
    }

    return 0;
 }