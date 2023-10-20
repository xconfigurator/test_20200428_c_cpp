/**
 * @file 02.10.cpp
 * @author your name (you@domain.com)
 * @brief 分析程序运行结果
 * @version 0.1
 * @date 2023-10-20
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;

char input[] = "SSSWILTECH1\1\11W\1WALLMP1";// 1 字符，\1数字

int main() {
    int i;
    char c;
    for (i = 2; (c = input[i]) != '\0'; i++) {
        switch(c) {
            case 'a':
                cout << 'i';
                continue;
            case '1':
                break;
            case 1:
                while((c = input[++i]) != '\1' && c != '\0');
            case 9:
                cout << 'S';
            case 'E':
            case 'L':
                continue;
            default:
                cout << c;
                continue;    
        }
        cout << ' ';    
    }
    cout << endl;
    return 0;
}