/*
最大子列和 P15
枚举算法
https://www.bilibili.com/video/BV1JW411i731?p=8
穷举所有的子列和，从中找出最大值。
O(n3)

结论先写在前面：
这一系列例子告诉大家，解决同一个问题，不同的算法会有很大的差别。
提高效率的窍门之一，是让计算机“记住”一些关键的中间结果，避免重复计算。
*/

int MaxSubseqSum1(int List[], int N) {
    int i, j, k;
    int ThisSum, MaxSum = 0;
    for (i = 0; i < N; i++) {       /* i是子列左端位置 */
        for (j = i; j < N; j++) {   /* j是子列右端位置 */
            ThisSum = 0;            /* ThisSum是从List[i]到List[j]的子列和 */
            for (k = i; k <= j; k++) {
                ThisSum += List[k];
            }
            if(ThisSum > MaxSum) {  /* 如果刚刚得到的这个子列和更大 */
                MaxSum = ThisSum;   /* 则更新结果 */
            }
        }/* j循环结束 */
    }/* i循环结束 */
    return MaxSum;
}