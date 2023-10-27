/**
 * @file 02.2-more-integer-types.cpp
 * @author your name (you@domain.com)
 * @brief 
 * https://www.bilibili.com/video/BV1Vf4y1P7pq/?p=8&spm_id_from=pageDriver&vd_source=8bd7b24b38e3e12c558d839b352b32f4
 * 
 * @version 0.1
 * @date 2023-10-25
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;

int main() {
    // char
    char c1 = 'C';
    char c2 = 80;
    char c3 = 0x50;
    char16_t c4 = u'于';// --std=c++11
    char32_t c5 = U'于';// --std=c++11
    cout << c1 << ":" << c2 << ":" << c3 << endl;
    cout << +c1 << ":" << +c2 << ":" << +c3 << endl;
    cout << c4 << endl;
    cout << c5 << endl;

    // bool
    // 1 byte (8bit)
    bool b1 = true;
    int i = b1;
    bool b2 = -256;// 注意！！！
    cout << "i = " << i << endl;// 1
    cout << "b1 = " << b1 << endl;// 1
    cout << "b2 = " << b2 << endl;// 1 (非0即为1)

    // size_t
    // 课程13分钟左右讲到

    // Fixed width integer types (sicne C++11 defined in cstdint)
    int8_t i8t = 1;         // go::int8
    int16_t i16t = 1;       // go::int16
    int32_t i32t = 1;       // go::int32    rune
    int64_t i64t = 1;       // go::int64
    uint8_t ui8t = 1;       // go::uint8
    uint16_t ui16t = 1;     // go::unit16
    uint32_t ui32t = 1;     // go::unit32
    uint64_t ui64t = 1;     // go::unit64

    // 一些有用的宏 
    cout << "INT8_MIN = " << INT8_MIN << endl;
    cout << "INT8_MAX = " << INT8_MAX << endl;
    cout << "INT16_MIN = " << INT16_MIN << endl;
    cout << "INT16_MAX = " << INT16_MAX << endl;
    cout << "INT32_MIN = " << INT32_MIN << endl;
    cout << "INT32_MAX = " << INT32_MAX << endl;
    return 0;
}