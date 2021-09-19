/*
求骑车产量 P34
20210919

注意：重点是写出地推关系式，然后写出递归函数。

某工厂生产汽车，
1月份生产2辆；
2月份是1月份产量减去半辆，再翻一翻；
3月份是2月份产量减去半辆，再翻一翻；如此下去。
从2月份开始每月生产多少辆骑车？
年底时共生产了多少辆汽车？
*/
#include <iostream>
#include <iomanip>
using namespace std;

long product(int n) {
    if (n == 1) {// 1月份生产2辆
        return 2;
    }
    return 2 * product(n-1) - 1;
}

int main(int argc, char const *argv[]) {
    cout << "从2月份开始每月生产量为:" << endl;
    int a = 2;  // 1月份的生产量
    for (int i = 2; i <= 12; i++) {
        cout << setw(2) << i << "月生产：" << setw(5) << product(i) << endl;
    }
    return 0;
}