/*
求支付方法的种数 P34 （筛法 列方程解应用题）
20210919

取1元，2元，5元纸币10张，付给18元，有几种付法。
*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    int n = 1;
    for (int x = 0; x <= 10; x++) {
        for (int y = 0; y <= 9; y++) {
            if ((x + 2 * y + 5 * (10 - x - y)) == 18) {
                cout << n++ << ": 1元" << x << "张，"
                            << " 2元" << y << "张,"
                            << " 5元" << 10 - x - y << "张。" << endl;
            }
        }
    }
    return 0;
}