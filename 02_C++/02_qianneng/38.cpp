/*
共享打印机的互斥使用 P80

假定有一个环境，在这个环境中，有如下所示的类PR1和PR2分享一个打印机。
而且假定你的程序的其他部分必须知道这两类中任意一类的对象什么时候使用打印机。
建立一个函数InUse(),当打印机被使用的时候，返回正确，否则返回错误。
使InUse()函数成为PR1和PR2的友元。

关于友元的说明：
友元不是成员，不能用对象名来限制。
友元不能被继承，但是友元函数可以是不止一个类的友元。

程序说明：
注意“前引用”这种语法现象。 
*/
#include <iostream>
using namespace std;

class PR2;  // 前引用

class PR1 {
public:
    PR1() {printing = 0;}
    void SetPrint(int status) {printing = status;}
    friend int InUse(PR1& o1, PR2& o2);// 书上的程序是传值，这里改成传引用。
private:
    int printing;
};

class PR2 {
public:
    PR2() {printing = 0;}
    void SetPrint(int status) {printing = status;}
    friend int InUse(PR1& o1, PR2& o2);// 书上的程序是传值，这里改成传引用。
private:
    int printing;
};

int InUse(PR1& o1, PR2& o2) {
    if (o1.printing || o2.printing) {
        return 1;
    } else {
        return 0;
    }
}

int main(int argc, char const *argv[]) {
    PR1 p1;
    PR2 p2;

    if (!InUse(p1, p2)) {
        cout << "Printer idle" << endl;
    }

    cout << "Setting p1 to printing ..." << endl;
    p1.SetPrint(1);
    if (InUse(p1, p2)) {
        cout << "Now, printer in use." << endl;
    }

    cout << "Turn of p1 ..." << endl;
    p1.SetPrint(0);
    if (!InUse(p1, p2)) {
        cout << "Printer idle" << endl;
    }

    cout << "Turn on p2..." << endl;
    p2.SetPrint(1);
    if (InUse(p1, p2)) {
        cout << "Now, printer in use." << endl;
    }

    return 0;
}