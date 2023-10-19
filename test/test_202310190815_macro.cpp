/**
 * @file test_202310190815_macro.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-10-19
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
#include <time.h>
using namespace std;
 
int main(int argc, char const *argv[]) {
    // 测试一些宏
    printf("sizeof(int) = %d\n", sizeof(int));
    printf("CHAR_BIT = %d\n", CHAR_BIT);
    printf("CLOCKS_PER_SEC = %d\n", CLOCKS_PER_SEC);
    return 0;
}