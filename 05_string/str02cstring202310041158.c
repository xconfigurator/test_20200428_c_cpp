/**
 * @file str02cstring202310041158.cpp
 * @author 翁恺 
 * @brief 
 * http://www.icourse163.org/learn/zju-1001614008?tid=1001692006#/learn/content?type=detail&id=1002166170&cid=1002280698&replay=true
 * 
 * @version 0.1
 * @date 2023-10-04
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>
#include <stdlib.h>// malloc
#include <assert.h>
#include <string.h>

int mylen(const char* s);
int mycmp(const char* s1, const char* s2);
int mycmpArrImpl(const char* s1, const char* s2);
char* mycpy(char* dst, const char* src);

int main(int argc, char const *argv[]) {

    // strlen
    char lineLen[] = "Hello";
    printf("# ############################\n # strlen\n");
    printf("strlen=%lu\n", strlen(lineLen));// 5
    printf("sizeof=%lu\n", sizeof(lineLen));// 6
    printf("mylen =%lu\n", mylen(lineLen));
   
    // strcmp
    char sCmp1[] = "abc";
    char sCmp2[] = "abc";
    printf("# ############################\n # strcmp \n");
    printf("%d\n", strcmp(sCmp1, sCmp2));
    printf("%d\n", strcmp("abc", "bbc"));
    printf("%d\n", strcmp("abc", "aaa"));
    printf("%d\n", strcmp("abc", "Abc"));// 翁恺用的编译器返回的是差值 'a' - 'A'， 我本地的编译器g++ 8.1.0返回的就是1，与符号函数行为类似。
    printf("a - A = %d\n", 'a' - 'A');
    printf("mycmp = %d\n", mycmp(sCmp1, sCmp2));
    printf("mycmpArrImpl = %d\n", mycmpArrImpl("abc", "bbc"));
    printf("mycmpArrImpl = %d\n", mycmpArrImpl("abc", "aaa"));
    printf("mycmpArrImpl = %d\n", mycmpArrImpl("abc", "Abc"));

    // strcpy
    // 复制一个字符串
    char* src = "hello, world src";
    char* dst = (char*) malloc(strlen(src) + 1);
    strcpy(dst, src);
    printf("# ############################\n # strcpy \n");
    printf("%s\n", dst);
    char* dst2 = (char*) malloc(strlen(src) + 1);
    mycpy(dst2, src);
    printf("%s\n", dst2);

    // strcat
    char dest[100] = "hello";
    strcat(dest, ", world strcat");
    printf("# ############################\n # strcat \n");
    printf("%s\n", dest);

    // 安全版本
    // strncmp (并不是处于安全考虑 只是处于需求)
    // strncpy
    // strncat

    // 查找：
    // strchr
    // strstr (实现详见str03strstr.cpp)
    // 问题，套路，寻找第二个？ 答：利用函数返回值
    printf("# ############################\n # strchr \n");
    char* searchAim = "ieopureiowqjfiks;dhavnoln,aeafsafefalzx/jfieowqmrfikdlsanklx;zxuioemnr";
    char* p = strchr(searchAim, 'l');// 
    printf("第一次出现的位置：%s\n", p);
    // 观察上面函数运行结果可知，查找第二个的套路是：
    char* p2 = strchr(strchr(searchAim, 'l') + 1, 'l');
    printf("第二次出现的位置：%s\n", p2);
    // 翁恺的“小技巧”
    // http://www.icourse163.org/learn/zju-1001614008?tid=1001692006#/learn/content?type=detail&id=1002166170&cid=1002280703&replay=true


    // 关于大小写不敏感的
    //printf("strcasestr演示：%s\n", strcasestr("aaabbbcccddd", "BB"));// error: 'strcasestr' was not declared in this scope
    //printf("stristr演示：%s\n", stristr("aaabbbcccddd", "BB"));// error: 'stristr' was not declared in this scope
    // 处理：那就比较之前都换成小写
    
    return 0;
}

int mylen(const char* s) {
    assert(s != NULL);
    int idx = 0;
    while(s[idx] != '\0') {
        ++idx;
    }
    return idx;
}

// 指针版本
// Segment fault 202310041312
// mycmp("abc", "abc")
int mycmp(const char* s1, const char* s2) {
    while ((*s1++ == *s2++) != '\0') {
        NULL;
    }
    return *s1 - *s2;
}

// 数组版本
// mycmpArrImpl("abc", "abc")
int mycmpArrImpl(const char* s1, const char* s2) {
    // 数组版本
    int idx = 0;
    while (s1[idx] == s2[idx] && s1[idx] != '\0' && s2[idx] != '\0') {
        ++idx;
    }
    return s1[idx] - s2[idx];
}


char* mycpy(char* dst, const char* src) {
    assert((dst != NULL) && (src != NULL));
    char* address = dst;
    while((*dst++ = *src++) != '\0') {
        NULL;
    }
    // 20231001638 看着没问题，运行好像也没问题，不过dst最后那个\0是哪句话复制上去的？
    return address;
}