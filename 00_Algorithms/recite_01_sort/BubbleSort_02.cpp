/**
 * @file BubbleSort_02.cpp
 * @author liuyang
 * @brief 双向冒泡排序
 * 
 * 参考新东方习题代刷课程，算法设计题第33题。 12:00
 * 
 * 
 * @version 0.1
 * @date 2021-12-18
 * 
 * @copyright Copyright (c) 2021
 * 
 */
/*
void BubbleSort2(int a[], int n) {
    int change = 1, low = 0, high = n -1;   // 冒泡的上下界
    while (low < high && change) {
        change = 0;                         // 重置标记，表示不发生交换
        for (i = low; i < high; i++) {      // 从上向下气泡
            if (a[i] > a[i + 1]) {
                Swap(a[i], a[i + 1]);
                change = 1;
            }
        }
        high--;                             // 修改上界
        for (i = high; i > low; i--) {
            if (a[i] < a[i -1]) {
                Swap(a[i], a[i - 1]);
                change = 1;
            }
        }
        low ++;                             // 修改下界

    }
}
*/