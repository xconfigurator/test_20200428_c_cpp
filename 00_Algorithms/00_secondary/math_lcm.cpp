/*
最小公倍数
lowest common multiple

说明：
c为a和b的最大公约数，则a和b的最小公倍数为ab/c。

参考视频：
https://www.bilibili.com/video/BV1Ty4y1n7JH?p=13&spm_id_from=pageDriver


输入样例：
49 14

输出样例：
98
*/
#include <iostream>
using namespace std;

int getGcd(int a, int b) {
    if(b == 0) {
        return a;
    } else {
        return getGcd(b, a % b);
    }
}

// LCM
int getLcm(int a, int b) {
    return a * b / getGcd(a, b);
}


int main() {
    int m, n;
    while (cin >> m >> n) {
        int lcm = getLcm(m, n);
        cout << lcm << endl;
    }
    return 0;
}