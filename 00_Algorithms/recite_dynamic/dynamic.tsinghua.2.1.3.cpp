/**
 * @file dynamic.tsinghua.2.1.3.cpp
 * @author your name (you@domain.com)
 * @brief  * @brief  * @brief 分鱼问题 从A到E递推 - 进一步优化
 * 清华 程序设计基础 动态规划实例 - 2 邬晓钧
 * 
 * 优化：
 * 1. 枚举步长变为5，减少循环次数，
 * 2. 去掉对num[0] % 5 != 1的判断
 * 3. 考虑到整数除法 (num[i] - 1) / 5 * 4 -> num[i] / 5 * 4;
 * 4. 初始值：num[0]至少是 6 * (( 5 / 4) * 4)约等于15，所以，A看到的鱼至少可以从16开始枚举
 * 
 * 运行结果：
 * 3121 2496 1996 1596 1276
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
    for (num[0] = 16; ; num[0] += 5) {// 优化点4， 优化点1
        // 优化点2
        /*
        if (num[0] % 5 != 1) {
            continue;
        }
        */
        // /////////////////////////////////////
        // B C D E
        int i;
        for (i = 1; i <= 4; i++) {
            //num[i] = (num[i - 1] - 1) / 5 * 4;
            num[i] = num[i - 1] / 5 * 4;
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