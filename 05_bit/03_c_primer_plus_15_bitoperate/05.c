/**
 * @file 05.c
 * @author your name (you@domain.com)
 * @brief 
 * 编写一个函数，把一个unsigned int类型值中额所有位向左旋转指定的位。
 * 例如：rotate_l(x, 4)就是把x中所有位向左移动4个位置，而且从最左端移除的位会重新出现在右端。
 * 也就是说，把从高阶位移出的位放入低阶位。在一个程序中测试该函数。
 * 
 * 编程分析：
 * 程序要求在对数据移位过程中，空位不是补0，而是将移出的数据补入空位。为了解决这个问题，基本算法是首先保存移出位的数据，
 * 即一次移出1位并读取数值，然后再将该数值设置到反方向的空位。
 *
 * @version 0.1
 * @date 2023-10-17
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>
#include <limits.h>

int rotate_l(int n, int length);

int main(int argc, char * argv[]) {
    int i, length;
    printf("Enter the number and a move bit:");
    scanf("%d %d", &i, &length);
    printf("the %d move %d bit, result is %d\n", i, length, rotate_l(i, length));
    return 0;
}

int rotate_l(int n, int length) {
    const static int size = CHAR_BIT * sizeof(int);
    if (length > size || length < 0)  {
        printf("Error length.\n");
        return 0;
    }
    for (int i = 0; i < length; i++) {
        /*
        先读取将要被移出的数据，即把最高位设置为1，并与n进行与操作。
        */
        if (n & (1 << (size - 1))) {// 如果结果是1，则位移，并在右侧置1。
            n <<= 1;
            n |= 1;
        } else {// 如果结果是0，则直接位移
            n <<= 1;
        }
    }
    return n;
}