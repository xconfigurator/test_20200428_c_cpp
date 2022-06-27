/**
 * @file 096.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#include <cstring>
using namespace std;

int fun(char s[]) {
    int i, d = 1;
    
    for (i = 0; i < strlen(s); i++) {
        d = d * (s[i] - '0');
    }

    return d;
}

int main(int argc, char const *argv[]) {
    char t[] = "54321";
    int x;
    x = fun(t);
    cout << "value=" << x << endl;
    return 0;
}
