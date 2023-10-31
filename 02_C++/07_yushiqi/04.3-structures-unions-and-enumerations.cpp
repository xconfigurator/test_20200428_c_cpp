/**
 * @file 04.3-structures-unions-and-enumerations.cpp
 * @author your name (you@domain.com)
 * @brief 
 * https://www.bilibili.com/video/BV1Vf4y1P7pq/?p=18&spm_id_from=pageDriver&vd_source=8bd7b24b38e3e12c558d839b352b32f4
 * 
 * @version 0.1
 * @date 2023-10-28
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
#include <string.h>
using namespace std;

int main() {
    // 1. struct.c
    void struct_c_style();
    struct_c_style();

    // 2. structpadding.cpp
    void struct_padding();
    struct_padding();

    // 3. union.cpp
    void union_demo();
    union_demo();

    // 4.
    void enum_demo1();
    enum_demo1();

    // 5. enum.cpp 
    void enum_demo2();
    enum_demo2();

    return 0;
}

void struct_c_style() {
    struct Student {
        char name[4];
        int born;
        bool male;
    };

    // C 风格
    struct Student stu = {"Yu", 2000, true};// initialization
    struct Student stu2;
    strcpy(stu2.name, "Liu");
    stu2.born = 2000;
    stu2.male = true;

    printf("Student %s, born in %d, gender %s\n", stu.name, stu.born, stu.male ? "male" : "female");
    printf("Student %s, born in %d, gender %s\n", stu2.name, stu2.born, stu2.male ? "male" : "female");
}

void struct_padding() {
    struct Student1 {
        int id;
        bool male;
        char label;
        float weight;
    };

    struct Student2 {
        int id;
        bool male;
        float weight;
        char label;
    };

    // cpp 风格 可以这样声明结构体变量
    Student1 stu11, stu12;
    Student2 stu21, stu22;

    cout << "Size of Student1:" << sizeof(Student1) << endl;// 12
    cout << "Size of Student2:" << sizeof(Student2) << endl;// 16   
}

void union_demo() {
    union ipv4address {
        std::uint32_t address32;
        std::uint8_t address8[4];
    };

    union ipv4address ip;
    cout << "sizeof(ip) = " << sizeof(ip) << endl;

    ip.address8[3] = 127;
    ip.address8[2] = 0;
    ip.address8[1] = 0;
    ip.address8[0] = 1;

    cout << "The address is ";
    cout << +ip.address8[3] << ".";
    cout << +ip.address8[2] << ".";
    cout << +ip.address8[1] << ".";
    cout << +ip.address8[0] << endl;

    cout << std::hex;
    cout << "in hex " << ip.address32 << endl;
}

// 使用频率不是很高。但是要了解。
void enum_demo1() {
    cout << "# enum_demo1 ###########################################" << endl;
    enum color {WHITE, BLACK, RED, GREEN, BLUE, YELLOW, NUM_COLORS};
    enum color pen_color = RED;
    pen_color = color(3);
    cout << "We have " << NUM_COLORS << "pens." << endl;
}

// An example with struct, union and enum
// enum.cpp
// 表示一个三维世界的向量
enum datatype {TYPE_INT8 = 1, TYPE_INT16 = 2, TYPE_INT32 = 4, TYPE_INT64 = 8};
struct Point {
    enum datatype type;
    union {
        std::int8_t data8[3];
        std::int16_t data16[3];
        std::int32_t data32[3];
        std::int64_t data64[3];
    };
};
size_t datawidth(struct Point pt) {
    return size_t(pt.type) * 3;
}
// l1范数
int64_t l1norm(struct Point pt) {
    int64_t result = 0;
    switch(pt.type) {
        case (TYPE_INT8):
            result = abs(pt.data8[0]) + abs(pt.data8[1]) + abs(pt.data8[2]);
            break;
        case (TYPE_INT16):
            result = abs(pt.data16[0]) + abs(pt.data16[1]) + abs(pt.data16[2]);
            break;
        case TYPE_INT32:
            result = abs(pt.data32[0]) + abs(pt.data32[1]) + abs(pt.data32[2]);
            break;
        case TYPE_INT64:
            result = abs(pt.data64[0]) + abs(pt.data64[1]) + abs(pt.data64[2]);
            break;
    }
    return result;
}
void enum_demo2() {
    cout << "# enum.cpp ###########################################" << endl;
    struct Point point1 = {.type=TYPE_INT8, .data8 = {-2, 3, 4}};
    struct Point point2 = {.type=TYPE_INT32, .data32 = {1, -2, 3}};

    cout << "Data width = " << datawidth(point1) << endl;
    cout << "Data width = " << datawidth(point2) << endl;

    cout << "L1 norm = " << l1norm(point1) << endl;
    cout << "L1 norm = " << l1norm(point2) << endl;
}