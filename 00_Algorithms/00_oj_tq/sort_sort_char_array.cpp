/*
sort 排字符数组 必须提供cmp 邹泽sort不知道如何排序
https://www.bilibili.com/video/BV1Ty4y1n7JH?p=7&spm_id_from=pageDriver
*/
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

bool cmp (const char* s1, const char *s2) {
    int a = strcmp(s1, s2);
    // 升序
    if (a < 0) {
        return true;
    } else {
        return false;
    }
}

int main () {
    char *word[] = {
        "welcome",
        "to",
        "the",
        "new",
        "world"
    };
    sort(word, word + 5, cmp);
    for (int i = 0; i < 5; ++i) {
        cout << word[i] << " ";
    }
    cout << endl;
    return 0;
}