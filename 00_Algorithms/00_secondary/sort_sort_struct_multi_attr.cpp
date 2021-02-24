/*
sort struct
https://www.bilibili.com/video/BV1Ty4y1n7JH?p=7&spm_id_from=pageDriver
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
    // return st1.a < st2.a;
    if (st1.a == st2.a) {
        return st1.b < st2.b;
    } else {
        return st1.a < st2.a;
    }
}

int main() {
    structTest arr[] = {
        {1, 2},
        {-1, -2},
        {3, 4},
        {7, 9},
        {0, 6},
        {0, -1}
    };
    sort(arr, arr + 6, cmp);
    for (int  i = 0; i < 6; ++i) {
        cout << arr[i].a << "," << arr[i].b << endl;
    }
    return 0;
}