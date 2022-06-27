/**
 * @file 095.cpp 左值
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

int &function(int n, int s[]) {
    int &m = s[n];
    return m;
}

int main(int argc, char const *argv[]) {
    int s[] = {5, 4, 3, 2, 1};
    function(3, s) = 10;
    cout << function(3, s) << endl;
    return 0;
}

// 左值