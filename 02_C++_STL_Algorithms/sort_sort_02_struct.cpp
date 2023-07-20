/**
 * @file sort_sort_02_struct.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-07-20
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
#include <algorithm>// stort
#include <cstring>// stricmp
using namespace std;

struct Student {
    char name[20];
    int id;
    double gpa;
};

Student students[] = {
    {"Jack", 112, 3.4}
    ,{"Mary", 102, 3.8}
    ,{"Mary", 117, 3.9}
    ,{"Ala", 333, 3.5}
    ,{"Zero", 101, 4.0}
};

struct StudentRule1 {
    // 按姓名从小到大排序
    bool operator() (const Student & s1, const Student & s2) {
        if (stricmp(s1.name, s2.name) < 0) {
            return true;
        } else {
            return false;
        }
    }
};

struct StudentRule2 {
    // 按id从小到大排序
    bool operator() (const Student & s1, const Student & s2) {
        return s1.id < s2.id;
    }
};

struct StudentRule3 {
    // 按gpa从高到低排序
    bool operator() (const Student & s1, const Student & s2) {
        return s1.gpa > s2.gpa;
    }
};

void PrintStudents(Student s[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << "(" << s[i].name << "," << s[i].id << "," << s[i].gpa << ")" << "\t";
    }
    cout << endl;
}

int main(int argc, char const *argv[]) {

    int n = sizeof(students) / sizeof(Student);
    sort(students, students + n, StudentRule1());// 按姓名从小到大排序
    PrintStudents(students, n);
    sort(students, students + n, StudentRule2());// 按id从小到大排序
    PrintStudents(students, n);
    sort(students, students + n, StudentRule3());// 按gpa从高到低排序
    PrintStudents(students, n);
    
    return 0;
}