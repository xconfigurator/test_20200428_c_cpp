/*
用new和delete替换malloc和free P75

StrType类
malloc/free版本
*/
#include <iostream>
#include <malloc.h>
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
    p = (char*) malloc(len + 1);
    if (!p) {
        cout << "Allocation error" << endl;
        exit(1);
    }
    strcpy(p, ptr);// (dest, source)
}

StrType::~StrType() {
    cout << "Freeing p"<< endl;
    free(p);
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