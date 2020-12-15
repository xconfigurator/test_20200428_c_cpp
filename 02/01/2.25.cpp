#include <iostream>
using namespace std;

int a[] = {2, 5, 6, 8, 10};
int *p[] = {a, a + 1, a + 2, a + 3, a + 4};

int main(int argc, char const *argv[]) {
    printf("%d\t%d\t%d\n", a[4], *(a + 2), *p[1]);
    printf("%d\t%d\t%d\n", **(p + 1) + a[2],*(p + 4) - *(p + 0), *(a + 3)% a[4]);
    return 0;
}