/**
 * @file 042.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-23
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

class Set {
    int x[100], PC;
public:
    Set() { PC = 0; }
    void Add(int n) {
        if (PC >= 100) return;
        for (int i = 0; i < PC; i++) {
            if (x[i] == n) return;
        }
        x[PC++] = n;
    }
    void Print() {
        for (int i = 0; i < PC; i++) {
            cout << x[i] << " ";
        }       
    }
};

int main() {
    Set B;
    for (int i = 0; i < 5; i++) {
        B.Add(2 * i - 3);
    }
    B.Print();
    cout << endl;

    for (int j = 2; j < 6; j++) {
        B.Add(j);
    }
    B.Print();
    cout << endl;
    return 0;
}