/*
括号匹配
@since 2016/12/16
@update 2021/11/19 改用stl实现
http://www.imooc.com/learn/611

题目：
字符串示例：[()]    [()()]    [()[()]]    [[()]	[()]]

解法：


注意点：
。

输入示例：


输出示例：

*/
#include <iostream>
#include <stack>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[]) {
	//MyStack<char>* pStack = new MyStack<char>(100);// 
	stack<char>* pStack = new stack<char>();
    //MyStack<char>* pNeedStack = new MyStack<char>(100);// 急需的字符
    stack<char>* pNeedStack = new stack<char>();

	// 待测数据
	//char str[] = "[()]";
	//char str[] = "[()()]";
	//char str[] = "[()[()]]";
	//char str[] = "[[()]";
	char str[] = "[()]]";

	// 当前需要的字符，储值给一个不可见字符的ASCII值。
	char currentNeed = 0;

	// 扫描str
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] != currentNeed) {
			// 读到的不是急需的
			pStack->push(str[i]);
			switch (str[i]) {
			case '[':
				if (currentNeed != 0) {
					pNeedStack->push(currentNeed);
				}
				currentNeed = ']';
				break;
			case '(':
				if (currentNeed != 0) {
					pNeedStack->push(currentNeed);
				}
				currentNeed = ')';
				break;
			}
		} else {
			// 读到的就是需要的
            pStack->pop();
			if (!pNeedStack->empty()) {
				currentNeed = pNeedStack->top();
				pNeedStack->pop();
			} else {
				currentNeed = 0;
			}
		}
	}

    if (pStack->empty()) {
		cout << "字符串括号匹配" << endl;
	} else {
		cout << "字符串括号不匹配" << endl;
	}

	delete pStack;
	pStack = NULL;
	delete pNeedStack;
	pNeedStack = NULL;
    
	return 0;
}