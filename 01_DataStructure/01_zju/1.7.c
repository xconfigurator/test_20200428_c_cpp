/**
 * @file 1.7.c
 * @author your name (you@domain.com)
 * @brief 比较两种算法的执行 课本P5 代码1.7
 * @version 0.1
 * @date 2022-12-06
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*
问题描述：课本P3
一元多项式的标准表达式可以写为: f(x) = a0 + a1 * x +  ... + an-1 * pow(x, n - 1) + an * pow(x, n)
现给定一个多项式的阶数n, 并将全体系数{ai} i = 0,..., n存放在数组a[]里。
请写程序计算这个多项式在给定点x处的值。
*/
#include <stdio.h>
#include <time.h>
#include <math.h>

clock_t start, stop;
double duration;

#define MAXN 10     /* 多项式最大项数，即多项式阶数 */
#define MAXK 1e7    /* 被测函数最大重复调用测试 */

// 直接翻译
double f1(int n, double a[], double x) {
    /* 代码1.4 的算法 */
    /* 计算阶数为n, 系数为a[0]...a[n]的多形式在x的值 */
    int i;
    double p = a[0];
    for (i = 1; i <= n; i++) {
        p += a[i] * pow(x, i);
    }
    return p;
}

// 秦九韶
/*
秦九韶，南宋数学家。
通过不断提出公因式x来减少乘法的运算次数。
*/
double f2(int n, double a[], double x) {
    /* 代码1.5 的算法 */
    /* 计算阶数为n, 系数为a[0]...a[n]的多形式在x的值 */
    int i;
    double p = a[n];
    for (i = n; i > 0; --i) {
        p = a[i - 1] + x * p;
    }
    return p;
}

void run(double (*f)(int, double*, double), double a[], int case_n) {
    /* 次函数用于测试被测函数(*f)的运行时间，并根据case_n输出相应的结果 */
    /* case_n是输出的函数编号：1 代表函数f1; 2 代表函数f2 */
    int i;

    start = clock();

    for (i = 0; i < MAXK; ++i) {/* 重复调用以获得充分多的时钟打卡点数 */
        (*f)(MAXN-1, a, 1.1);
    }

    stop = clock();

    duration = ((double) (stop - start)) / CLK_TCK / MAXK;
    printf("ticks%d=%f\n", case_n, (double)(stop - start));
    printf("duration%d=%f6.2e\n", case_n, duration);
}

int main(int argc, char const *argv[]) {
    int i;
    double a[MAXN];/* 存储多项式的系数 */

    /* 为本题的多项式系数赋值，即a[i] = i */
    for (i = 0; i < MAXN; ++i) {
        a[i] = (double) i;
    }

    run(f1, a, 1);
    run(f2, a, 2);

    return 0;
}