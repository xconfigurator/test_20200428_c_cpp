/**
 * @file 09.cpp 列出完数
 * @author your name (you@domain.com)
 * @brief 所谓“完数”是指一个数恰好等于它的所有不同因子之和。
 *        例如， 6是完数，因为 6 = 1 + 2 + 3;
 *              24不是完数，因为 24 != 1 + 2 + 3 + 4 + 6 + 8 + 12; 
 * @version 0.1
 * @date 2022-06-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*
输入描述：  输入数据含有一些整数 n(1 < n < 10000)。
输出描述：  对于每个整数n, 输出所有不大于n的完数。每个整数n的输出由n引导，跟上冒号，然后是由空格开道的一个个完数，每个n的完数列表应占独立的一行。
输入样例：
100
1000
输出样例：
100: 6 28
1000: 6 28 496
*/
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[]) {
    vector<int> v;
    for (int i = 2; i < 10000; i += 2) {
        int sum = 1;
        for (int j = 2; j * 2 <= i; ++j) {// j 是可选因子
            if (i % j ==0) {// j 是因子
                sum += j;
            }
        }
        if (sum == i) {
            v.push_back(i);
        }
    }
    int n;
    while (cin >> n) {
        cout << n << ":";
        for (int k = 0; k < v.size(); ++k) {
            if (v[k] <= n) cout << " " << v[k];
        }
        cout << endl;
    }
    return 0;
}
// 202206291001 运行通过