/**
 * @file bitoperation03.cpp
 * @author liuyang
 * @brief 思考题 21:35
 * 
 * 有两个int型的变量a和n（0<=n<=31）,要求写一个表达式，使得该表达式的值和a的第n位相同。
 * 
 * @version 0.1
 * @date 2018-03-24 20:24
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
#include <bitset>
using namespace std;

int main() {

	int a = 16;
	int n = 4;
    cout << bitset<16>(a) << endl;
	cout << ((a >> n) & 1) << endl;// 注意1：题目要求n是从0开始。 注意2：a >> n运算不改变a的值。

    // 另一解法：
    // 当（0 <= n < 31）时，还有一种解法。注意到这种解法n不能等于31
    cout << ((a & (1 << n)) >> n) << endl;
    
	return 0;
}