/*
ref：天勤机考准备 05 字符串输入输出
时间：3:28

使用string

注：这才是我想要的！！！！

小结：
字符数组：
	输入：gets，scanf，cin, cin.getline(char buf[], int bufSize)
	输出：puts，printf，cout
string：
	输入：getline(cin, s)
	输出：cout << s
*/
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const* argv[]) {
	// 读一行
    string s;
	getline(cin, s);// 需要#include <string> 读入一整行，可以包含空格。
    cout << s << endl;
	for (int i = 0; i < s.length(); ++i) {// s.size()也可以
		cout << i << ":" << (int)s[i] << endl;
	}

    /*
    // 读一行
    cout << "读一行：";
    char s[MAX_SIZE];
    for (int i = 0; i < MAX_SIZE; ++i) {
		s[i] = '\0';
	}
    cin.getline(s, MAX_SIZE - 1);// 读入一行，且不会越界。
    cout << s << endl;
    for (int i = 0; i <= PRINT_SIZE; ++i) {
		cout << i << ":" << (int)s[i] << endl;
	}
    */

    /*
    // 读两个string
    string s1, s2;
    cin >> s1 >> s2;
    cout << s1 << "," << s2; 
     */

	// Java
	/*
    // 读一行
	BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    String s = br.readLine();

    // 读两个String
    Scanner cin = new Scanner(System.in);
    String s1 = cin.next();
    String s2 = cin.next();
	*/
	return 0;
}
