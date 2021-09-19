/*
谁是偷盗者 P25
20210919

甲、乙、丙、丁四个嫌疑人，只有一人为偷盗者。在审讯中，四人诚实或说谎都有可能。
甲：乙没偷，丁偷的。
乙：我没偷，丙偷的。
丙：甲没偷，乙偷的。
丁：我没偷。
请推断实际的偷盗者。

说明：本解法使用了位运算
其他解法参考： 《程序设计基础 第4版》P 29 逻辑思维与计算机解题
*/
#include <iostream>
using namespace std;

// deduce v. 推断，演绎
int Infer(); // vt. 推断；推论

int main(int argc, char const *argv[]) {
    int a = Infer();// 求推断结果
    switch(a) {     // 推断表达式
        case 0: cout << "丁" << endl; break;
        case 1: cout << "丙" << endl; break;
        case 2: cout << "乙" << endl; break;
        case 3: cout << "甲" << endl; break;
        default: cout << "";
    }
    return 0;
}

int Infer() {
    for (int i = 0; i < 4; i++) {
        if (!(1 == (1 << i & 5) || 4 == (1 << i & 5))) continue;    // 不满足甲的陈述
        if (!(2 == (1 << i & 6) || 4 == (1 << i & 6))) continue;    // 不满足乙的陈述
        if (!(8 == (1 << i & 12) || 4 == (1 << i & 12))) continue;  // 不满足丙的陈述
        return i;// 推断对应i位的嫌疑人是偷盗者
    }
    return -1;
}
