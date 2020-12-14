/*
p72
长度可变的整形数组类

说明：
编程练习好实例，多练！

@author: liuyang copy from guowei
@since: 2020/12/14
*/

#include <iostream>
#include <cstring>
using namespace std;

class CArray {
    int size; // 数组元素的个数
    int *ptr; // 指向动态分配的数组
public:
    CArray(int s = 0);  // s代表数组元素的个数
    CArray(CArray & a); // 复制构造函数（深拷贝, 通过复制构造函数与重载=运算符配合完成）
    virtual ~CArray();  // 清理！
    friend ostream & operator << (ostream & os, const CArray & a); // toString()
    CArray & operator = (const CArray & a); // 对象复制（深拷贝, 通过复制构造函数与重载=运算符配合完成）

    // 返回数组元素长度
    int length() const {    
        return size;
    }
    // 注意返回值的类型是 int &
    // 实现功能：a[i] = 4;和 n = a[i];
    int & operator[](int i) {
        return ptr[i];
    }
    // 用于在数组尾部添加一个元素v
    void push_back(int v);  
};

CArray::CArray(int s):size(s) {
    if (0 == s) {
        ptr = NULL;
    } else {
        ptr = new int[s];
    }
}

CArray::CArray(CArray & a) {// 深拷贝
    // 对方空
    // if (!a.ptr) {
    if (NULL == a.ptr) {
        ptr = NULL;
        size = 0;
        return;
    }
    // 对方不空
    ptr = new int[a.size];
    memcpy(ptr, a.ptr, sizeof(int) * a.size);
    size = a.size;
}

CArray::~CArray() {
    if (ptr != NULL) {
        delete[] ptr;
    }
}

ostream & operator << (ostream & os, const CArray & a) {
    if (0 == a.size || NULL == a.ptr) {
        return os;
    }
    for (int i = 0; i < a.size; ++i) {
        os << a.ptr[i] << " ";
    }
    return os;
}

CArray & CArray::operator = (const CArray & a) {// 深拷贝
    // a = a
    if (ptr == a.ptr) {
        return *this;
    }
    // 对方空
    if (NULL == a.ptr) {
        if (ptr != NULL) {
            delete[] ptr;
        }
        ptr = NULL;
        size = 0;
        return *this;
    }
    // 对方不空
    // 对方长度超过自己,则需要申请新的空间。
    if (size < a.size) {
        if (ptr != NULL) {
            delete[] ptr;
        }
        ptr = new int[a.size];
    }
    memcpy(ptr, a.ptr, sizeof(int) * a.size);
    size = a.size;
    return *this;
}

void CArray::push_back(int v) {
    // 一个效率低但是好写的版本
    // 描述：每次添加元素都重新申请空间并拷贝，然后销毁原有空间。
    int * tmpPtr = new int[size + 1];
    memcpy(tmpPtr, ptr, sizeof(int) * size);
    delete[] ptr;
    ptr = tmpPtr;
    ptr[size ++] = v; // 加入新元素
}

int main(int argc, char const *argv[]) {
    CArray a;
    for (int i = 0; i < 5; ++i) {
        a.push_back(i);
    }
    CArray a2, a3;
    
    // 测试 = 
    a2 = a;
    cout << a2 << endl;
    a2 = a3;    // 清空a2
    cout << a2 << endl;

    // 测试[]
    a[3] = 100;
    cout << a << endl;

    return 0;
}