/*
方程求解 p84

f(x) = x * x * x + 5 * x * x + 10 * x - 80 = 0

要求精确到小数点后9位

输出样例：
5.705085930

说明：
并不是任何方程都能够用二分法求根。在求之前需要使用导数工具以及零点定理判断一下。
https://www.bilibili.com/video/BV1Zb411q7iY?p=16 6分钟左右开始讲代码
视频讲解的代码更符合数学描述的那种方法。课本给出的效率更高。
*/
#include <cstdio>
#include <cmath>
using namespace std;

double BinarySearch(double left, double right) {
    double mid;
    double f; // 函数值
    while (right - left > 1e-11) {
        mid = left + (right - left) / 2;
        f = mid * mid * mid - 5 * mid * mid + 10 * mid - 80; // 计算函数值
        if (f > 0) {
            right = mid; // 与数组中的二分查找略有不同 不需要“修正”mid的位置，这是因为处理的是连续函数问题。
        } else {
            left = mid; // 与数组中的二分查找略有不同
        }
    }
    return mid;
}

int main(int argc, char const *argv[]) {
    printf("%.9f\n", BinarySearch(0.0, 10.0));
    return 0;
}