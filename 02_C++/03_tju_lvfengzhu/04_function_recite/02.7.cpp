/**
 * @file 02.7.cpp
 * @author your name (you@domain.com)
 * @brief 
 *
 * 汇总5个学生的4门功课成绩，输出
 * 1. 每个学生的总分。 2. 每门课程的平均分。 3. 总分最高的学生的姓名和总分数。
 * 书上的参考实现不用再看了，一坨大便。
 *
 * @version 0.1
 * @date 2023-10-21
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;

int sum_score(int scores[], int n);// 
double avg_score(int scores[], int n);// 
int max_score(int a[], int n, int& maxIdx);// 

int main() {
    char name[][10] = {
        "Ma", "Wang", "Li", "Huang", "Kang"
    };

    int score[][4] = {
        {89, 86, 75, 90},
        {91, 82, 75, 80},
        {78, 93, 85, 80},
        {90, 79, 95, 85},
        {68, 75, 81, 83}
    };
    
    int a[5];
    
    cout << "每个学生功课的总分数：";
    for (int i = 0; i < 5; i++) {
        cout << (a[i] = sum_score(score[i], 4)) << " ";
    }
    cout << endl;
    
    cout << "每个学生功课的平均成绩：";
    for (int i = 0; i < 5; i++) {
        cout << avg_score(score[i], 4) << " ";
    }
    cout << endl;
    
    int maxIdx = 0, maxScore;
    maxScore = max_score(a, 5, maxIdx);
    cout << "学生姓名：" << name[maxIdx] << "\t" << "最高分:" << maxScore << endl;
    
    return 0;
}

int sum_score(int scores[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += scores[i];
    }
    return sum;
}

double avg_score(int scores[], int n) {
    return (double) sum_score(scores, n) / n;
}

int max_score(int a[], int n, int& maxIdx) {
    int maxScore = 0;
    maxIdx = 0;
    for (int i = 0; i < n; i++) {
        if (maxScore < a[i]) {
            maxScore = a[i];
            maxIdx = i;
        }
    }
    return maxScore;
}