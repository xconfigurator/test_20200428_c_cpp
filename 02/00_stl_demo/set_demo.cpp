/*
set用法
@author: liuyang
@since: 2017/12/28
编译环境：
Visual Studio Community 2017 failure

2020/12/15 VSCode + Mingw64环境也OK
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <set>
using namespace std;

#define N	11

int main() {

	int a[N] = { 1, 2, 3, 4, 8, 7, 7, 5, 6, 8, 12 };

	set<int> st;
	for (int i = 0; i < sizeof(a) / sizeof(a[0]); ++i) {
		st.insert(a[i]);
	}
	cout << st.size() << endl;				// 输出：9
	set<int>::iterator i;
	for (i = st.begin(); i != st.end(); ++i) {
		cout << *i << "\t";
	}
	cout << endl;

	// 插入元素（set的插入有可能是不成功的，下面演示如何判断）
	pair<set<int>::iterator, bool> result = st.insert(2);
	if (!result.second) {					// 插入不成功
		cout << * result.first << " already exists." << endl;
	}
	else {
		cout << * result.first << " inserted." << endl;
	}

	return 0;
}