/*
时间日期类 P54
构造一个TimeDate类，在类中包含一个成员函数，用来在屏幕上显示时间与日期
（提示：采用建立在标准库time.h中的标准时间与日期函数来寻找与显示日期）。
在应用程序中，当这个对象被创建的时候，当前系统统时间与系统日期被作为构造函数的参数传递给它。
*/
#include <iostream>
#include <time.h>
using namespace std;

class TimeDate {
public:
    TimeDate(time_t t);
    void Show();
private:
    time_t systime;
};

TimeDate::TimeDate(time_t t) {
    systime = t;
}


void TimeDate::Show() {
    cout << ctime(&systime);
}

int main() {
    time_t x;
    x = time(NULL); //与time(&x);效果一样
    TimeDate ob(x);
    ob.Show();
    return 0;
}
