/*
ref：天勤机考准备 04 字符输入输出
时间：17:51 - 结束

cin/cout

e.g.
char ch;
cin >> ch;
cout << ch;

注意：cin从键盘缓冲区中取字符的时候只取可打印字符（会过滤掉空格、制表符、回车等）。

输入样例：abc d   e
输出样例：
6:97
7:98
8:99
9:100
10:101
*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
	// 注意！！！ 提高cin和cout处理速度的方法
	ios::sync_with_stdio(false);// 这样可以提高cin和cout的处理速度。

	char ch;
	int i = 1;
	while (true) {
		cin >> ch;
		cout << i++ << ":" << (int)ch << endl;
		if ((int)ch == 10) {// 貌似是不会被执行的
			i = 1;
		}
	}
	
	return 0;
}