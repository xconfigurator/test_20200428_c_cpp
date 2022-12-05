/**
 * @file struct_202212052352.cpp
 * @author your name (you@domain.com)
 * @brief 一个符合C++语法的结构体示例
 * @version 0.1
 * @date 2022-12-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

// C++样式的结构体(基本上根Java的类的使用感觉类似了，当然这样说很不合适，哈哈。)
// C++的结构体不仅可以包含变量，还可以包含函数。基本上就是一个public类型的class
struct Point {
    int x;
    int y;
    Point* next;
};

/*
对比一下C的
typedef struct Point {
    int x;
    int y;
    struct Point* next;
} Point;
*/

void showPoint(Point *p) {
    //printf("(%d, %d)\n", p->x, p->y);
    cout << "(" << p->x << ", " << p->y << ")" << endl;
}

int main(int argc, char const *argv[]) {

    // 使用方法并无差别
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
        //cout << "(" << p->x << ", " << p->y << ")" << endl;
        showPoint(p);
    }

    // 动态存储分配
    //printf("########################################\n");// 
    cout << "########################################" << endl;// 经测试，在DevCpp中，这个显示正常。可能是VSCode的问题。
    /*
    Point *pDyna = (Point*) malloc(sizeof(Point));
    showPoint(pDyna);
    pDyna->x = 11;
    pDyna->y = 22;
    showPoint(pDyna);
    if (pDyna != NULL) {
        free(pDyna);
    }
    */
    Point *pDyna = new Point;
    showPoint(pDyna);
    pDyna->x = 11;
    pDyna->y = 22;
    showPoint(pDyna);
    if (pDyna != NULL) {
        delete pDyna;
    }

    return 0;
}