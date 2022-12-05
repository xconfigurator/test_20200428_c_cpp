/*
ref：天勤机考准备 04 字符输入输出
需求：输入一个数字n, 接下来输入n组数据，每组两个字符，每输入一组数据则输出这组数据，每组输出占一行。
时间：11:00 - 17:51 这段视频分析可以多听听

注意：观察如果不使用getchar会如何
根因：scanf会把回车、换行、制表符等当成普通字符处理。这getchar行为一样。

输入：
2
ab
cd

测试：
2
1 2
3 4
会怎样？
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
	int n;
	char a, b;
	scanf("%d", &n);
	getchar();// 可以把getchar注释掉之后再看一下输出。getchar()的作用就是吞掉最后的回车。
	while (n > 0) {
		scanf("%c%c", &a, &b);
		getchar();// 可以把getchar注释掉之后再看一下输出。getchar()的作用就是吞掉最后的回车。
		printf("%c%c\n", a, b);
		--n;
	}
	return 0;
}