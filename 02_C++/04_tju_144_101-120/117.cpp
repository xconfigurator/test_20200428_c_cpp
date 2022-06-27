/**
 * @file 117.cpp
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

static int datb[][13] = {
    {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};

class date {
    int y, m, d;
public:
    date(int yy, int mm, int dd) {
        y = yy;
        m = mm;
        d = dd;
    }
    int display();
};

int date::display() {
    int *p, *i, j, sum;
    p = datb[0];
    sum = d;
    j = y % 4 == 0 && y % 100 != 0 || y % 400 == 0;
    if (j) {
        p = datb[1];
    } 
    i = p + m;
    while (p < i) {
        sum += *p++;
    }
    return sum;
}

int main(int argc, char const *argv[]) {
    date d1(2016, 5, 1);
    cout << d1.display() << endl;

    date d2(2015, 10, 1);
    cout << d2.display() << endl;
    return 0;
}

// 117 背 算闰年