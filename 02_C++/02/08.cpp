/*
分类ASCII码 p20
20210919

熟悉一些库函数的应用。写一个程序打印：
（1）所有小写字母
（2）所有字母
（3）所有字母和数字
（4）所有系统中C++标识符中出现的字符
（5）所有标点符号
（6）所有可打印字符
*/
#include <iostream>
#include <limits.h>         // CHAR_MAX
#include <ctype.h>
using namespace std;

void printLower();          // （1）所有小写字母
void printAlpha();          // （2）所有字母
void printNumAlpha();       // （3）所有字母和数字
void printIdentifier();     // （4）所有系统中C++标识符中出现的字符
void printPunctuation();    // （5）所有标点符号
void printAll();            // （6）所有可打印字符

int main(int argc, char const *argv[]) {
    printLower();
    printAlpha();
    printNumAlpha();
    printIdentifier();
    printPunctuation();
    printAll();
    return 0;
}

// （1）所有小写字母
void printLower() {
    cout << "（1）所有小写字母" << endl;
    for (int i = 0; i <= CHAR_MAX; i++) {
        if (islower(i)) cout << char(i);
    }
    cout << endl;
}       

// （2）所有字母
void printAlpha() {
    cout << "（2）所有字母" << endl;
    for (int i = 0; i <= CHAR_MAX; i++) {
        if (isalpha(i)) cout << char(i);
    }
    cout << endl;
}

// （3）所有字母和数字
void printNumAlpha() {
    cout << "（3）所有字母和数字" << endl;
    for (int i = 0; i <= CHAR_MAX; i++) {
        if (isalnum(i)) cout << char(i);
    } 
    cout << endl;
}

// （4）所有系统中C++标识符中出现的字符
void printIdentifier() {
    cout << "（4）所有系统中C++标识符中出现的字符" << endl;
    for (int i = 0; i <= CHAR_MAX; i++) {
        if (isalnum(i) || (i == '_')) cout << char(i);
    }
    cout << endl;
}

// （5）所有标点符号
void printPunctuation() {
    cout << "（5）所有标点符号" << endl;
    for (int i = 0; i <= CHAR_MAX; i++) {
        if (ispunct(i)) cout << char(i);
    }
    cout << endl;
}

// （6）所有可打印字符
void printAll() {
    cout << "（6）所有可打印字符" << endl;
    for (int i = 0; i <= CHAR_MAX; i++) {
        if (isprint(i)) cout << char(i);
    }
    cout << endl;
}  
