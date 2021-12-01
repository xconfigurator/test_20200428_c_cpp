/*
ref：天勤机考准备 04 字符输入输出
需求：输入一个数字n, 接下来输入n组数据，每组两个字符，每输入一组数据则输出这组数据，每组输出占一行。
时间：11:00 - 17:51

注意：观察如果不使用getchar会如何
根因：scanf会把回车、换行、制表符等当成普通字符处理。与getchar行为意向
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
	int n;
	char a, b;
	scanf("%d", &n);
	getchar();// 可以把getchar注释掉之后再看一下输出。
	while (n > 0) {
		scanf("%c%c", &a, &b);
		getchar();// 可以把getchar注释掉之后再看一下输出。
		printf("%c%c\n", a, b);
		--n;
	}
	return 0;
}