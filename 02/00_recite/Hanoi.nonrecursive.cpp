/*
汉诺塔 - 递归版本， 使用STL
@author: liuyang
@since: 2017/11/27
编译环境：Visual Studio Community 2017

2020/12/15 VSCode + Mingw64环境也OK
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stack>
using namespace std;
#define PLATE_NUM 4			// 盘子个数 
static int counter = 0;		// 步数计数器

struct Problem {
	int n;					// 问题规模
	char src;				 
	char mid;				
	char dest;
};

/*
说明：
每个问题都可以分解成三个子问题
Hanoi(n-1, src, dest, mid);
Hanoi(1, src, mid, dest);
Hanoi(n-1, mid, src, dest)；
*/


// 非递归版本
// 将src座上的n个盘子，以mid座为中转，移动到dest座
void Hanoi(int n, char src, char mid, char dest) {
	// 问题栈
	stack<Problem> *s = new stack<Problem>();

	// 初始化
	Problem prob1;
	prob1.n = n;
	prob1.src = src;
	prob1.mid = mid;
	prob1.dest = dest;
	s->push(prob1);

	// 用栈解题
	Problem probCurrent;
	while (!s->empty()) {// 问题栈不空
		probCurrent = s->top();
		s->pop();

		if (probCurrent.n == 1) {
			cout << probCurrent.src << "->" << probCurrent.dest << endl;
			counter++;
			continue;// 注意！！
		}

		// 1. 将分解的第3个子问题入栈
		Problem p3;
		p3.n = probCurrent.n - 1;
		p3.src = probCurrent.mid;
		p3.mid = probCurrent.src;
		p3.dest = probCurrent.dest;
		s->push(p3);

		// 2. 将分解的第2个子问题入栈
		Problem p2;
		p2.n = 1;
		p2.src = probCurrent.src;
		p2.mid = probCurrent.mid;
		p2.dest = probCurrent.dest;
		s->push(p2);

		// 3. 将分解的第1个子问题入栈
		Problem p1;
		p1.n = probCurrent.n - 1;
		p1.src = probCurrent.src;
		p1.mid = probCurrent.dest;
		p1.dest = probCurrent.mid;
		s->push(p1);
	}

	delete s;
	s = NULL;
}


int main() {

	int n = PLATE_NUM;
	
	// 非递归版本
	counter = 0; 
	cout << "#非递归版本"<< endl;
	Hanoi(n, 'A', 'B', 'C');
	cout << "问题规模为" << n << "时， 一共需要移动" << counter << "步。" << endl;

	return 0;
}