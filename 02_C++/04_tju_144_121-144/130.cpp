/**
 * @file 130.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

class date {
private:
    int y, m, d;
public:
    date(int yy, int mm, int dd)    {y = yy; m = mm; d = dd;}
    date()                          {y = 0; m = 0; d = 0;}
    void disp()                     {cout << y << "-" << m << "-" << d << endl;}
    friend date operator+(date &d2, int day);
};

date operator+(date &d2, int day) {
    date dy;
    dy.y = d2.y;
    dy.m = d2.m;
    day += d2.d;
    while (day > days[dy.m - 1]) {
        day -= days[dy.m - 1];
        if (++dy.m == 13) {
            dy.m = 1;
            dy.y++;
        }
    }
    dy.d = day;
    return dy;
}

int main(int argc, char const *argv[]) {
    date da(2006, 3, 1), db, dc;

    db = da + 100;
    db.disp();
    dc = da + 400;
    dc.disp();
    return 0;
}

// 130 背 日期加法