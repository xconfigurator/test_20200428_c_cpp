/*
字符串的操作符重载 p85

建立类StrType，允许下面的操作符类型：
1. 使用 + 操作符的字符串连接：
2. 使用 = 操作符的字符串赋值：
3. 使用 <、>与==操作符的字符串比较。
可以自由使用定长字符串。
*/
#include <iostream>
#include <string.h>
using namespace std;

class StrType {
public:
    StrType() { *s = '\0';}
    StrType(char* p) {strcpy(s, p);}
    char* Get() {return s;}
    StrType& operator + (StrType& s2);
    StrType& operator = (StrType& s2);
    int operator < (StrType& s2);
    int operator > (StrType& s2);
    int operator == (StrType& s2);
private:
    char s[80];
};

StrType& StrType::operator + (StrType& s2) {
    // 书上写的有问题！不能这样！
    /*
    StrType t;
    strcpy(t.s, s);
    strcat(t.s, s2.s);
    return t;
    */
    StrType *t = new StrType();
    strcpy(t->s, s);
    strcat(t->s, s2.s);
    return *t;
}

StrType& StrType::operator = (StrType& s2) {
    strcpy(s, s2.s);// gcc：如果+中返回局部变量，则这个方法就会出现：Segmentation fault
    return *this;
}

int StrType::operator < (StrType& s2) {
    return strcmp(s, s2.s) < 0;
}

int StrType::operator > (StrType& s2) {
    return strcmp(s, s2.s) > 0;
}

int StrType::operator == (StrType& s2) {
    return strcmp(s, s2.s) == 0;
}

int main(int argc, char const *argv[]) {
    StrType o1("Hello"), o2("There"), o3;
    cout << "o1 = " << o1.Get() << endl;
    cout << "o2 = " << o2.Get() << endl;
    o3 = o1 + o2;
    cout << "o3 = o1 + o2 = " << o3.Get() << endl;

    o3 = o1;
    cout << "o1 = o3" << endl;
    if(o1 == o3) cout << "o1 equals o3" << endl;
    
    if (o1 > o2) cout << "o1 > o2" << endl;

    if (o1 < o2) cout << "o1 < o2" << endl;
    return 0;
}