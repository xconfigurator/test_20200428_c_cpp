#include <stdio.h>

// 注意整除
// 9 / 5 == 1
int main() {
    char a = 'a', b = 'j';
    float x;
    x = (b - a) / ('F' - 'A'); // 9 / 5
    printf("%d\n", (int) (3.14 * x));

    // liuyang
    printf("===================\n");
    printf("%d\n", (int) (9 / 5));
    printf("%d\n", (int) ((9 / 5) * 3.14));
    return 0;
}