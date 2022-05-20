/*
sort struct
https://www.bilibili.com/video/BV1Ty4y1n7JH?p=7&spm_id_from=pageDriver
天勤 见网盘
*/
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

struct structTest {
    int a;
    int b;
};

bool cmp (const structTest& st1, const structTest& st2) {
    return st1.a < st2.a;// 看<方向就可以看出是升序，很直观，不再绕弯子。
}

int main() {
    structTest arr[] = {
        {1, 2},
        {-1, -2},
        {3, 4},
        {7, 9},
        {0, 1}
    };
    sort(arr, arr + 5, cmp);
    for (int  i = 0; i < 5; ++i) {
        cout << arr[i].a << "," << arr[i].b << endl;
    }
    return 0;
}