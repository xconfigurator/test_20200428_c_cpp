/**
 * @file 32.cpp Specialized Four-Digit Numbers (进制转换)
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*
Problem Description:
    Find and list all four-digit numbers in decimal notation that have the property that 
    the sum of its four digits equals the sum of its digits when represented in hexadecimal (base 16) notation 
    and also equals the sum of its digits when represented in duodecimal (base 12) notation.

    For example, the number 2991 has the sum of (decimal) digits 2 + 9 + 9 + 1 = 21. 
    Since 2991 = 1 * 1728 + 8 * 144 + 9 * 12 + 3, its duodecimal representation is 1893(12), and these digits also sum up to 21.
    But hexadecima 2991 is BAF(16), and 11 + 10 + 15 = 36, so 2991 should be rejected by your program.

    The next number(2992), however, has digits that sum to 22 in all three representations (icluding BB016), so 2992 should be on
    the listed output. (Web don't want decimal numbers with fewer than four digits - excluding leading zeros = so that 2992 is the first correct answrer.)

Input:
    There is no input for this problem
Output:
    Your output is to be 2002 and all larger four-digit numbers that satisfy the requirements(in strictly increasing order),
    each on a separate line with no leading or trailing blanks, ending with a new-line character.
    There are to be no blank lines in the output. The first few lines of the output are shown below.

Sample Input:
    There is no input for this problem

Sample Output:
2992
2993
2994
2995
2996
2997
2998
2999

*/
#include <iostream>
using namespace std;

int sum(int a, int b) {
    int num = 0;
    while (a) {
        num += a % b;
        a = a / b;
    }
    return num;
}

int main(int argc, char const *argv[]) {
    int i;
    for (i = 2992; i < 10000; i++) {
        if(sum(i, 10) == sum(i, 16) && sum(i, 16) == sum(i, 12)) printf("%d\n", i);
    }
    return 0;
}