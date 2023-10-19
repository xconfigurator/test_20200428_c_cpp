/**
 * @file 03.c
 * @author your name (you@domain.com)
 * @brief 
 * 极坐标转直角坐标
 * x = r * cos A
 * y = r * sin A
 *
 * 输入：
 * 1 45
 * 输出：
 * 0.707388 0.706825
 * 
 * @version 0.1
 * @date 2023-10-14
 *       2023-10-16
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>
#include <math.h>
#define PI 3.14

// 极坐标
typedef struct {
    double length;
    double angle;// 角度。 C的三角函数参数需要的是弧度。
} polar;

// 直角坐标
typedef struct {
    double x;
    double y;
} rectangular;

rectangular p_to_r(polar pc);

int main() {
    polar pc;
    scanf("%lf %lf", &pc.length, &pc.angle);
    // 角度转为弧度
    pc.angle = pc.angle * (PI / 180.0);
    // 坐标系转换
    rectangular r = p_to_r(pc);
    printf("%lf %lf\n", r.x, r.y);
    return 0;
}

rectangular p_to_r(polar pc) {
    rectangular rect;
    rect.x = pc.length * cos(pc.angle);
    rect.y = pc.length * sin(pc.angle);
    return rect;
}