/*
八皇后问题(递归解法)
参考《新标准C++程序设计教程》p143 例9.6
@since 2017/12/7
@author liuyang
编译环境：Visual Studio 2017 Community
*/
#include <iostream>
#include <cmath>
using namespace std;

#define N_CONST		8					// 定义问题规模
#define POS_SIZE	1000				// 存放位置数组大小 12皇后运算就已经很慢了

int N = 2;								// 共N个皇后
int queenPos[POS_SIZE];					// 用来存放算好的皇后位置


void NQueen(int n) {					// 摆放第n个皇后，皇后编号从0开始算
	
	if (n == N) {						// N个皇后已经摆好
		for (int i = 0; i < n; ++i) {	// 输出解
			cout << queenPos[i] << " ";
		}
		cout << endl;
		return;
	}

	int j = 0;
	for (int i = 0; i < N; ++i) {		// 逐一尝试第n个皇后的摆放位置（i代表将要摆放的位置）
		// 检测i的合法性
		for (j = 0; j < n; ++j) {		// 和已经放好的n-1个皇后的位置比较看是否有冲突
			if (queenPos[j] == i || abs(queenPos[j] - i) == abs(n - j)) {
				break;					// 冲突，尝试下一个位置
			}
		}
		// 通过了i的合法性检测
		if (j == n) {
			queenPos[n] = i;			// 将第n个皇后摆放在位置i
			NQueen(n + 1);				// 摆放第n + 1 个皇后
		}
	}
}

int main() {

	// 控制台输入版本
	//cin >> N;
	// 预定义宏版本
	N = N_CONST;

	NQueen(0);							// 从第0个皇后开始摆放

	return 0;
}