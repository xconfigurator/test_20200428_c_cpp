/*
安排时间表 P46

采用多维数组编写一个程序，运行此程序，并输入0~3之间的一个雇员号，然后输入从8~17点之间已安排了约会的钟点，然后输入-1退出。
接着输入另一个雇员号和约会时间。四个雇员的时间拿牌输出完后，输入-1退出。最后，程序讲显示所有雇员的时间安排表，并列出每个雇员都能出席的时间表。

写法2
OK
*/
#include <iostream>
#include <iomanip>
using namespace std;
const int NUMEMPLOYEES = 4;
const int NUMHOURS = 10;
const int STARTHOUR = 8;
int schedule[NUMHOURS][NUMEMPLOYEES]; // 声oo明二维数组schedule

void Enter();
void Display();
void Calculate();
int EnterEmpnum();
void EnterHour(int);

int main(int argc, char const *argv[]) {
    Enter();
    Display();
    Calculate();
    return 0;
}

void Enter() {
    int empnum;
    empnum = EnterEmpnum();
    while (empnum != -1) {
        EnterHour(empnum);
        empnum = EnterEmpnum();
    }
}

int EnterEmpnum() {
    int empnum;
    while (1) {
        cout << "Employee number? (0 ~ 3), -1to quit):";
        cin >> empnum;
        if (empnum < 0) {
            return -1;
        }
        if (empnum > NUMEMPLOYEES) {
            cout << "Employee number is out of range" << endl;
        } else {
            return empnum;
        }
    }
}

void EnterHour(int empnum) {
    int hour;
    while (1) {
        cout << "Hour of appointment? (8 ~ 17, -1 to quit):" << endl;
        cin >> hour;
        if (hour < 0) {
            break;
        }
        if ((STARTHOUR <= hour) && (hour < STARTHOUR + NUMHOURS)) {
            schedule[hour - STARTHOUR][empnum] = 1;
        } else {
            cout << "Hour is out of range." << endl;
        }
    }
}

void Display() {
    cout << endl << "schedule" << endl;
    cout << "      JOE     SAM     PAULA   MARY" << endl;
    for (int hour = 0; hour < NUMHOURS; hour ++) {
        cout << setw(2) << (hour + STARTHOUR) << ":00";
        for (int empnum = 0; empnum < NUMEMPLOYEES; empnum ++) {
            cout << "\t";
            if (schedule[hour][empnum] != 0) {
                cout << "X";
            }
        }
        cout << endl;
    }
}

void Calculate() {
    cout << endl << "Possible meeting time:" << endl;
    for (int hour = 0; hour < NUMHOURS; hour ++) {
        int k = 0;
        for (int empnum = 0; empnum < NUMEMPLOYEES; empnum ++) {
            k += schedule[hour][empnum];
        }
        if (k) {
            cout << setw(2) << (hour + STARTHOUR) << ":00\t" << k << endl;
        }
    }
}