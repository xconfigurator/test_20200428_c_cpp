/**
 * @file Josephus.pku.STL.cpp
 * @author liuyang
 * @brief 使用STL完成前面的数组版本约瑟夫问题
 * 
 * @version 0.1
 * @date 2021-11-28
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
#include <list>
using namespace std;

int main(int argc, char const *argv[]) {
    int n, m, i;
    list<int> *aLoop;
    while (true) {
        aLoop = new list<int>();
        scanf("%d%d", &n, &m);
        if (n == 0) {
            break;
        }
        for (i = 0; i < n; i++) {
            aLoop->push_back(i + 1);
        }
        list<int>::iterator iter = aLoop->begin();
        /*
        for (; iter != aLoop->end(); iter++) {
            printf("%d\t", *iter);
        }
        printf("\n");
        */
       /*
        while(aLoop->size() > 1) {
            for (int j = 0; j < m; ++j) {   // 数m个数
                iter++;
            }
            aLoop->erase(iter);             // 找到需要退圈的那个
        }
        */
        printf("%d\n", *iter);
        //delete aLoop;
    }
    return 0;
}
