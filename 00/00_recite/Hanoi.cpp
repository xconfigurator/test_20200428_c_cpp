/*
汉诺塔 - 递归版本
@author: liuyang
@since: 2017/11/27
编译环境：Visual Studio Community 2017

2020/12/15 VSCode + Mingw64环境也OK
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#define PLATE_NUM 4			// 盘子个数 
static int counter = 0;		// 步数计数器

// 将src座上的n个盘子，以mid座为中转，移动到dest座
void Hanoi(int n, char src, char mid, char dest) {
	if (n == 1) {								// 只需要移动一个盘子
		cout <<src << "-->" << dest << endl;	// 直接将盘子从src移动到dest即可
		counter++;
		return;									// 递归终止
	}
	Hanoi(n - 1, src, dest, mid);
	cout << src << "-->" << dest << endl;       // Hanoi(1, src, mid, dest);
	counter++;
	Hanoi(n - 1, mid, src, dest);
}

int main() {

	int n = PLATE_NUM;
	Hanoi(n, 'A', 'B', 'C');
	cout << "问题规模为" << n << "时， 一共需要移动" << counter << "步。" << endl;
	return 0;
}