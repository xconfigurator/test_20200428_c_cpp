// oj_io_char_01_01.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
/*
ref：天勤机考准备 04 字符输入输出
时间：01:36 - 9:29 举例
说明：getch执行机制：05:51

测试输入：
 abc    d
输出解释：中间那个长空输入的是tab，但是被VSCode补成了空格，所以输出会出现连续四个32。
*/
#include <iostream>
using namespace std;

int main() {
    char ch;
    int i = 1;
    while (ch = getchar()) {// 只要输入不是0就一直继续
        // (int) ch是查看输入的ASCII码。因为有些字符不可打印，但可以输出其ASCII值。
        cout << i << ":" << (int)ch << endl;
        ++i;
    }
    return 0;
}