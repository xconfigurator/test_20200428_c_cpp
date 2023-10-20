/**
 * @file 02.7.cpp
 * @author your name (you@domain.com)
 * @brief 
 *
 * 输入4个int型数，按其大小顺序输出。
 *
 * @version 0.1
 * @date 2023-10-20
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int a, b, c, d;
    cout << "输入4个整数：";
    cin >> a >> b >> c >> d;
    vector<int> v = {a, b, c, d};
    sort(v.begin(), v.end());
    for (int n : v) {
        cout << n << ' ';
    }
    cout << endl;
    return 0;
}

