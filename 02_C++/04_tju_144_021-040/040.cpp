/**
 * @file 040.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-23
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

class value {
private:
    int a;
public:
    value(int i = 1) {
        a = i;
    }
    void list() {
        cout << a << " ";
    }
};

value data1[4];
value data2[4] = {10, 20, 30};

int main(int argc, char const *argv[]) {
    for (int i = 0; i < 4; i++) {
        data1[i].list();
        data2[i].list();
        cout << endl;
    }
    return 0;
}