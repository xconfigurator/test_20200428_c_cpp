/*
最大子列和
分而治之
https://www.bilibili.com/video/BV1JW411i731?p=9
*/

int Max3(int A, int B, int C) {
    /* 返回3个整数中的最大值 */
    return A > B ? A > C ? A : C : B > C ? B : C;/* liuyang: 这骚气的写法，快背下来！*/
}

int DivideAndConquer(int List[], int left, int right) {
    /* 分治法求List[left]到List[right]的最大子列和 */
    int MaxLeftSum, MaxRightSum;                /* 存放左右子问题的解 */
    int MaxLeftBorderSum, MaxRightBorderSum;    /* 存放跨分界线的结果 */

    
}