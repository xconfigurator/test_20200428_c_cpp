/**
 * @file 31.cpp Balloon Comes!
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
    The contest starts now! How excited it is to see balloons floating around. You, one of the best programmers in HDU, can get a very beautiful balloon if only 
    you have solved the very very very ... easy problem.
    Give you an operator(+, -, *, / -- denoting addition, subtraction, multiplication, division respectively) and tow positive integers, your task is to output the reslt.
    Is it very easy?
    Come on, guy! PLMM will send you a beautiful Balloon right now !
    Good Luck!

Input:
    Input contains multiple tet cases. 
    The first line of the input is a single integer T (0 < T < 1000) which is the number of test cases. T test cases follow.
    Each test case contains a  char C (+, -, *, /) and two integers A and B(0 < A, B < 10000).
    Of Course, we all know 

Output:
    For each case, print the operation result. The result should be rounded to 2 decimal places If and only if is is not an integer.

Sample Input:
4
+ 1 2
- 1 2
* 1 2
/ 1 2

Sample Output:
3
-1
2
0.50
*/
#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[]) {
    int T;
    cin >> T;
    while (T--) {
        char c;
        int a, b;
        cin >> c >> a >> b;
        switch(c) {
            case '+':
                cout << a + b << endl;
                break;
            case '-':
                cout << a - b << endl;
                break;
            case '*':
                cout << a * b << endl;
                break;
            case '/':
                if ((a / (b * 1.0)) == (a / b)) {
                    cout << a / b << endl;
                    break;
                } else {
                    printf("%0.2f\n", a / (b * 1.0));
                    break;
                }
        }
    }
    return 0;
}