/*
单词词频统计
参考：程序设计与算法一 郭炜 STL初步 pdf
@author: liuyang
@since: 2018/1/1
编译环境：Visual Studio Community 2017

2020/12/15 VSCode + Mingw64环境也OK
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <map>
using namespace std;

struct Student {
	string name;
	int score;
};

Student students[5] = {
	{"Jack", 89}, {"Tom", 74}, {"Cindy", 87}, {"Alysa", 87}, {"Micheal", 98}
};
typedef map<string, int> MP;

int main() {
	MP mp;
	for (int i = 0; i < 5; ++i) {
		mp.insert(make_pair(students[i].name, students[i].score));
	}
	cout << mp["Jack"] << endl;					// 输出89
	mp["Jack"] = 60;							// 修改名为“Jack”的元素second
	for (MP::iterator i = mp.begin(); i != mp.end(); ++i) {
		cout << "(" << i->first << "," << i->second << ")";
	}
	cout << endl;

	Student st;
	st.name = "Jack";							// Jack已经存在，试试Jack1
	st.score = 99;
	pair<MP::iterator, bool> p = mp.insert(make_pair(st.name, st.score));
	if (p.second) {								// 如果插入成功则p.first指向刚刚成功插入的元素
		cout << "(" << p.first->first << "," << p.first->second << ") inserted" << endl;
	} else {
		cout << "insertion failed" << endl;		// 输出此信息
	}
	mp["Harry"] = 78;							// 插入一个元素，其first为“Harry”，然后将其second改为78
	MP::iterator q = mp.find("Harry");
	cout << "(" << q->first << "," << q->second << ")" << endl;

	return 0;
}