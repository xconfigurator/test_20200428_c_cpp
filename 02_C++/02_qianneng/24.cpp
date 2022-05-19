/*
字符串拷贝 P51
2021/9/18

实现字符串库函数strcpy()。其原型为：
strcpy(char* str1, const char* str2);
*/
#include <iostream>
using namespace std;

char* strcpy(char* dest, const char* src);

int main(int argc, char const *argv[]) {
    char buffer[20];
    char* retstrcpy = strcpy(buffer, "hello, strcpy");
    cout << buffer << endl;
    cout << retstrcpy << endl;
    return 0;
}

char* strcpy(char* dest, const char* src) {
    char* ret = dest;// 202109181315 实测 这样做是必须的！
    while (*dest ++ = *src ++);
    //return dest;// 这样行么？ 答：不可以！
    return ret;// 这样才可以
}