/**
 * @file 01.5-simple-input-and-output.cpp
 * @author your name (you@domain.com)
 * @brief 
 * 
 * https://www.bilibili.com/video/BV1Vf4y1P7pq/?p=6&spm_id_from=pageDriver&vd_source=8bd7b24b38e3e12c558d839b352b32f4
 * 
 * @version 0.1
 * @date 2023-10-19
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;

int main(int argc, char ** argv) {
    for (int i = 0; i < argc; ++i) {
        cout << i << '\t' << argv[i] << endl;
    }
    return 0;
}