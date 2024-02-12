/*
p44
构造函数、析构函数和变量的生存周期

说明：
程序很短但涉及的点很多
视频讲解：
https://www.bilibili.com/video/BV1ob411q7vb?p=10

@author liyang copy form guowei
@since 2020/12/14
*/
#include <iostream>
using namespace std;

class Demo {
    int id;
public:
    Demo(int i) {
        id = i;
        cout << "id=" << id << " constructed" << endl;
    }
    ~Demo() {
        cout << "id=" << id << " destructed" << endl;
    }
};

Demo d1(1);
void Func() {
    static Demo d2(2);
    Demo d3(3);
    cout << "func" << endl;
}

int main(int argc, char const *argv[]) {
    Demo d4(4);
    d4 = 6; // 有临时对象生成
    cout << "main" << endl;
    {
        Demo d5(5);
    }
    Func();
    cout << "main ends" << endl;
    return 0;
}