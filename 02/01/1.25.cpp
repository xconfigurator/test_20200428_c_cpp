#include <iostream>
using namespace std;

// 数组和指针

int a[] = {1, 3, 5, 7, 9};
int *p[] = {a, a + 1, a + 2, a + 3, a + 4};

int main(int argc, char const *argv[]) {
    printf("%d\t%d\t%d\n", a[4], *(a + 2), *p[1]);
    printf("%d\t%d\t%d\n", **(p+1) + a[2], *(p+4)-*(p+0), *(a+3)%a[4]);

    // liuyang begin
    cout << "*(p+1) =" << *(p+1) << endl;
    cout << "**(p+1) =" << **(p+1) << endl;
    cout << "a[2] ="<< a[2] << endl;

    cout << "*(p+4)=" << *(p+4) << endl;
    cout << "*(p+0)" << *(p+0) << endl;
    
    cout << "*(a+3) = " << *(a+3) << endl;
    cout << "a[4] =" << a[4] << endl;
    // liuyang end
    return 0;
}