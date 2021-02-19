/*
@author liuyang
@since 2021/2/19

分类：模拟
说反话 cpp版本
https://pintia.cn/problem-sets/994805260223102976/problems/994805314941992960

输入样例：
Hello World Here I Come

输出样例：
Come I Here World Hello

*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    while (s.length() > 0) {
        int i = s.rfind(' ');
        if (i != string::npos) {
            cout << s.substr(i + 1) << " ";
            string temp = s.substr(0, i);
            s = temp;
        } else {
            cout << s << endl;
            s = "";
        }
    }
    return 0;
}