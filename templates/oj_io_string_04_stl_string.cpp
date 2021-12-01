/*
ref：天勤机考准备 05 字符串输入输出
时间：3:28

使用string

注：这才是我想要的！！！！

小结：
数组：
	输入：gets，scanf，cin
	输出：puts，printf，cout
string：
	输入：getline(cin, s)
	输出：cout << s
*/
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const* argv[]) {
	string s;
	getline(cin, s);// 需要#include <string> 
	for (int i = 0; i < s.length(); ++i) {// s.size()也可以
		cout << i << ":" << (int)s[i] << endl;
	}

	// Java
	/*
	BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    String s = br.readLine();
	*/
	return 0;
}
