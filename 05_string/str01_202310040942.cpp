/**
 * @file str01_202310040942.cpp
 * @author your name (you@domain.com)
 * 来自翁恺
 * http://www.icourse163.org/learn/zju-1001614008?tid=1001692006#/learn/content?type=detail&id=1002166169&cid=1002280690
 * 
 * @brief 
 * @version 0.1
 * @date 2023-10-04
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>

int main() {
    // 没有注意过的写法：
    printf("这是第一行"
            "这是代码中该字符串的第二行。注意中间可没有+\n");

    // 这样用+是不对的
    // printf("这是第一行" + 
    //         "这是代码中该字符串的第二行。注意中间可没有+\n");
    
    // 使用换行符写法1：
    printf("这是第一行\
    这是代码中该字符串的的第二行。使用乐换行符。\n");

    // 使用换行符写法2：
    printf("这是第一行\
这是代码中该字符串的的第二行。使用乐换行符。\n");

    return 0;
}