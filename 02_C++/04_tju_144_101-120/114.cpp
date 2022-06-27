/**
 * @file 114.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#include <cstring>
//#include <stdlib>
using namespace std;

class stringclass {
public:
    stringclass(char *str);
    ~stringclass();
    void showstring();
private:
    char *ptr;
    long len;
};

stringclass::stringclass(char *str) {
    len = strlen(str);
    ptr = new char[len + 1];
    if (!ptr) {
        cout << "Allocation Error!\n";
        exit(1);
    }
    strcpy(ptr, str);
}

stringclass::~stringclass() {
    cout << "Freeing Allocation " << len << endl;
    delete []ptr;
}

void stringclass::showstring() {
    cout << ptr << " " << len << endl;
}

int main(int argc, char const * argv[]) {
    stringclass s1("C++ programming");
    stringclass s2("Test string");
    s1.showstring();
    s2.showstring();
    return 0;
}

