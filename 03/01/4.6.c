/*
4.6.c 指针变量作参数 
编写一个函数inputArray, 该函数被主函数调用，
通过该函数实现向主函数中定义的数组输入数据。

说明：

@since 2021/2/16
*/
#include "stdio.h"

const int INPUT_NUMS = 10;

void inputArray(int *array, int len) {
    int i;
    for (i = 0; i < len; i++) {
        scanf("%d", array + i);
    }
}

int main() {
    int i, array[10];
    printf("Please input data for array with %d numbers\n", INPUT_NUMS);
    inputArray(array, INPUT_NUMS);
    for (i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}