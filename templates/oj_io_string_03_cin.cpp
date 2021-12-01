/*
ref：天勤机考准备 05 字符串输入输出
时间：3:01

cin
注：cin与scanf类似，也是以空格、制表符、回车符作为当前串的输入结束标记

输入样例：hello world
输出样例：
0:104
1:101
2:108
3:108
4:111
5:0
6:0
7:0
8:0
9:0
10:0
11:0
12:0
13:0
14:0
15:0
16:0
17:0
18:0
19:0
20:0
*/
#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

int main(int argc, char const* argv[]) {
	char s[MAX_SIZE];
	for (int i = 0; i < MAX_SIZE; ++i) {
		s[i] = '\0';
	}
	cin >> s;
	for (int i = 0; i <= 20; ++i) {
		cout << i << ":" << (int)s[i] << endl;
	}
	return 0;
}