/**
 * @file 28.cpp Text Reverse
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*
Problem Description:
    Ignatius likes to write words in reverse way. Given a single line of text which is written by Ignatius, you should reverse all the words and then output them.
Input:
    The input contains several test cases. The first line of the input is a single integer T which is the number of test cases. T test cases follow.
    Each test case contains a single line with several words. There will be at most 1000 characters in a line.
Output:
    For each test case, you should output the text which is processed.

Sample Input:
3
olleh !dlrow
m'I morf .udh
I ekil .mca

Sample Output:
hello world!
I'm from hdu.
I like acm.
*/
#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[]) {
    int n, i, j = 0;
    cin >> n;
    getchar();
    while (n--) {
        j = 0;
        char s[1005];
        //scanf("%s", s);
        gets(s);// g++环境 虽然VSCode会报错，但运行没问题。
        for (i = 0; i <= strlen(s); i++) {
            if (s[i] == '\0' || s[i] == ' ') {
                for (int k = i - 1; k > j; k--, j++) {
                    char ch = s[k];
                    s[k] = s[j];
                    s[j] = ch;
                }
                j = i + 1;
            }
        }
        puts(s);
    }
    return 0;
}