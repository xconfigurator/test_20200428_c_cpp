/*
4.4.c 基于switch语句的译码器
给定一个前缀码表
a   1
b   01
c   001
又知有一个0/1字符串为："001011101001011001",编写一个C程序，按照给定的前缀码表为该字符串译码。

说明：
前缀码是一种无二异性的编码，因此可以作为一种编码体制被广泛应用。

@since 2021/2/15
*/
#include "stdio.h"
void Decode(char *str, int n);

int main() {
  char str[19] = "001011101001011001";
  Decode(str, 18);
  // getchar();
}

void Decode(char *str, int n) {
  int i = -1;
  while (i < n) {
    switch (str[++i]) {
    case '1':
      printf("a");
      break;
    case '0':
      switch (str[++i]) {
      case '1':
        printf("b");
        break;
      case '0':
        switch (str[++i]) {
        case '1':
          printf("c");
          break;
        }
        break;
      }
      break;
    }
  }
  i++;
}