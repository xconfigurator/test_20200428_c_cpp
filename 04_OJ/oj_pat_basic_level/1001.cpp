/*
@author liuyang
@since 2021/2/7

分类：模拟
害死人不偿命的(3n + 1)猜想
https://pintia.cn/problem-sets/994805260223102976/problems/994805325918486528\

参考：https://www.bilibili.com/video/BV1Ty4y1n7JH?p=5&spm_id_from=pageDriver
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    int count = 0;
    cin >> n;
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = (3 * n + 1) / 2;
        }
        count ++;
    }
    cout << count << endl;
    return 0;
}