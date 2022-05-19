/*
非递归版本  P35
20210919

*/
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[]) {
    cout << "从2月份开始每月生产量为:" << endl;
    int a = 2;  // 1月份的生产量
    for (int i = 2; i <= 12; i++) {
        a = 2 * a - 1;
        cout << setw(2) << i << "月生产：" << setw(5) << a << endl;
    }
    return 0;
}