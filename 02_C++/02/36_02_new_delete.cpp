/*
用new和delete替换malloc和free P76

StrType类
new/delete版本

一句话：new和delete更方便
*/
#include <iostream>
//#include <malloc.h> // 不需要
#include <string.h>
#include <stdlib.h>
using namespace std;

class StrType {
public:
    StrType(char* ptr);
    ~StrType();
    void Show();
private:
    char* p;
    int len;
};

StrType::StrType(char* ptr) {
    len = strlen(ptr);
    p = new char[len + 1];
    if (!p) {
        cout << "Allocation error" << endl;
        exit(1);
    }
    strcpy(p, ptr);
}

StrType::~StrType() {
    cout << "Freeing p" << endl;
    delete[] p;
}

void StrType::Show() {
    cout << p << endl << "length:" << len << endl;
}

int main(int argc, char const *argv[]) {
    StrType s1("This is a test\n");
    StrType s2("I love C++\n");
    s1.Show();
    s2.Show();
    return 0;
}