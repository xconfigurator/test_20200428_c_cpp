/**
 * @file 040.cpp
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

class AA {
public:
    AA(int i, int j) {
        A = i;
        B = j;
        cout << "Constructing(" << A << "," << B << ").\n";
    }
    ~AA() {
        cout << "Dconstructing(" << A << "," << B << ").\n";
    }
    void print() {
        cout << A << "," << B << endl;
    }
private:
    int A, B;
};

int main(int argc, char const *argv[]) {
    AA *a1, *a2;
    AA a3(3, 4), a4(7, 8);
    a1 = new AA(1, 2);
    a2 = new AA(5, 6);

    a1->print();
    a3.print();
    a2->print();
    a4.print();

    delete a1;
    delete a2;
    
    return 0;
}