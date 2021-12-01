/*
ref：天勤机考准备 05 字符串输入输出
时间：开始 - 00:35

e.g.
char s[maxSize];
gets_s(s);
puts(s);
*/
#include <iostream>
using namespace std;

const int maxSize = 10000;

int main(int argc, char const *argv[]) {
	char s[maxSize];
	//gets(s);
	gets_s(s);
	puts(s);
	cout << s;
	return 0;
}
