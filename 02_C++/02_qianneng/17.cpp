/*
求和为1000的连续整数 P36 （枚举）
20210919

连续若干个整数之和为1000，写出此连续的整数。

注意：本题目要求有“连续”，所以筛法适用。
*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    for (int i = 1; i <= 1000; i++) {
        int j = i, sum = i; // 每次求和的起始值

        while (sum < 1000) {
            sum += ++j;
        }

        if (sum == 1000) { // 满足题中条件
            for (int k = i; k <= j; k++) {
                cout << k << ",";
            }
            cout << endl;
        }
    }
    return 0;
}