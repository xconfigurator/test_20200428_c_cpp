/**
 * @file 110.cpp
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

class myclass {
private:
    int x, y;
    static long sum;
public:
    myclass(int a, int b)   {x = a; y = b;}
    void getxy() {
        sum *= x * y;
        cout << "sum=" << sum << endl;
    }
};

long myclass::sum = 1;

int main(int argc, char const *argv[]) {
    myclass ob1(1, 2);      ob1.getxy();
    myclass ob2(3, 4);      ob2.getxy();
    myclass ob3(5, 6);      ob3.getxy();
    return 0;
}