/**
 * @file 062.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-25
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

class per {
protected:
    char *name;
    int age;
public:
    virtual void message() {cout << "person message.\n";}
};

class teacher:public per {
public:
    void message() {cout << "teacher message.\n";}
};

class student:public per {
public:
    void message() {cout << "student message.\n";}
};

class worker:public per {
public:
    void message() {cout << "worker message.\n";}
};

int main(int argc, char const *argv[]) {
    per obj, *ptr;
    teacher ob1;
    student ob2;
    worker ob3;

    ptr=&obj;   ptr->message();
    ptr=&ob1;   ptr->message();
    ptr=&ob2;   ptr->message();
    ptr=&ob3;   ptr->message();
    return 0;
}