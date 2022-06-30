/**
 * @file 29.cpp Financial Management
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*
Input:
    The intput will be twelve lines. Each line will contain the closing balance of his bank account for a particular month.
    Each number will be positive and displayed to the penny. No dollar sign will be inclued.
Output:
    The output will be a single number, the average(mean) of the closing balances ofr the twelve months.
    It will be rounded to the nearest penny, preceded immediately by a dollar sign, and folllowed by the end-of-line.
    There will be no other spaces or characters in the output.

Sample Input:
100.00
489.12
12454.12
1234.10
823.05
109.20
5.27
1542.25
839.18
83.99
1295.01
1.75

Sample Output:
$1581.42
*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    double *p = new double[12];
    double sum = 0;
    for (int i = 0; i < 12; i++) {
        cin >> p[i];
    }
    for (int i = 0; i < 12; i++) {
        sum += p[i];
    }
    printf("$%0.2f\n", sum / 12);
    return 0;
}