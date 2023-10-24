/**
 * @file test_202310211823_data_transform.cpp
 * @author your name (you@domain.com)
 * @brief 
 * 数制转换测试（测试各种数制转换的工具）
 * 
 * 参考：
 * https://blog.csdn.net/weixin_44668898/article/details/101443574
 * 
 * 
 * 格式化输出流
 * https://c.biancheng.net/view/7578.html
 * 
 * 
 * @version 0.1
 * @date 2023-10-21
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
#include <stdlib.h> // _itoa
#include <string.h> // strlen
#include <bitset>
#include <sstream>  // stringstream
using namespace std;

#define RADIX_2 2
#define RADIX_8 8
#define RADIX_10 10
#define RADIX_16 16

/**
 * @brief C 形式的 十进制 -> 其他进制
 * _itoa
 * https://learn.microsoft.com/zh-cn/cpp/c-runtime-library/reference/itoa-itow?view=msvc-170
 */
void c_d_to_x() {
    char buffer[1000];
    int n = 10;
    // 10 -> 2
    _itoa(n, buffer, RADIX_2);
    printf("base %d: %s (%d chars)\n", 2, buffer, strnlen(buffer, _countof(buffer)));
    // 10 -> 8
    _itoa(n, buffer, RADIX_8);
    printf("base %d: %s (%d chars)\n", 8, buffer, strnlen(buffer, _countof(buffer)));
    // 10 -> 16
    _itoa(n, buffer, RADIX_16);
    printf("base %d: %s (%d chars)\n", 16, buffer, strnlen(buffer, _countof(buffer)));
}


/**
 * @brief C 形式的 其他进制 -> 十进制
 * strtol
 * https://learn.microsoft.com/zh-cn/cpp/c-runtime-library/reference/strtol-wcstol-strtol-l-wcstol-l?view=msvc-170
 * 使用：
 * https://www.runoob.com/cprogramming/c-function-strtol.html
 */
void c_x_to_d() {
    void c_x_to_d_helper_show(long int, char*);// 声明一下

    char *endptr;
    long int result;
    // 2 -> 10
    result = strtol("10000000000000000000", &endptr, RADIX_2);// Java::Long.parseLong("10000000000000000000", 2))
    c_x_to_d_helper_show(result, endptr);
    // 8 -> 10
    result = strtol("12", &endptr, RADIX_8);
    c_x_to_d_helper_show(result, endptr);
    // 16 -> 10
    result = strtol("A", &endptr, RADIX_16);
    c_x_to_d_helper_show(result, endptr);
}

// https://www.runoob.com/cprogramming/c-function-strtol.html
void c_x_to_d_helper_show(long int result, char *endptr) {
    if (*endptr != '\0') {
        printf("转换失败\n");
    } else {
        printf("转换结果：%ld\n", result);
    }
}


void cpp_d_to_x() {
    // 方法1：标准流
    cout << "300的8进制：" << std::oct << 300 << endl;
    cout << "300的10进制：" << std::dec << 300 << endl;
    cout << "300的16进制：" << std::hex << 300 << endl;
    cout << "300的2进制：" << bitset<16>(300) << endl;
    cout.unsetf(ios::basefield);// https://c.biancheng.net/view/7578.html
}

void cpp_d_to_x_ss() {
    // 方法2：stringstream
    int src = 300;
    stringstream ss;
    
    // 8
    string ss1r;
    ss << oct << src;
    ss >> ss1r;
    ss.clear();
     cout << "300的8进制：" << ss1r << endl;


    // 16
    string ss2r;
    ss << hex << src;
    ss >> ss2r;
    ss.clear();
    cout << "300的16进制：" << ss2r << endl;
}

void cpp_x_to_d() {
    // 方法1：标准流
    // TODO
}

void cpp_x_to_d_ss() {
    // 方法2：stringstream
    stringstream ss;

    // 2 -> 10
    // TODO

    // 8 -> 10 TODO 有问题！？？？？？？？？？？？？？？？
    string resultOct2Dec;
    ss << oct <<  "12";
    ss >> resultOct2Dec;
    cout << "转换结果:" << resultOct2Dec << endl;
    ss.clear();

    // 16 -> 10 TODO 有问题！？？？？？？？？？？？？？？？
    string resultHex2Dec;
    ss << hex << "A";
    ss >> resultHex2Dec;
    cout << "转换结果：" << resultHex2Dec << endl;
    ss.clear();
}


int main() {
    // C
    cout << "# C ############################" << endl;
    c_d_to_x();// C样式 十进制 -> 其他进制
    c_x_to_d();// C样式 其他进制 -> 十进制

    // C++ 标准流
    cout << "# C++ 标准流############################" << endl;
    cpp_d_to_x();
    //cpp_x_to_d();// TODO

    // C++ stringstream
    cout << "# C++ stringstream ############################" << endl;
    cpp_d_to_x_ss();// 8, 16
    //cpp_x_to_d_ss();// 8, 16 // 还有问题！
    return 0;
}