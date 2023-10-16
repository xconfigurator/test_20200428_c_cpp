/**
 * @file 04.c
 * @author your name (you@domain.com)
 * @brief 
 * clock()
 * 
 * @version 0.1
 * @date 2023-10-16
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>
#include <time.h>

void delay(double second);

int main() {
    double input;
    printf("Enter a second to delay:");
    scanf("%lf", &input);
    delay(input);
    return 0;
}

void delay(double second) {
    clock_t start = clock();
    printf("Now let's test %f second delay \n", second);
    clock_t now = clock();
    while (((double) (now - start)) / CLOCKS_PER_SEC < second) {
        now = clock();
        printf("You delay %f second.\n", ((double)(now - start)) / CLOCKS_PER_SEC);
    }
}