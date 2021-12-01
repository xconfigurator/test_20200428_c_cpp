/*
ref：天勤机考准备 05 字符串输入输出
时间：3:01

cin
注：cin与scanf类似，也是以空格、制表符、回车符作为当前串的输入结束标记

小结1：
读字符: scanf, cin 
读一行: gets，cin.getline(char buf[], int bufSize), getline(cin, [string类]);

小结2：（关于数组越界）
读字符: scanf, cin
读一行: gets
都可能会造成字符串数组越界！
实践对策:1. 可以把字符串数组开的足够大。2. 或者使用scanf_s, gets_s等安全版本。3. 使用string（不使用动态数组）。
注：读一行可以用cin.getline(prisonName, 99);

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
const int PRINT_SIZE = 20;

int main(int argc, char const* argv[]) {
	// 读字符（可能越界）
    char s[MAX_SIZE];
	for (int i = 0; i < MAX_SIZE; ++i) {
		s[i] = '\0';
	}
	cin >> s;
	for (int i = 0; i <= PRINT_SIZE; ++i) {
		cout << i << ":" << (int)s[i] << endl;
	}
	return 0;
}