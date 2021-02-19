/*
p47
静态成员（静态成员变量和静态成员函数）

说明：
1. 全类就一份
2. 关于静态成员变量：
    必须在定义类的文件中对静态成员变量进行一次声明或初始化。否则编译能通过，链接会报错。
    建议：若业务逻辑要求构造函数中需要更改静态变量，则总应该同时提供复制构造函数完成对该静态变量同样的操作。
3. 关于静态成员函数：
    不能访问非静态成员变量。不能调用非静态成员函数。
4. sizeof不会计算静态成员变量存储空间。

@author liyang copy form guowei
@since 2020/12/14
*/
#include <iostream>
using namespace std;

class CRectangle {
private:
    int w, h;
    static int totalArea;
    static int totalNumber;
public:
    CRectangle(int w_, int h_); 
    CRectangle(CRectangle & r); // 总要提供复制构造函数！
    virtual ~CRectangle();
    static void PrintTotal();
};

// 注意！必须在定义类的文件中对静态成员变量进行一次声明或者初始化，否则编译能通过，链接会报错。
int CRectangle::totalArea = 0;
int CRectangle::totalNumber = 0;

CRectangle::CRectangle(int w_, int h_) {
    w = w_;
    h = h_;
    totalNumber++;          // 对象数量
    totalArea += w * h;     // 面积
}

// 注意！总要提供复制构造函数！否则会有奇怪的问题（分析见课本）。
CRectangle::CRectangle(CRectangle & r) {
    w = r.w;
    h = r.h;
    totalNumber++;          // 对象数量
    totalArea += w * h;     // 面积
}

CRectangle::~CRectangle() {
    totalNumber--;          // 对象数量
    totalArea -= w * h;     // 面积
}

void CRectangle::PrintTotal() {
    cout << totalNumber << "," << totalArea << endl;
}

int main(int argc, char const *argv[]) {
    CRectangle r1(3, 3), r2(2, 2);
    // cout << CRectangle::totalNumber << endl; // ERROR！totalNumber是私有的。若是公有的这样可以访问。
    CRectangle::PrintTotal();
    r1.PrintTotal();
    return 0;
}