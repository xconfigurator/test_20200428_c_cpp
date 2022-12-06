/**
 * @file struct_202212052351.c
 * @author your name (you@domain.com)
 * @brief 帅辉推荐的同时符合C/C++的自引用结构体示例
 * @version 0.1
 * @date 2022-12-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
#include <stdlib.h>

// 推荐的结构体使用方式！
typedef struct Point {
    int x;
    int y;
    struct Point* next;
} Point;

void showPoint(Point *p) {
    printf("(%d, %d)\n", p->x, p->y);
}

int main(int argc, char const *argv[]) {

    Point p1, p2, p3, p4, p5;
    Point *p;
    p1.x = 1; p1.y = 0;
    p2.x = 4; p2.y = 1;
    p3.x = 2; p3.y = 4;
    p4.x = 4; p4.y = 2;
    p5.x = 1; p5.y = 6;

    p1.next = &p2;
    p2.next = &p3;
    p3.next = &p4;
    p4.next = &p5;
    p5.next = NULL;

    for (p = &p1; p != NULL; p = p->next) {
        //printf("(%d, %d)\n", p->x, p->y);
        showPoint(p);
    }


    // 动态存储分配
    printf("########################################\n");
    Point *pDyna = (Point*) malloc(sizeof(Point));
    showPoint(pDyna);
    pDyna->x = 11;
    pDyna->y = 22;
    showPoint(pDyna);
    if (pDyna != NULL) {
        free(pDyna);
    }

    return 0;
}
