/*
ref：天勤机考准备 05 字符串输入输出
时间：00:35

gets_s
scanf
scanf是以空格作为当前串的输入结束标记

e.g.
char s[maxSize];
gets_s(s);
puts(s);

// gets_s版本
输入样例：abc d
输出样例：
0:97
1:98
2:99
3:32
4:100
5:0
6:-2
貌似gets_s和gets还是有区别的。实测gets_s是不接受回车的。

// scanf版本
输入样例：abc d
输出样例：
0:97
1:98
2:99
3:0
4:0
5:0
6:0
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
	char s[10];
	for (int i = 0; i <= 9; ++i) {
		s[i] = '\0';
	}
	//gets_s(s);// 空格也会包括进来。
	scanf("%s", s);// 只接收空格之前的。
	for (int i = 0; i <= 6; ++i) {
		cout << i << ":" << (int)s[i] << endl;
	}
	return 0;
}