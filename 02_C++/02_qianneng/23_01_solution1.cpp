/*
安排时间表 P46

采用多维数组编写一个程序，运行此程序，并输入0~3之间的一个雇员号，然后输入从8~17点之间已安排了约会的钟点，然后输入-1退出。
接着输入另一个雇员号和约会时间。四个雇员的时间拿牌输出完后，输入-1退出。最后，程序讲显示所有雇员的时间安排表，并列出每个雇员都能出席的时间表。

写法1

测试数据就不抄了，看书P48

TODO 貌似有点问题
*/
#include <iostream>
#include <iomanip>
using namespace std;

const int NUMEMPLOYEES = 4;
const int NUMHOURS = 10;
const int STARTHOUR = 8; 

int schedule[NUMHOURS][NUMEMPLOYEES];// 声明二维数组 schedule

int main(int argc, char const *argv[]) {
    int empnum, hour;

    // Enter employee appointments;
    while (1) {
        cout << "Employee number ? (0 ~ 3, -1 to quit):" << endl;
        cin >> empnum;
        if (empnum < 0) break;
        if (empnum > NUMEMPLOYEES) {
            cout << "Employee number is out of range" << endl;
            continue;
        }
        while(1) {
            cout << "Hour of appointment ? (8 ~ 17, -1 to quit)" << endl;
            cin >> hour;
            if (hour < 0) break;
            if ((STARTHOUR <= hour) && (hour < STARTHOUR + NUMHOURS)) {// 下标检查
                schedule[hour-STARTHOUR][empnum] = 1;
            } else {
                cout << "Hour is out of range" << endl;
            }
        }
    }

    // Display schedule;
    cout << endl << "schedule" << endl;
    cout << "      JOE     SAM     PAULA   MARY" << endl;
    for (hour = 0; hour < NUMHOURS; hour ++) {
        cout << setw(2) << (hour + STARTHOUR) << ":00";
        for (empnum = 0; empnum < NUMEMPLOYEES; empnum ++) {
            cout << "\t";
            if (schedule[hour][empnum] != 0) {
                cout << "X";
            }
        }
        cout << endl;
    }

    // Calculate hours when all employees can meet:
    // 按行扫描矩阵并统计和
    cout << endl << "Possible meeting time:" << endl;
    for (hour = 0; hour < NUMHOURS; hour ++) {
        int k = 0;
        for (empnum = 0; empnum < NUMEMPLOYEES; empnum ++) {
            k += schedule[hour][empnum];
        }
        if (k) {
            cout << setw(2) << (hour + STARTHOUR) << ":00\t" << k << endl;
        }
    }

    // TODO 
    return 0;
}