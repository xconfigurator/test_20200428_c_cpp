/*
sort 排字符数组 必须提供cmp 否则sort不知道如何排序
https://www.bilibili.com/video/BV1Ty4y1n7JH?p=7&spm_id_from=pageDriver
天勤 见网盘
*/
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

bool cmp (const char* s1, const char *s2) {
    int a = strcmp(s1, s2);
    // 升序
    if (a < 0) {// a > 0 即可变为降序
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
    /*char *word[] = {
        "a", "b", "c", "d", "e"
    };*/
    sort(word, word + 5, cmp);
    for (int i = 0; i < 5; ++i) {
        cout << word[i] << " ";
    }
    cout << endl;
    return 0;
}