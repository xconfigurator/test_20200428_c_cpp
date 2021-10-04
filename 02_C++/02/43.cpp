/*
访问权限 P90

下列程序中哪些数据可访问，哪些不可访问。
具体的可以翻一下P92也的注释。不过大概知道这个结果就好。
*/
#include <iostream>
using namespace std;

class Base {
public:
    int m1;
protected:
    int m2;
private:
    int m3;
};

class PrivateClass: private Base {
public:
    void Test() {
        m1 = 1;
        m2 = 2;
        //m3 = 3;// error
    }
};

class DrivedFromPri: public PrivateClass {
public:
    void Test() {
        //m1 = 1;// error
        //m2 = 2;// error
        //m3 = 3;// error
    }
};

class ProtectedClass: protected Base {
public:
    void Test() {
        m1 = 1;
        m2 = 2;
        //m3 = 3;// error
    }
};

class DerivedFromPro: public ProtectedClass {
public:
    void Test() {
        m1 = 1;
        m2 = 2;
        //m3 = 3;// error
    }
};

class PublicClass: public Base {
public:
    void Test() {
        m1 = 1;
        m2 = 2;
        //m3 = 3;// error
    }
};

class DerivedFromPub: public PublicClass {
public:
    void Test() {
        m1 = 1;
        m2 = 2;
        //m3 = 3;// error
    }
};

int main(int argc, char const *argv[]) {
    PrivateClass priObj;
    //priObj.m1 = 1;// error
    //priObj.m2 = 2;// error
    //priObj.m3 = 3;// error
    
    ProtectedClass proObj;
    //proObj.m1 = 1;// error
    //proObj.m2 = 2;
    //proObj.m3 = 3;
    
    PublicClass pubObj;
    pubObj.m1 = 1;
    //pubObj.m2 = 2;// error
    //pubObj.m3 = 3;// error

    return 0;
}