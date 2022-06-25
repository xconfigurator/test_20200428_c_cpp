/**
 * @file 063.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-25
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#include <cstring>
using namespace std;

class person {
private:
    char *name;
public:
    person(char *a)         {name = new char[strlen(a) + 1]; strcpy(name, a);}
    virtual void show()     {cout << "name =" << name << endl;}
};

class student:public person {
private:
    char *major;
public:
    student(char *a, char *b);
    void show();
};

student::student(char *a, char *b):person(a) {
    major = new char[strlen(b) + 1];
    strcpy(major, b);
}

void student::show() {
    person::show();
    cout << "major=" << major << endl;
}

int main(int argc, char const *argv[]) {
    person *p;
    student a("zhang", "computer");
    p = &a;
    p->show();
    return 0;
}