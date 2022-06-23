/**
 * @file 022.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-16
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#include <cstring>
//#include <string>
using namespace std;

int main(int argc, char const *argvp[]) {
    char s1[] = "Hello C++";
    cout << "s1:" << strlen(s1) << endl;

    char *s2 = "string";
    cout << "s2:" << strlen(s2) << endl;

    char s3[] = "Hello\0C++";
    cout << "s3:" << strlen(s3) << endl;
    cout << "s4:" << strlen("asdf ghjk lmn") << endl;
    return 0;
}