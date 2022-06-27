/**
 * @file 083.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    char s[20] = "AAAAAABCCCC";// 尝试："AAAAAABCCCCB"
    int i, j, c;
    for (i = 0; s[i]; i++) {
        c = 1;
        for (j = i + 1; s[j]; j++) {
            if (s[i] != s[j]) {
                break;
            } else {
                c += 1;
            }
        }

        cout << c << s[i];
        i += j - i - 1;
    }
    cout << endl;
    return 0;
}

// 083 背 字符串中出现的字符及其各自（连续）出现的次数。