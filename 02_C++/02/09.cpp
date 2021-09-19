/*
统计学生成绩 P23

全局二维数组表示5个学生4门功课的成绩，通过函数调用求出：
（1）输入每个学生的成绩。
（2）求出每个学生的总分，并输出。
（3）求出每门功课的平均分，并输出。
*/
#include <iostream>
using namespace std;

const int n = 5; // 5行
const int m = 4; // 4列
// 运行时从从控制台输入
//int a[n][m];
// 直接初始化二维数组示例
int a[n][m] = {
        {78, 88, 90, 91}
        ,{68, 77, 68, 91}
        ,{82, 77, 67, 68}
        ,{70, 61, 66, 54}
        ,{50, 60, 71, 73}
    };

void input();
void total();
void avg();

int main(int argc, char const *argv[]) {
    //input();// 若使用直接初始化，则注释掉这一行。以及注释掉input()函数
    total();
    avg();
    return 0;
}

void input() {
    // 二维数组输入样例
    // 20210919 OK
    /*
    cout << "请输入5组各4门功课成绩" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    cout << endl;
    */
}

void total() {
    int sum;
    for (int i = 0; i < n; i++) {
        sum = 0;
        for (int j = 0; j < m; j++) {
            sum += a[i][j];// 遍历一行
        }
        cout << "第" << (i + 1) << "个学生总分：" << sum << endl;
    }
    cout << endl;
}

void avg() {
    int sum;
    for (int i = 0; i < m; i++) {
        sum = 0;
        for (int j = 0; j < n; j++) {
            sum += a[j][i];// 注意下标 遍历一列
        }
        cout << "第" << (i + 1) << "门学科平均成绩：" << double(sum) / n << endl;
    }
}