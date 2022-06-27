/**
 * @file 106.cpp
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

class TC {
private:
    double lead1, lead2, total;
    int p1, p2;
public:
    TC()                {p1 = 15; p2 = 20;}
    TC(int x, int y)    {p1 = x; p2 = y;}
    void datap() {
        cin >> lead1 >> lead2;
        total = p1 * lead1 + p2 * lead2;
    }
    void display() {
        cout << "total=" << total << endl;
    }
};

int main(int argc, char const *argv[]) {
    TC A, B(6, 8);
    A.datap();          A.display();
    B.datap();          B.display();
    return 0;
}

// 输入 3 4
// 输入 10 20