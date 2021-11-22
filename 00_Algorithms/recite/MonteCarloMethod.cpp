/*
蒙特卡洛法算PI
@since 2018/4/11
@Author 吴文虎
@整理	刘洋
编译环境：Visual Studio 2017 Community

2020/12/15 VSCode + Mingw64环境也OK
*/
#include <iostream>
#include <cstdlib>			// 随机数
#include <ctime>			// 时钟
#include <cmath>			// 数学函数
using namespace std;

const int NUMS = 10000000;	// 实验轮数
const int BASE = 32767;		

int main() {

	long c = 0, d = 0;
	float pi = 0, x = 0, y = 0;
	srand((unsigned int) time(NULL));	// 设置种子

	for (int k = 0; k < NUMS; ++k) {
		++d;							// 雨点落入D区域
		x = (float)rand() / BASE;		// 控制x在[0,1]
		y = (float)rand() / BASE;		// 控制y在[0,1]
		if (sqrt(x * x + y * y) <= 1) {
			++c;						// 雨点落入C区域
		}
	}

	pi = 4.0f * c / d;
	cout << "PI = " << pi << endl;

	return 0;
}