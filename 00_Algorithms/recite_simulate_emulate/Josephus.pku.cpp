/**
 * @file Josephus.pku.cpp
 * @author liuyang
 * @brief 约瑟夫问题（模拟）《程序设计导引及在线实践（第2版)》 P121
 * 注：本题是数组的实现方式，推荐使用STL来完成
 * 
 * 参考视频：
 * 数组版本
 * https://www.bilibili.com/video/BV1TL4y1B7Wd?from=search&seid=7341034974246288425&spm_id_from=333.337.0.0
 * 链表版本
 * https://www.bilibili.com/video/BV1TL4y1B7Wd?p=2
 * 
 * @version 0.1
 * @date 2021-11-23
 * 
 * @copyright Copyright (c) 2021
 * 
 * 约瑟夫问题：有n只猴子，按顺时针方向围成一圈选大王（编号从1~n），从第1号开始报数，一直数到m，数到m的猴子退出圈外，剩下的猴子再接着从1开始报数。
 * 就这样，直到圈内只剩下一只猴子时，这个猴子就是猴王。
 * 编程完成如下功能：输入n和m后，输出最后猴王的编号。
 * 
 * 输入数据：
 * 输入每行是用空格分开的两个整数，第一个是n，第二个是m(0 < m, n < 300). 最后一行是
 * 0 0
 * 
 * 输入样例：
6 2
12 4
8 3
0 0 
 * 输出样例：
5
1
7
 */
#include <stdio.h>
#include <stdlib.h>
#define MAX_NUM 300
int aLoop[MAX_NUM + 10];

int main(int arc, char const * argv[]) {
    int n, m, i;
    while (true) {
        scanf("%d%d", &n, &m);
        if (n == 0) {
            break;
        }
        for (i = 0; i < n; i++) {
            aLoop[i] = i + 1;
        }
        int nPtr = 0;
        for (i = 0; i < n; i++) {       // 每次循环将1个猴子赶出圈子，最后被赶出去的就是猴王。
            int nCounted = 0;
            while (nCounted < m) {      // 数出m个猴子
                while (aLoop[nPtr] == 0) nPtr = (nPtr + 1) % n; // 跳过已经出圈的猴子
                nCounted++;             // 找到找到一只猴子
                nPtr = (nPtr + 1) % n;  // 找到下一个位置
            }
            nPtr --;                    // 要回退一个位置。（liuyang：为啥？）
            if (nPtr < 0)
                nPtr = n - 1;           
            if (i == n - 1)             // 最后一只出圈的猴子
                printf("%d\n", aLoop[nPtr]);
            aLoop[nPtr] = 0;            // 猴子出圈   
        } 
    }
    return 0;
}