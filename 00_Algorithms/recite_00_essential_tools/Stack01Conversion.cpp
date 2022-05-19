/*
进制转换（练编程基本功）
@since 2021/11/19
http://www.imooc.com/learn/611

题目：
输入任意十进制的正整数N，分别输出该整数N的二进制、八进制、十六进制数

解法：
N = (N div d) * d + N mod d (div标识整除，mod表示求余)
短除法
N           N div 8         N mod 8
1348        168             4
168         21              0
21          2               5
2           0               2
=>2504

N           N div 16        N mod 16
1348        84              4
84          5               4
5           0               5
=>544

验算：
Integer.toBinaryString(n);
Integer.tOctalString(n);
Integer.toHexString(n);
*/
#define BINARY      2
#define OCTAL       8
#define HEX         16

#include <iostream>
#include <stack>
using namespace std;

void printBinaryString(int);
void printOctalString(int);
void printHexString(int);
void converse(int,int);
void print(stack<int>&);
char format(int);

int main(int arc, char const *argv[]) {

    int a;
    cin >> a;
    printBinaryString(a);
    printOctalString(a);
    printHexString(a);

    return 0;
}

void printBinaryString(int n) {
    converse(n, BINARY);
}
void printOctalString(int n) {
    converse(n, OCTAL);
}

void printHexString(int n) {
    converse(n, HEX);
}

void converse(int n, int base) {
    cout << base << "进制\t：";

    stack<int> s;
    int p, q;// 商、余数
    while (n) {// while(p != 0)
        p = n / base; // 商
        q = n % base; // 余数
        n = p;
        s.push(q);    
    }

    // 输出
    print(s);
}

void print(stack<int> &s) {
    if (!s.empty()) {
        while (!s.empty()) {
            cout << format(s.top()) ;
            //cout << s.top();
            s.pop();
        }
    } else {
        cout << "0";
    }
    cout << endl;
}

char format(int n) {
    // 注意下面两个写法效果一样。
    //char num[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    char num[] = "0123456789ABCDEF";// 显然这种更写法更省事。
    return num[n]; 
}