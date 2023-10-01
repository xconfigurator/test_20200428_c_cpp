/**
 * @file bitset.10.14.cpp
 * @author your name (you@domain.com)
 * @brief bitset 用法示例
 * 《新标准C++程序设计》 郭炜 P258 (不是合订本)
 * 
 * @version 0.1
 * @date 2023-07-20
 *       2023-10-01
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
#include <bitset>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
    
    bitset<7>bst1;
    bitset<7>bst2;
    cout << "1) " << bst1 << endl;

    // 将第0位变成1。
    bst1.set(0, 1); 
    cout << "2) " << bst1 << endl;
    
    // 左移4位
    bst1 <<= 4;
    cout << "3) " << bst1 << endl;

    // 第2位设置为1
    bst2.set(2, 1);
    cout << "*) " << bst2 << endl;

    // 按位或
    bst2 |= bst1;
    cout << "4) " << bst2 << " (bst2按位或bst1)" << endl;

    // 输出10进制形式
    cout << "5) " << bst2.to_ulong() << " (bst2十进制形式)" << endl;

    // 每一位都取反
    bst2.flip();
    cout << "*) " << bst2 << " (bst2每位都取反)" << endl;

    // 异或
    bst1.set(3);// bst1变为 0011000
    bst2.flip(6);// bst2变为0101011
    bitset<7>bst3 = bst2 ^ bst1;
    cout << "6) " << bst3 << endl;

    // 按位输出
    cout << "7) " << bst3[3] << ", " << bst3[4] << endl;

    return 0;
}