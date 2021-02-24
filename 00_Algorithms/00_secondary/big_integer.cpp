/*
@author liuyang
@since 2021/2/21
@update 2021/2/24 还没有整体测试

大整数运算(最好看着视频讲解练习，有图，方便理解。)
https://www.bilibili.com/video/BV1Ty4y1n7JH?p=16&spm_id_from=pageDriver
https://www.bilibili.com/video/BV1Ty4y1n7JH?p=17&spm_id_from=pageDriver
*/
#include <stdio.h>
#include<string.h>

struct bigInt {
    int d[1000];
    int len;
};

// 输入大整数
// https://www.bilibili.com/video/BV1Ty4y1n7JH?p=16
bigInt change(char str[]) {
    bigInt bI;
    bI.len = strlen(str);
    for (int i = 0; i < 1000; ++i) {
        bI.d[i] = 0;
    }
    for (int i = 0; i < bI.len; ++i) {
        bI.d[i] = str[bI.len - i - 1] - '0';//  小端
    }
    return bI;
}

// +
// https://www.bilibili.com/video/BV1Ty4y1n7JH?p=16
bigInt add(bigInt a, bigInt b) {
    bigInt c;
    c.len = 0;
    int carry = 0;// 进位
    for (int i = 0; i < a.len || i < b.len; ++i) {
        int temp = a.d[i] + b.d[i] + carry;
        c.d[c.len++] = temp % 10;
        // c.len ++;
        carry = temp / 10;
    }
    if (carry != 0) {
        c.d[c.len++] = carry;
        // c.len ++;
    }
    return c;
}

// -
// https://www.bilibili.com/video/BV1Ty4y1n7JH?p=16
bigInt sub(bigInt a, bigInt b) {
    bigInt c;
    c.len = 0;
    for (int i = 0; i < a.len || i < b.len; ++i) {
        if (a.d[i] < b.d[i]) {
            a.d[i + 1]--;
            a.d[i] += 10;
        }
        c.d[c.len] = a.d[i] - b.d[i];
        c.len++;
    }
    while(c.len - 1 >= 1 && c.d[c.len - 1] == 0) {
        c.len--; // 去除高位的0，且至少保留一位0
    }
    return c;
}

// *
// https://www.bilibili.com/video/BV1Ty4y1n7JH?p=17
// 大整数与小整数的乘法
bigInt multi(bigInt a, int b) {
    bigInt c;
    c.len = 0;
    int carry = 0;
    for (int i = 0; i < a.len; ++i) {
        int temp = a.d[i] * b + carry;
        c.d[c.len] = temp % 10;
        c.len++;
        carry = temp / 10;
    }
    while (carry != 0) { // 与加法不同，乘法可能会得出多个进位。
        c.d[c.len] = carry % 10;
        c.len++;
        carry /= 10;
    }
    return c;
}

// /
// https://www.bilibili.com/video/BV1Ty4y1n7JH?p=17
// 大整数与小整数的除法
bigInt divide(bigInt a, int b, int& r) {
    bigInt c;
    c.len = a.len;
    r = 0;// 余数
    for (int i = a.len - 1; i >= 0; i--) {
        r = r * 10 + a.d[i];
        if (r < b) {
            c.d[i] = 0;
        } else {
            c.d[i] = r / b;
            r = r % b;
        }
    }
    while (c.len - 1 >= 1 && c.d[c.len - 1] == 0) {
        c.len--;
    }
    return c;
}
