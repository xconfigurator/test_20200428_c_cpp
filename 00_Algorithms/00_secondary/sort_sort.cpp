/*
sort 14:48
https://www.bilibili.com/video/BV1Ty4y1n7JH?p=7&spm_id_from=pageDriver
*/
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int arr[] = {1, 2, 0, -1, 3, -9, 12, 1, 2, 10}; // 排序其他数组类型直接修改数组类型即可 不需要其他修改
    sort(arr, arr + 10);
    for (int i = 0; i < 10; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}