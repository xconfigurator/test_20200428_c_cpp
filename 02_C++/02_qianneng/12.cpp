/*
求4位数 P31
20210919

求所有满足条件的四位数ABCD，它是11的倍数，且第3位数加上第2位数等于第4位数（即A = B + C）。 
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[]) {
    int A, B, C, n = 1, numOfLine = -1;
    for (int i = 1000; i < 10000; i++) {// 枚举范围
        // 求四位数中的高3位A、B、C
        A = i / 1000;
        B = (i % 1000 - i % 100) / 100;
        C = (i % 100 - i % 10) / 10;

        // 满足打印的条件
        if ((i % 11 == 0) && (A == B + C)) {
            if (++ numOfLine % 7 == 0) {
                cout << endl;
            }
            cout << "  " << setw(2) << n++ << ": " << i;
        }
    }
    return 0;
}