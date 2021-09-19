#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    int a, b;
    cout << "Enter two numbers：";
    cin >> a >> b;
    int min = a > b ? b : a;// 变量可以随用随定义
    int t = 0;
    for (int i = 1; i <= min; i++) {// 可以在这里定义循环变量
        if (a % i == 0 && b % i == 0) { 
            t = i;
        }
    }
    if (0 == t) {
        cout << "No greatest common divisor." << endl;
    } else {
        cout << "The greatest common divisor is " << t << endl;
    }
    return 0;
}