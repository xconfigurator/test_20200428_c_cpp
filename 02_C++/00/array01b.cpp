#include <iostream>
using namespace std;

const int N = 10;

// 测试二维数组初始化
int main() {
    int arr[N][N] = {0};
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << arr[i][j] << "\t"; 
        }
        cout << endl;
    }
    return 0;
}