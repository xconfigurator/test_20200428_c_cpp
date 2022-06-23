/**
 * @file 01.cpp 
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-05-19
 * 
 * @copyright Copyright (c) 2022
 * 
 * 特殊的完全平方数：
 * 在3位整数 100 ~ 999 中查找符合如下条件的整数并输出：这个数既是完全平方数，又有两位数字相同。如121(11的平方)、144(12的平方)。
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    int i, j;
    int hun, ten, data;
    // TODO 具体怎么叫，还需要查一下！
    // 百位：hundreds   百位数：hundreds digit
    // 十位：tens       十位数：tens digit
    // 个位：ones       个位数：units digit
    for (int i = 100; i <= 999; ++i) {
        j = 10;
        while (j * j <= i) {
            if (i == j * j) {
                hun = i / 100;
                data = i - hun * 100;
                ten = data / 10;
                data -= ten * 10;
                if (hun == ten || hun == data || ten == data) 
                    cout << i << endl;
            }
            ++j;
        }
    }
    return 0;
}