/*
ref：天勤机考准备 04 字符输入输出
时间：01:36 - 
举例
*/
#include <iostream>
using namespace std;

int main() {
    char ch;
    int i = 1;
    while (ch = getchar()) {// 只要输入不是0就一直继续
        cout << i << ":" << (int) ch << endl;// (int) ch是查看输入的ASCII码。因为有些字符不可打印，但可以输出其ASCII值。
        ++i;
    }
    return 0;
}