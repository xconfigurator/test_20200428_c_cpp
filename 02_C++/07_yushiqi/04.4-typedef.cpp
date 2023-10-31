/**
 * @file 04.4-typedef.cpp
 * @author your name (you@domain.com)
 * @brief typedef 用于创建一个类型的别名
 * https://www.bilibili.com/video/BV1Vf4y1P7pq?p=19&spm_id_from=pageDriver&vd_source=8bd7b24b38e3e12c558d839b352b32f4
 *
 * @version 0.1
 * @date 2023-10-28
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;

int main() {
    typedef int myint;
    typedef unsigned char vec3b[3];

    typedef struct _rgb_struct {// name _rgb_struct can be omit
        unsigned char r;
        unsigned char g;
        unsigned char b;
    } rgb_struct;


    myint num = 32;

    // unsigned char color[3];
    vec3b color = {255, 0, 255};

    rgb_struct rgb = {0, 255, 128};
    return 0;
}