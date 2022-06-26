/**
 * @file 076.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

int main() {
    int s = 0, k;

    for (k = 7; k >= 0; k-- ) {
        switch(k) {
            case 1:
            case 4:
            case 7: s += k; break;
            case 2:
            case 3:
            case 6: break;
            case 0:
            case 5: s++; break;
        }
    }
    
    cout << "s=" << s << endl;
    return 0;
}