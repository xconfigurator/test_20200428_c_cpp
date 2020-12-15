/*
演示折半查找
@author: liuyang
@since: 2017/9/5
参考：《新标准C++程序设计教程》 郭炜编著 P144
使用STL改写。
编译环境：Visual Studio Community 2017

2020/12/15 VSCode + Mingw64环境也OK
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

/*
二分查找
使用vector后其实不需要传入size，为了与数组兼容，故保留。
*/
int binarySearch(vector<int> a, int size, int p) {
	int l = 0;
	int r = size - 1;
	int mid = 0;
	int idx = -1;
	while (l <= r) {//注意：是<=
		mid = (l + r) / 2;// 核心！
		if (a[mid] == p) {
			idx = mid;
			break;
		}
		else if (p > a[mid]) {
			l = mid + 1;//注意：不可以更新为mid
		}
		else {
			r = mid - 1;//注意：不可以更新为mid
		}
	}
	return idx;
}

int main() {
	// 1. 从文件读入数据
	int n = 0, position = -1, aim = 4; // aim时待查找值
	freopen("F:/temp/test.txt", "r", stdin);//VS2017 Community会提示stdin未定义，但仍然可以编译通过
	vector<int> vec;
	while (cin >> n) {
		vec.push_back(n);
	}

	// 2. 二分查找(查找前必须排序)
	sort(vec.begin(), vec.end());// 注意排序！！！ STL
	position = binarySearch(vec, vec.size(), aim);
    //position = binary_search(vec.begin(), vec.end(), aim);//STL

    // 3. 输出结果
	cout << "#数据列表内容: ";
	for (int i = 0; i < vec.size(); ++i) {
		cout << vec[i] << "\t";
	}
	cout << endl;
	cout << "#待查找元素" << aim << "的位置时：" << position << endl;

	return 0;
}