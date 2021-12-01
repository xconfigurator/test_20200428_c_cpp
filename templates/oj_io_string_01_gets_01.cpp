/*
ref：天勤机考准备 05 字符串输入输出
时间：开始 - 00:35

e.g.
char s[maxSize];
gets_s(s);
puts(s);

使用场景：
cin不好与scanf一起使用，那么在使用了scanf的情况下又想读入一行，那么就用gets。

*/
#include <iostream>
#include <stdio.h>  // 貌似不加也可以，但vscode标红
using namespace std;

const int maxSize = 10000;

int main(int argc, char const *argv[]) {
	char s[maxSize];
	//gets(s);// vscode 标红，但mingw可以编译通过。
	gets_s(s);// 微软才有这个, 只能在Visual Studio中编译运行。
	puts(s);
	cout << s;
	return 0;
}
