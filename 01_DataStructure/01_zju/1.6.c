/**
 * @file 1.6.c
 * @author your name (you@domain.com)
 * @brief 测试函数function的运行时间
 * 
 * @version 0.1
 * @date 2022-12-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
#include <time.h>

clock_t start, stop;    /* clock_t是clock(函数返回的变量类型) */
double duration;        /* 记录被测试函数运行时间，以秒为单位 */

void foo() {
    int i;
    for (i = 0; i < 100; ++i) {
        printf("bar\n");
    }
}

int main(int argc, char const *argv[]) {
    /* 不在测试范围内的准备工作写在clock()调用之前 */

    /* 开始计时 */
    start = clock();
    /* 待测试代码写在这里 */
    foo();
    /* 停止计时 */
    stop = clock();
    /* 计算运行时间 */
    /* 注1：CLK_TCK是机器时钟每秒所走的的时钟打点数 */
    /* 注2：在某些IDE下也可能叫CLOCKS_PER_SEC */
    duration = ((double) (stop - start)) / CLK_TCK;
    
    /* 其他不在测试范围内的处理写在后面，例如输出duration的值。 */
    printf("duration = %f\n", duration);
    return 0;
}