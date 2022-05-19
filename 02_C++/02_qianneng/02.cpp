/**
 * 格式化显示对数的值 P4
 * 编写一个程序，打印90~100之间的自然对数与以10位底的对数。
 * 对表进行格式化，使得数字可以在域宽为10的范围内，用5个十进制位置精度进行右对齐。
 */
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    cout.precision(5);// 5位有效位，非小数点后位数
    cout << "       x       logx        lnx" << endl << endl;
    for (int x = 90; x < 100; x++) {
        cout.width(10);
        cout << x;
        cout.width(10);
        cout << log10(x);
        cout.width(10);
        cout << log(x) << endl;
    } 
    return 0;
}