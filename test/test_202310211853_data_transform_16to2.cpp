// TODO
// 

/**
 * @file test_202310211853_data_transform_16to2.cpp
 * @author your name (you@domain.com)
 * @brief 
 * 16进制转2进制 工具 需要使用方便、准确
 * @version 0.1
 * @date 2023-10-24 先这样吧，比较笨，但能用。后面有别的办法再改
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
#include <stdlib.h> // _itoa
#include <string.h> // strlen
using namespace std;

#define RADIX_2 2
#define RADIX_10 10
#define RADIX_16 16

void c_x_to_d_helper_show(long int, char*);// 声明一下

int main() {
    void procedure202310241635(char *);
    procedure202310241635("80000");

    return 0;
}

// 16 -> 10 -> 2
void procedure202310241635(char *str) {
    // 16 -> 10 strtol
    long int result;
    char *endptr;
    result = strtol(str, &endptr, RADIX_16);
    c_x_to_d_helper_show(result, endptr);

    // 10 -> 2 _itoa
    char buffer[1000];
    _itoa(result, buffer, RADIX_2);
    printf("base %d: %s (%d chars)\n", 16, buffer, strnlen(buffer, _countof(buffer)));
}

// https://www.runoob.com/cprogramming/c-function-strtol.html
void c_x_to_d_helper_show(long int result, char *endptr) {
    if (*endptr != '\0') {
        printf("转换失败\n");
    } else {
        printf("转换结果：%ld\n", result);
    }
}