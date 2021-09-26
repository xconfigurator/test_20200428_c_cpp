/*
二维数组类 P70

编写程序，建立一个5*6的整数二维安全数组。演示它如何工作。

注：题目中所谓“安全”就是处理数组下标越界。
*/
#include <iostream>
#include <stdlib.h>
using namespace std;

class Array {
public:
    Array(int i, int j);
    virtual ~Array() {delete[] p;};
    int& Access(int i, int j);
private:
    int isize, jsize;
    int *p;
};

Array::Array(int i, int j) {
    p = new int[i * j];
    if (!p) {
        cout << "Allocation error" << endl;
        exit(1);
    }
    isize = i;
    jsize = j;
}

int& Array::Access(int i, int j) {
    if (i < 0 || i >= isize || j < 0 || j >= jsize) {
        cout << "Bounds error!" << endl;
        exit(1);
    }
    return p[i *jsize + j]; // return reference to p[i][j]
}

int main(int argc, char const *argv[]) {
    int width = 5, length = 6;
    Array a(width, length);

    // assign values
    for (int i = 0; i < width; i++) {
        for (int j = 0; j < length; j++) {
            a.Access(i, j) = i + j;
        }
    }

    // output
    for (int i = 0; i < width; i++) {
        for (int j = 0; j < length; j++) {
            cout << a.Access(i, j) << " ";
        }
        cout << endl;
    }

    return 0;
}
