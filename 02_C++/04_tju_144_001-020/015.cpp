/**
 * @file 015.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-05-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    int n, sum;
    do {
        cin >> n;
        sum = 0;
        for (int i = 0; i < 5; i++) {
            sum += n % 10;
            n = n / 10;
            if ((i == 4) || (n == 0))
                break;
        }
        cout << "sum=" << sum << endl;
        if (sum == 0)
            break;
    } while (1);
    return 0;

    // 1. 输入 5238
    // 2. 输入 316
    // 3. 输入 24 
    // 4. 输入 0
}