/**
 * @file 035.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-23
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#include <cstring>
using namespace std;

static int n3 = 0;

void function(char s[]) {
    s[n3++] += 2;
}

int main() {
    char str[10] = "abcd";
    cout << str << endl;
    int n1 = 1, n2 = strlen(str);
    cout << n2 << endl;

    while (n1++ <= n2) {
        function(str);
    }

    cout << n1 << endl;
    cout << n3 << endl;
    cout << str << endl;
    return 0;
}

// 注意：n1的值。
// 提示：在while上打个端点跟一下。