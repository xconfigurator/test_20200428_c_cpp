/**
 * @file 094.cpp 串
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

int instr(char *substr, char *str);

int main(int argc, char const *argv[]) {
    char s1[] = "xyzaba123xyz456xy", s2[] = "xyz";
    cout << instr(s2, s1) << endl;
    return 0;
}

int instr(char *substr, char *str) {
    char *sub, *s;
    int n = 0;
    
    while (*str != '\0') {
        for (s = str, sub = substr; *s && *sub; s++, sub++) {
            if (*sub != *s) break;
        }
        if (!*sub) n++;
        str++;
    }
    return n;
}

// 串