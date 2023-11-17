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

    // liuyang 202311040614 add C++ 11 Raw string literal R"()"
    cout << "# C++ 11 Raw String Literal ################" << endl;
    string block = R"(
        <div>
            <span>C++ 11 也可以写文本块了！</span>
        </div>
    )";
    cout << block << endl;
    // Java JDK15+ """ XXXXXX """
    // https://www.runoob.com/python3/python3-string.html
    // Python ''' xxxxxx '''


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

    // String Literals 常量字符串
    char name1[] = "Southen University of Science and Technology";
    char name2[] = "Southen University of " "Science and Technology";
    char name3[] = "ABCD";// how many bytes for the array? 答：数组长度是5
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

    // 操作示例
    strcpy(result, str1);// strncpy
    cout << "Result = " << result << endl;
    strcat(result, str2);// strncat
    cout << "Result = " << result << endl;
    cout << "strcmp() = " << strcmp(str1, str2) << endl;

    //
    const wchar_t s1[] = L"ABCD试试中文";
    //const char8_t s2[] = u8"ABCD"; // since C++20
    const char16_t s3[] = u"ABCD"; // since C++11
    const char32_t s4[] = U"ABCD"; // since C++11
    cout << "wchar_t " << s1 << endl; 
}

// stdstring.cpp 20:08
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

    std::string l1  = "测试中文";
    cout << l1 << endl;
    /* 这里的有问题， 以后有时间了再查
    std::wstring l2 = L"测试中文";
    cout << l2 << endl;
    std::u16string l3 = u"测试中文";
    cout << l3 << endl;
    std::u32string l4 = U"测试中文";
    cout << l4 << endl;
    */
}