/*
全排列
@since 2021/11/20
@author liuyang

参考视频：
正月点灯笼
https://www.bilibili.com/video/BV1dx411S7WR

敲代码在视频的9:21左右
*/
#include <iostream>
using namespace std;

int col = 0;

void swap(int a[], int arrLength, int idx1, int idx2) {
    if (idx1 < 0 || idx1 >= arrLength) return;
    if (idx2 < 0 || idx2 >= arrLength) return;

    int tmp = a[idx1];
    a[idx1] = a[idx2];
    a[idx2] = tmp;
}

void printArray(int a[], int arrLength) {
    cout << ++ col << ":\t";
    for (int i = 0; i < arrLength; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;
}

/**
 * p 开始索引号
 * q 结束索引号
 * */
void permutation(int a[], int arrLength, int p, int q) {
    if (p == q) {
        printArray(a, arrLength);
    }

    for (int i = p; i < q; ++i) {
        swap(a, arrLength, p, i);
        permutation(a, arrLength, p + 1, q);
        swap(a, arrLength, p, i);
    }
}

int main(int arc, char const *argv[]) {
    int a[] = {1, 2, 3, 4, 5};
    //int a[] = {1, 2, 3};
    int length = sizeof(a) / sizeof(a[0]);
    permutation(a, length, 0, length);
    return 0;
}
