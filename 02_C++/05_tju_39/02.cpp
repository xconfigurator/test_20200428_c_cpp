/**
 * @file 02.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-05-19
 * 
 * @copyright Copyright (c) 2022
 * 
 * 亲密数：
 * 如果整数A的全部因子（不包括A）之和等于B，且整数B的全部因子（不包括B）之和等于A，则将A和B成为亲密数。
 * 如
 * 220的全部因子（不包括220）之和：1 + 2 + 4 + 5 + 10 + 11 + 20 + 22 + 44 + 55 + 110 = 284
 * 284的全部因子（不包括284）之和：1 + 2 + 4 + 71 + 142 = 220
 * 故220和284为亲密数。
 * 求：10000以内的亲密数。
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    int i, j, k, sum1, sum2;
    for (int i = 1; i <= 10000; ++i) {
        sum1 = sum2 = 0;

        for (j = 1; j < i; ++j) 
            if (i % j == 0){
                sum1 += j;
            } 
        for (k = 1; k < sum1; ++k)
            if (sum1 % k ==0)
                sum2 += k;
        if (sum2 == i && i != sum1) { 
            //cout << i << endl;     
            cout << "i = " << i 
                << " sum1 = " << sum1 
                << " sum2 = " << sum2 
                << endl;
        }   
    }
    return 0;
}