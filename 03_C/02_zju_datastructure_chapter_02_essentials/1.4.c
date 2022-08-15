/**
 * @file 1.4.c
 * @author your name (you@domain.com)
 * @brief 求简单交错幂级数的部分和
 * @version 0.1
 * @date 2022-08-15
 * 
 * @copyright Copyright (c) 2022
 * 
测试用例
0.5 12  返回 0.33
0.73 9  返回 0.45
0.2 1   返回 0.20
0 100   返回 0.00
 */
 #include <stdio.h>

double fn(double x, int n) {
    if (n == 1) {
        return x;
    } else {
        return (x * (1- fn(x, n - 1)));
    }
}

 int main() {
    double x, S;
    int n;
    scanf("%lf %d", &x, &n);    /* 注意读取double类型的时候需要使用%lf */
    S = fn(x, n);
    printf("%.2f\n", S);        /* 注意输出double类型的时候使用%f即可 */
    return 0;
 }