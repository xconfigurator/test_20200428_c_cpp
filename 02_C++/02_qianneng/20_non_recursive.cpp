/*
非递归版本 P42
2021/9/18
*/
#include <iostream>
#include <iomanip>  // setw
using namespace std;

int main(int argc, char const *argv[]) {
    int n;
    cout << "Please input n: " ;
    cin >> n;
    int aold = 1, bold = 0;// initial
    int anew, bnew;
    for (int i = 0; i <= n; i++) {

        cout << "A" << setw(2) << i << ":" << setw(6) << aold
             << "\t"
             << "B" << setw(2) << i << ":" << setw(6) << bold
             << endl;

        anew = 3 * aold + 2 * bold;
        bnew = aold + bold;
        aold = anew;
        bold = bnew;
    }
    return 0;
}