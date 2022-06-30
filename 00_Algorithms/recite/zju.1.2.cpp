/*
最大子列和
枚举算法 (存储部分中间值)
https://www.bilibili.com/video/BV1JW411i731?p=8
部分存储中间值的穷举
O(n2)
*/

int MaxSubseqSum2(int List[], int N) {
    int i, j;
    int ThisSum, MaxSum = 0;

    for (i = 0; i < N; i++) {       /* i是子列左端位置 */
        ThisSum = 0;                /* ThisSum是从List[i]到List[j]的子列和 */
        for (j = i; j < N; j++) {   /* j是子列右端位置 */
            /* 对于相同的i, 不同的j, 只要在j-1次循环的基础上累加1即可 */
            ThisSum += List[j];
            if (ThisSum > MaxSum) {
                MaxSum = ThisSum;
            }
        }
    }

    return MaxSum;
}