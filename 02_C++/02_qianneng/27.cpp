/*
计时类 P55
建立Watch类，用来效仿秒跟踪消逝的时间。
用构造函数将消逝时间的初值置为零。提供两个成员函数Start()与Stop(),分别打开与关闭计时器。
在类中包含一个Show()的成员函数，显示消逝的时间（以秒为单位）。
并且扩展你的结果,用Watch提供无参构造函数与重载版本，该重载版本用来接受形式如标准库函数clock()返回行驶的系统时间。
*/
#include <iostream>
#include <time.h>
#include <conio.h>
using namespace std;

class Watch {
public:
    Watch();
    Watch(clock_t);
    void Start();
    void Stop();
    void Show();
private:
    double begin;
    double end;
};

Watch::Watch() {
    begin = end = 0.0;
}

Watch::Watch(clock_t t) {
    cout << "begin..." << endl;
    begin = (double) t / CLK_TCK; // per_second
    end = 0.0;
}

void Watch::Start() {
    cout << "begin..." << endl;
    begin = (double) clock() / CLK_TCK;
}

void Watch::Stop() {
    end = (double) clock() / CLK_TCK;
    Show();
}

void Watch::Show() {
    cout << "stop. \nElapse time:" << (end - begin) << "秒" << endl;
}

int main() {
    Watch s1;
    s1.Start();
    getch();// 等几秒就显示几秒
    s1.Stop();

    // Create object using initial value
    Watch s2(clock());
    getch();// 等几秒就显示几秒
    s2.Stop();
    return 0;
}