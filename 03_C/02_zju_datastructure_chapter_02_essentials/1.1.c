/**
 * @file 1.1.c
 * @author your name (you@domain.com)
 * @brief 简单计算器
 * p14 习题1
 * @version 0.1
 * @date 2022-08-07
 * 
 * @copyright Copyright (c) 2022
 * 
输入示例：
1+2*10-10/2=
15=
32/0=
3%4=
 */
 #include <stdio.h>

 int main() {
    int Sum, X;
    char Op;
    scanf("%d%c", &Sum, &Op);
    /* 输入第一个操作数以及操作符; 由于输入无空格，故无需特别处理 */
    while(Op != '=') {
      scanf("%d", &X);     /* 输入下一个操作数 */
      switch(Op) {
         case '+':
            Sum += X;
            break;
         case '-':
            Sum -= X;
            break;
         case '*':
            Sum *= X;
            break;
         case '/':
            if (X == 0) {
               printf("ERROR\n");
               return 0;
            }
            Sum /= X;
            break;
         default:
            printf("ERROR\n");
            return 0;
      }
      scanf("%c", &Op);    /* 输入下一个操作符 */
    }
    printf("%d\n", Sum);   /* 打印输出 */
    return 0;
 }