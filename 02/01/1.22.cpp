#include <iostream>
using namespace std;

// 注意2 % 3 == 2
int main() {
  int i = 1;
  while (i <= 15) {
    i++;
    if (i % 3 != 2) {
      continue;
    } else {
      cout << "i=" << i << endl;
    }
  }
  return 0;
}