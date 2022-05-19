/*
打印年历 P27
20210919

打印任何一年的年历

[分析]
步骤如下：
确定该年的元旦是星期几；
循环12个月，每个月起始时打印星期，并设置日期的起始打印点；
计算该月的天数（其中用到判断该年是否是闰年）；
循环每个月中的天数，打印日期，逢7换行。
*/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int FirstDayOfYear(int year);
int DaysOfMonth(int month);
void PrintMonth(int month);
void PrintHead(int month);
bool IsLeapYear(int year);

int weekDay;
int year;// 待打印年份

const string FIRST_LINE_SPACE = "        ";

int main(int argc, char const *argv[]) {
    // 为了输出到屏幕上而不受重定向的影响，下面用cerr输出
    cerr << "请输入想要打印的年份：" << endl;
    cin >> year;
    if (year < 1) {
        cerr << "年份不能小于1" << endl;
        return 0;
    }

    weekDay = FirstDayOfYear(year);// 一年的第一天星期几

    // 打印年历标题
    cout << endl << endl << endl << endl << year << "年" << endl;
    cout << endl << "==========================================";

    // 打印每个月
    for (int i = 1; i <= 12; i++) {
        PrintMonth(i);
    }
    return 0;
}

void PrintMonth(int month) {
    PrintHead(month);               // 打印标题
    int days = DaysOfMonth(month);  // 该月的天数
    for (int i = 1; i <= days; i++) {
        cout << setw(5) << i;
        weekDay = (weekDay + 1) % 7;
        if (weekDay == 0) {         // 打印下一个之前判断是否换行
            cout << endl;
            //cout << "     ";        // 行首空
            cout << FIRST_LINE_SPACE;
        }
    }
}

void PrintHead(int month) {
    cout << "\n\n" << setw(6) << month << "月   日   一   二   三   四   五   六" << endl;
    //cout << "     ";        // 行首空
    cout << FIRST_LINE_SPACE;// 行首空
    for (int i = 0; i < weekDay; i++) {
        cout << "     ";// 固定的setw是5
    }
}

int DaysOfMonth(int month) {
    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            return 31;// 有了return 就不需要break了
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
        case 2:
            if (IsLeapYear(year)) {
                return 29;
            } else {
                return 28;
            }
    }
    return 0;   // needless but avoid warning when compiliing
}

bool IsLeapYear(int year) {
    return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
}

// 这个计算方法没有见过
int FirstDayOfYear(int year) {
    long n;
    n = year * 365;
    for (int i = 1; i < year; i++) {// 补上所有闰年的天数
        n += IsLeapYear(i);
    }
    return n %= 7;
}