#include <iostream>
using namespace std;

// 0 % 2 == 0
int main(int argc, char const *argv[]) {
  int i;
  for (i = 0; i <= 5; i++) {
    if (i % 2)
      printf("**");
    else
      continue;
    printf("#");
  }
  printf("$\n");
  return 0;
}