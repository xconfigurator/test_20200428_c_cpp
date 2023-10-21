/**
 * @file 02.5.cpp
 * @author your name (you@domain.com)
 * @brief 
 *
 * 写出一个函数，要求将输入的十六进制数据转换成十进制数。
 * 联想Java：Integer.parseUnsignedInt("ff", 16);// 255
 * 
 * @version 0.1
 * @date 2023-10-21
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;

int htoi(char []);

int main() {
    //int htoi(char []);// 20231021 声明写在这里竟然可以通过编译。小刀拉屁股，开眼了！
    cout << "输入一个十六进制数：";
    char s1[20] = "";
    //cin.read(s1, 20);// 2023/10/21 不好使，但不知道为啥。
    cin >> s1;
    cout << endl;
    int n = htoi(s1);
    cout << "该数转换为十进制数"<< n << endl;
    return 0;
}

int htoi(char s[]) {
    int n = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        // 数字
        if (s[i] >= '0' && s[i] <= '9') {
            n = n * 16 + s[i] - '0';
        }
        // a...f
        if (s[i] >= 'a' && s[i] <= 'f') {
            n = n * 16 + s[i] - 'a' + 10;// a代表10
        }
        // A...F
        if (s[i] >= 'A' && s[i] <= 'F') {
            n = n * 16 + s[i] - 'A' + 10;
        }
    }
    return n;
}