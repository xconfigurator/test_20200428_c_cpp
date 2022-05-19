/*
验证“1 + 1 = 2”
求n之内的所有偶数表示为两个素数之和
注：哥德巴赫猜想是要证明对任何大于6的自然数n命题成立。

注：这个需要看一下解析。

样例：
40
请输入一个偶数（>= 6）
40
6 = 3 + 3
8 = 3 + 5
10 = 3 + 7
12 = 3 + 9
14 = 3 + 11
16 = 3 + 13
18 = 3 + 15
20 = 3 + 17
22 = 3 + 19
24 = 5 + 19
26 = 3 + 23
28 = 3 + 25
30 = 5 + 25
32 = 3 + 29
34 = 3 + 31
36 = 5 + 31
38 = 3 + 35
40 = 3 + 37
*/
#include <iostream>
#include <math.h>
using namespace std;

int isprime(long n);

int main(int argc, char const *argv[]) {
    long num;
    cout << "请输入一个偶数（>= 6）" << endl;
    cin >> num;

    for (long n = 6; n <= num; n += 2) {// 枚举n之内大于6的所有偶数
        for (long i = 3; i <= n / 2; i += 2) {// 
            if (isprime(i) && isprime(n - i)) {
                cout << n << " = " << i << " + " << (n -i) << endl;
                break;
            } 
        }
    }
    return 0;
}

int isprime(long n) {
    long q = sqrt(n);
    for (long i = 2; i < q; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}