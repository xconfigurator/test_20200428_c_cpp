#include <iostream>
using namespace std;

int main(int arc, char const *argv[]){
    char a = 'a';
    cout << "猜" << endl;
    for (;;) {
        cin >> a;
        if (a == 'Q' || a == 'q') {
            cout << "猜对了" << endl;
            break;
        } else {
            cout << "继续猜" << endl;
        }
    }
    return 0;
}