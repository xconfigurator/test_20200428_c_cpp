/**
 * @file str04strcpy.cpp
 * @author liuyang copy from linrui
 * @brief strcpy 来自林锐的《高质量程序设计指南 C++/C语言》
 * @version 0.1
 * @date 2021-12-01
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
#include <assert.h>
using namespace std;

const int MAX_SIZE = 1000;

char *Strcpy(char *strDest, const char *strSrc) {
    assert((strDest != NULL) && (strSrc != NULL));
    char *address = strDest;
    while ((*strDest++ = *strSrc++) != '\0')
        NULL;
    return address;    
}

int main(int argc, char const *argv[]) {
    char src[] = "hello, cpp";
    char dest[MAX_SIZE];
    Strcpy(dest, src);
    cout << dest << endl;
    return 0;
}