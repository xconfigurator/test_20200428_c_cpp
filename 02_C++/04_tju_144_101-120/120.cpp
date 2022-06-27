/**
 * @file 120.cpp
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
using namespace std;

class Date {
public:
    Date(int i, int j, int k) {
        year = i;
        if (j > 0 && j <= 12) month = j;
        if (k > 0 && k <= 31) day = k;
        cout << "Constructr:";
        display();
    }
    void display() {
        cout << year << "/" << month << "/" << day << endl;
    }
    ~Date() {
        cout << "Destructor:";
        display();
    }
private:
    int year, month, day;
};

class Student {
public:
    Student(char *n, int i, int j, int k):BirthDate(i, j, k) {strcpy(name, n);}
    void display() {
        cout << name << ",";
        BirthDate.display();
    }
    ~Student() {
        cout << "Destructor:" << name << endl;
    }
private:
    char name[20];
    Date BirthDate;
};

int main(int argc, char const *argv[]) {
    Student s("user1", 1993, 10, 1);
    s.display();

    Date d(2005, 6 , 1);
    s.display();
    return 0;
}

// 构造函数初始化过程：父 -> 聚合 -> 子