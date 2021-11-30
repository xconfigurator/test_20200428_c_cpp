/*
@author liuyang
@since 2021/2/19

分类：模拟
D进制A+b
https://pintia.cn/problem-sets/994805260223102976/problems/994805299301433344

参考：https://www.bilibili.com/video/BV1Ty4y1n7JH?p=6&spm_id_from=pageDriver

输入样例：
123 456 8

输出样例：
1103

*/
#include <iostream>
using namespace std;

const unsigned int MAX_SIZE = 100;
unsigned int result[MAX_SIZE] = {}; // 这样内容会被默认初始化为0。打个断点看一下就好。貌似不同的编译器的处理效果会不一样。

int main() {
    unsigned int A, B, C, D;
    while(cin >> A >> B >> D) {
        C = A + B; // 和
        // 进制转换
        int n = 0;
        do {
            result[n] = C % D;
            C /= D;
            ++n;
        } while (C > 0);

        for (int i = n - 1; i >= 0; --i) {
            cout << result[i];
        }
        cout << endl;
    }
    return 0;
}