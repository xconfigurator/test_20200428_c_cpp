/**
 * @file 04.2-strings.cpp
 * @author your name (you@domain.com)
 * @brief 
 * https://www.bilibili.com/video/BV1Vf4y1P7pq/?p=17&vd_source=8bd7b24b38e3e12c558d839b352b32f4
 * 
 * @version 0.1
 * @date 2023-10-27
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    // 1. 字符数组初始化
    void initchar();
    initchar();

    // 2. 字符数组操作
    void stringop();
    stringop();

    // 3. string class
    // 数组操作比较危险，一不小心就出错。string类会更方便。
    void stdstring();
    stdstring();


    return 0;
}

// initchar.cpp
void initchar() {
    cout << "# initchar.cpp #####################" << endl;
    char rabbit[16] = {'P', 'e', 't', 'e', 'r'};
    cout << "String length is" << strlen(rabbit) << endl;
    for (int i = 0; i < 16; i++) {
        // +rabbit[i] 中的+作用就是把char转换成int
        cout << i << ":" << +rabbit[i] << "(" << rabbit[i] << ")" << endl;
    }

    char bad_pig[9] = {'P', 'e', 'p', 'p', 'a', ' ', 'P', 'i', 'g'};// 这很危险！
    char good_pig[10] = {'P', 'e', 'p', 'p', 'a', ' ', 'P', 'i', 'g', '\0'};

    cout << "Rabbit is (" << rabbit << ")" << endl;
    cout << "Pig's bad name is (" << bad_pig << ")" << endl;
    cout << "Pig's good name is (" << good_pig << ")" << endl;

    char name[10] = {'Y', 'u', '\0', 'S', '.', '0'};
    cout << strlen(name) << endl;
}

// stringop.cpp
void stringop() {
    cout << "# stringop.cpp #####################" << endl;
    char str1[] = "Hello, \0CPP";
    char str2[] = "SUSTech";
    char str3[] = "foo " "bar";// 这样连接, 注意与string class相区别。
    char result[128];

    cout << str3 << endl;

    // 越界访问
    for (int i = 0; i < 16; i++) {
        cout << i << ":" << +str1[i] << "(" << str1[i] << ")" << endl;
    }

    strcpy(result, str1);
    cout << "Result = " << result << endl;
    strcat(result, str2);
    cout << "Result = " << result << endl;
    cout << "strcmp() = " << strcmp(str1, str2) << endl;

    //
    const wchar_t s1[] = L"ABCD";
    //const char8_t s2[] = u8"ABCD"; // since C++20
    const char16_t s3[] = u"ABCD"; // since C++11
    const char32_t s4[] = U"ABCD"; // since C++11

}

// stdstring.cpp
// string类并不会越界检查！！！！
void stdstring() {
    cout << "# stdstring.cpp #####################" << endl;
    std::string str1 = "Hello";
    std::string str2 = "SUSTech";
    std::string result = str1 + ", " + str2;

    cout << "result = " + result << endl;
    cout << "The length is " << result.length() << endl;
    cout << "str1 < str2 is " << (str1 < str2) << endl;// 

    // std::string
    // std::wstring
    // std::u8string // C++20
    // std::u16string // C++11
    // std::u32string // C++11
}