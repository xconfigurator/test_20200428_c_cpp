/**
 * @file bitoperation.cpp
 * @author liuyang
 * @brief 位运算
 * 
 * bit operation        位运算，位操作
 * bit manipulation     位操作
 * 
 * 说明：
 * 用于对整数类型（char, int, long等）变量中的某一位(bit)或者若干位进行操作。
 * 比如：
 * 1. 判断某一位是否是1。
 * 2. 只改变其中某一位，而保持其他位都不变。
 * 运算符：
 * &    按位与（双目）
 * |    按位或（双目）
 * ^    按位异或（双目）
 * ~    按位取反（单目）
 * <<   左移（双目）
 * >>   右移（双目）
 * 
 * @version 0.1
 * @date 2021-11-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
#include <bitset>
using namespace std;

// & 
void bitAnd() {
    cout << "==&=====================" << endl;
    
    // 速算：1. 同1才是1    2. a & 0 = 0    3. a & 1 = a
    cout << bitset<16>(21) << endl;// 可以调成bitset<8> 联想Java， Integer.toBinaryString(n); Integer.toOctalString(n); Integer.toHexString(n);
    cout << bitset<16>(18) << endl;
    cout << bitset<16>(21 & 18) << endl;

    // 场景：按位与通常用来将某变量中的某些位清零且保留其他位不变，也可以用来获取某变量中的一位。
    // 置0（清零）
    // 例题：将int类型变量n的低8位全部设置成0， 而其余位不变。
    int n = 2222221;
    cout << bitset<16>(n) << endl;// 看一下bitset<32>(n)
    cout << bitset<16>(n & 0xffffff00) << endl;// n &= 0xffffff00;

    // 判断某一位
    // 例题：判断一个int型变量的第7位(从右往左，从0开始数)是否是1；
    bool flag = 0x80 == n & 0x80 ? true : false;
    cout << bitset<16>(n) << "的第7位否是1 = " << flag << endl;
}

// | 5:56 
void bitOr() {
    cout << "==|=====================" << endl;

    // 速算：1. 同0才是0    2. a | 0 = a   3. a | 1 = 1
    cout << bitset<16>(21) << endl;
    cout << bitset<16>(18) << endl;
    cout << bitset<16>(21 | 18) << endl;

    // 场景：按位或运算通常用来将某变量中的某些位置1且保留其他位不变。
    // 置1
    // 例题：将int类型变量n的低8位全部置成1,而其余位不变。
    int n = 2222221;
    cout << bitset<16>(n) << endl;
    cout << bitset<16>(n | 0X000000FF) << endl;// n |= 0X000000FF;
}

// ^ 8:41
void bitXor() {
    cout << "==^=====================" << endl;

    // 相异为1
    cout << bitset<16>(21) << endl;
    cout << bitset<16>(18) << endl;
    cout << bitset<16>(21 ^ 18) << endl;
    
    // 场景：按位异或运算通常用来将某变量中的某些位取反且保留其他位不变。
    // 取反
    // 例题：将int型变量n的低8位取反，而其余位不变。
    int n = 2222221;
    cout << bitset<16>(n) << endl;
    cout << bitset<16>(n ^ 0X000000FF) << endl;// n ^= 0X000000FF;

    // 异或运算的特点: 
    // 1. a ^ b = c 那么 c ^ b = a（可使用穷举法证明）。可用来最简单的加密。b是秘钥
    // 2. 可以不使用临时变量来交换两个int型数据（可使用穷举法证明）。
    int a = 5, b = 7;
    cout << "a = " << a << " b =" << b << endl;
    a = a ^ b;
    b = b ^ a;
    a = a ^ b;
    cout << "a = " << a << " b =" << b << endl;
}

// ~ 12:40
void bitNot() {
    cout << "==~=====================" << endl;
    
    cout << bitset<16>(21) << endl;
    cout << bitset<16>(~21) << endl;
}

// << 13:34
void leftShift() {
    cout << "==<<====================" << endl;
    // 表达式a << b的值是：
    // 1. 将a各二进制位全部左移b位后得到的值。
    // 2. 左移时，高位丢弃，低位补0。
    // 3. a的值不因运算而改变。
    cout << bitset<16>(15) << endl;
    cout << bitset<16>(15 << 4) << endl;

    // <<运算的特点：
    // 左移1位就是乘以2，左移n位就是乘以2的n次方。左移操作比乘法操作快得多得多。
}

// >> 15:29
void rightShift() {
    cout << "==>>====================" << endl;
    // 表达式a >> b的值是：
    // 1. 将a各二进制位全部右移b位后得到的值。
    // 2. 右移时，移出最右边的位就被丢弃。
    // 3. a的值不因运算而改变。
    cout << bitset<16>(0x00f0) << endl;
    cout << bitset<16>(0x00f0 >> 4) << endl;

    // >>运算的特点：
    // 右移1位就是除以2，右移n位就是除以2的n次方。且结果往小里取整（注意是向下取整，并不是去尾取整，在负数的时候会有体现。）。
    cout << (-25 >> 4) << endl; // -2
    cout << (-2 >> 4) << endl;  // -1
    cout << (18 >> 4) << endl;  // 1
    
    // 关于>>>。C++没有无符号右移。（Java和JavaScript中有无符号右移）
    // 若想实现无符右移可以先将操作数变为无符号数，然后执行右移操作即可。
}

int main(int argc, char const *argv[]) {
    // cout << sizeof(int) << endl;
    bitAnd();       // &
    bitOr();        // |
    bitXor();       // ^
    bitNot();       // ~
    leftShift();    // <<
    rightShift();   // >>
    return 0;
}