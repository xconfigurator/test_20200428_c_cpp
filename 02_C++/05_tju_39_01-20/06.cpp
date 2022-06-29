/**
 * @file 06.cpp 字符升序排列
 * @author your name (you@domain.com)
 * @brief 将已按升序排列好的字符串a和b按升序归并到字符串c中并输出。
 * @version 0.1
 * @date 2022-06-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    char a[100], b[100], c[100];
    int i = 0, j = 0, k = 0;
    cout << "Please intput string a and b:" << endl;
    cin >> a >> b;

    while (a[i] && b[j]) {
        if(a[i] < b[i]) { 
            c[k] = a[i]; 
            ++i;
        } else {
            c[k] = b[j];
            ++j; 
        }
        ++k;
    }
    if (a[i]) {
        while (a[i]) {
            c[k++] = a[i++];
        }
    } else {
        while (b[j]) {
            c[k++] = b[j++];
        }
    }
    c[k] = '\0';
    cout << c << endl;
    return 0;
}