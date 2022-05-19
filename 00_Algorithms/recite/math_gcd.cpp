/*
最大公约数（欧几里得算法） gcd(a, b) = gcd(b, a % b)
greatest common divisor

@author liuyang
@since 2021/2/21

参考视频：
https://www.bilibili.com/video/BV1Ty4y1n7JH?p=13&spm_id_from=pageDriver

输入样例：
49 14

输出样例：
7
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

int main() {
    int m, n;
    while (cin >> m >> n) {
        int gcd = getGcd(m, n);
        cout << gcd << endl;
    }
    return 0;
}