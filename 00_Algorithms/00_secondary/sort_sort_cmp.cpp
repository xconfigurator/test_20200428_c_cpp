/*
sort 定制降序
https://www.bilibili.com/video/BV1Ty4y1n7JH?p=7&spm_id_from=pageDriver
*/
#include <iostream>
#include <algorithm>
using namespace std;
bool cmp (double a, double b) {
    return a > b;// 降序
}
int main() {
    double arr[] = {1.11, 0.3, 4.5, -9.9, -2.1, -3.1, 0.11}; // 排序其他数组类型直接修改数组类型即可 不需要其他修改
    sort(arr, arr + 7, cmp);
    for (int i = 0; i < 7; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}