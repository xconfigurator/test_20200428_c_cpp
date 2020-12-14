#include <iostream>
using namespace std;

// 应用题 08

int f(int n) {
    int i, j, k, sum = 0;
    for (i = 1; i < n + 1; i++) {
        for (j = n; j > i -1; j--) {
            for (k = 1; k < j + 1; k++) {
                sum ++;
            }
        }
        cout << "sum = " << sum << endl;
    } 
}

int main(int argc, char const *argv[]) {
    // cout << "hey" << endl;
    f(5);
    return 0;
}