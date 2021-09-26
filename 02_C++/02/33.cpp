/*
静态局部对象 P69

写出下面程序的运行结果：

注意：一共输出三句，第一句输出！

输出：
DoNothing object constructed with a value of10
In function fn() with i = 10
In function fn() with i = 20
*/
#include <iostream>
using namespace std;

class DoNothing {
public:
    DoNothing(int initial) {
        cout << "DoNothing object constructed with a value of" << initial << endl;
    }
};

void fn(int i) {
    static DoNothing dn(i);
    cout << "In function fn() with i = " << i << endl;
}

int main(int argc, char const *argv[]) {
    fn(10);
    fn(20);
    return 0;
}