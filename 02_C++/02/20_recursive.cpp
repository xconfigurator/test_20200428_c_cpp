/*
递归与非递归函数 P40
2021/9/18

某核反应堆有两件事发生：
高能质点碰击核子时，质点被吸收，放出3个高能质点和1个低能质点；
低能质点碰击核子时，质点被吸收，放出2个高能指点和1个低能质点。
假定开始的时候只有一个高能质点射入核反应堆，每一微秒引起一个事件发生，试确定n微秒时高能质点和低能质点的数目。

递推公式：
a(n) = 3a(n-1) + 2b(n-1)
b(n) = a(n-1) + b(n-1)

单个n示例输出：
Please intput n: 5
An:571
Bn:209

*/
#include <iostream>
#include <iomanip>      // std::setw
using namespace std;

int An(int n);
int Bn(int n);

int main(int argc, char const *argv[]) {
    int n;
    cout << "Please intput n: ";
    cin >> n;
    if (n < 0) return 0;// 最简单的校验
    // 输出版本1：单个n示例输出
    //cout << "An:" << An(n) << endl;
    //cout << "Bn:" << Bn(n) << endl;
    // 输出版本2：0 - n版本
    for (int i = 0; i <= n; i++) {
        cout << "A" << setw(2) << i << ":" << setw(6) << An(i)
             << "\t"
             << "B" << setw(2) << i << ":" << setw(6) << Bn(i)
             << endl;
    }
    return 0;
}

int An(int n) {
    if (0 == n) {
        return 1;// 假定最开始的时候只有一个高能质点摄入核反应堆
    }
    return 3 * An(n - 1) + 2 * Bn(n - 1); // 尾递归都可以用循环来改写
}

int Bn(int n) {
    if (0 == n) {
        return 0;
    }
    return An(n - 1) + Bn(n - 1); // 尾递归都可以用循环来改写
}


