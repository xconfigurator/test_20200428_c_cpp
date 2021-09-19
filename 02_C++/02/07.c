/*
C程序改写 P19
20210919

最大公约数
下面是一个C程序，采用C++风格改写它。
*/
#include <stdio.h>

int main() {
    int a, b, d, min, t = 0;  // C的变量都需要定义在开始。C++的变量可以随定义随使用。
    printf("Enter tow numbers:");
    scanf("%d %d", &a, &b);
    min = a > b ? b : a;
    for (d = 2; d <= min; d++) {
        if ((a % d == 0) && (b % d) == 0) {
            t = d;
        }
    }

    if (t == 0) {
        printf("No greatest common divisor. \n");
    } else {
        printf("The greatest common divisor is %d. \n", t);
    }

    return 0;
}