/*
ref：天勤机考准备 05 字符串输入输出
时间：2:31
scanf的补充例子
分析：只有空格前的字符被接收
注：scanf是以空格作为当前串的输入结束标记
    或者说scanf是把空格作为多个字符串的定界符

输入样例：
abc de

输出样例：
0:97
1:98
2:99
3:0
4:0
5:0
6:0

0:100
1:101
2:0
3:0
4:0
5:0
6:0
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main(int argc, char const* argv[]) {
	char s1[10], s2[10];
	// 初始化
	for (int i = 0; i <= 9; ++i) {
		s1[i] = '\0';
		s2[i] = '\0';
	}
	scanf("%s%s", s1, s2);
	for (int i = 0; i <= 6; ++i) {// s1
		cout << i << ":" << (int)s1[i] << endl;
	}
	cout << endl;
	for (int i = 0; i <= 6; ++i) {// s2
		cout << i << ":" << (int)s2[i] << endl;
	}
	return 0;
}