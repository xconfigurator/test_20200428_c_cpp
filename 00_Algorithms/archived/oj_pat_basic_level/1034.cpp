/*
@author liuyang
@since 2021/2/21

参考视频：
https://www.bilibili.com/video/BV1Ty4y1n7JH?p=14&spm_id_from=pageDriver


题目：有理数size运算
https://pintia.cn/problem-sets/994805260223102976/problems/994805287624491008

输入样例 1：
2/3 -4/2

输出样例 1：
2/3 + (-2) = (-1 1/3)
2/3 - (-2) = 2 2/3
2/3 * (-2) = (-1 1/3)
2/3 / (-2) = (-1/3)

输入样例 2：
5/3 0/6

输出样例 2：
1 2/3 + 0 = 1 2/3
1 2/3 - 0 = 1 2/3
1 2/3 * 0 = 0
1 2/3 / 0 = Inf
*/
#include <iostream>
using namespace std;

struct Fraction {
    long long up, down;
};

long long getGcd(long long a, long long b) {
    if (b == 0) {
        return a;
    } else {
        return getGcd(b, a % b);
    }
}

// 化简分数
Fraction reduction(Fraction result) {
    if (result.down < 0) {
        result.up = -result.up;
        result.down = -result.down;
    }
    if (result.up == 0) {
        result.down = 1;
    } else {
        long long gcd = getGcd(abs(result.up), abs(result.down));
        result.up /= gcd;
        result.down /= gcd;
    }
    return result;
}

Fraction add(Fraction a, Fraction b) {
    Fraction result;
    result.up = a.up * b.down + b.up * a.down;
    result.down = a.down * b.down;
    return reduction(result);
}

Fraction minu(Fraction a, Fraction b) {
    Fraction result;
    result.up = a.up * b.down - b.up * a.down;
    result.down = a.down * b.down;
    return reduction(result);
}

Fraction multi(Fraction a, Fraction b) {
    Fraction result;
    result.up = a.up * b.up;
    result.down = a.down * b.down;
    return reduction(result);
}

Fraction divide(Fraction a, Fraction b) {
    Fraction result;
    result.up = a.up * b.down;
    result.down = a.down * b.up;
    return reduction(result);
}

void showResult(Fraction r) {
    r = reduction(r); // 打印之前先化简
    if (r.up < 0) {
        printf("(");
    }
    if (r.down == 1) {// 不是分数
        printf("%lld", r.up);
    } else if (abs(r.up) > r.down) {// 假分数
        printf("%lld %lld/%lld", r.up/r.down, abs(r.up) % r.down, r.down);
    } else {// 真分数
        printf("%lld/%lld", r.up, r.down);
    }
    if (r.up < 0) {
        printf(")");
    }
}

int main () {
    Fraction a, b, result;
    scanf("%lld/%lld %lld/%lld", &a.up, &a.down, &b.up, &b.down);
    // +
    showResult(a);
    printf(" + ");
    showResult(b);
    printf(" = ");
    result = add(a, b);
    showResult(result);
    printf("\n");
    
    // - 
    showResult(a);
    printf(" - ");
    showResult(b);
    printf(" = ");
    result = minu(a, b);
    showResult(result);
    printf("\n");

    // * 
    showResult(a);
    printf(" * ");
    showResult(b);
    printf(" = ");
    result = multi(a, b);
    showResult(result);
    printf("\n");

    // /
    showResult(a);
    printf(" / ");
    showResult(b);
    printf(" = ");
    if (b.up == 0) {
        printf("Inf");
    } else {
        result = divide(a, b);
        showResult(result);
    }
    printf("\n");
    
    return 0;
}