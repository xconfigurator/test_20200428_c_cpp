/*
求勾股数 p32 （枚举）
20210919

打印100以内所有的勾股数
*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    int counter = 1;
    for (int z = 5; z <= 100; z++) {
        for (int y = 4; y < z; y++) {
            for (int x = 3; x < y; x++) {// x小于y，x不等于y
                if (x * x + y * y == z * z) {
                    cout << counter ++ << ":"
                         << x << ","
                         << y << ","
                         << z << endl;
                }
            }
        }
    }
    return 0;
}