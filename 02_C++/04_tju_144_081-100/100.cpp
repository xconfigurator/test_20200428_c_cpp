/**
 * @file 100.cpp 极简栈
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

void input(char *s, int &i, char c) {
    s[i++] = c;
}

char output(char *s, int &i) {
    return s[--i];
}

int main(int argc, char const *argv[]) {
    char s[100] = "@", *s1 = "\nStar Wars:R2D2D&C3PO!", *ps = s1;
    int cnt = 1;

    while (*ps++) {
        if (*ps >= 'A' && *ps <= 'Z') {
            input(s, cnt, *ps);
        }
    }

    while (cnt) {
        cout << output(s, cnt);
    }
    cout << endl;
    
    return 0;
}

// 100 背 极简栈