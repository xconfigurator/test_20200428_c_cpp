/**
 * @file oj_io_string_03_cin_line.cpp
 * @author liuyang
 * @brief 读一行 (根据郭炜教程补充)
 * 
 * 核心就这两行
 * char s[MAX_SIZE];
 * cin.getline(s, MAX_SIZE);
 * 或
 * cin.getline(s, sizeof(s));
 * 
 * 小结：
 * 读一行(包括空格): gets, cin.getline(char buf[], int bufSize), getline(cin, [string类]);
 * scanf、cin读到空格就停止。
 * gets这个函数，貌似不同编译链会有各种小别扭。
 * 
 * @version 0.1
 * @date 2021-12-01
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
using namespace std;

const int MAX_SIZE = 4;             // 字符串数组最大容量， 尝试以下4、9、等值。试验输入 a b c d e f g
const int PRINT_SIZE = MAX_SIZE - 1;// 可以给个20，看看越界以后会有啥情况

int main(int argc, char const *argv[]) {
    // 读一行
    cout << "读一行：";
    char s[MAX_SIZE];
    for (int i = 0; i < MAX_SIZE; ++i) {
		s[i] = '\0';
	}
    //cin.getline(s, MAX_SIZE);// 读入一行，且不会越界。注意getline保证读入的行不会超过bufSize - 1，故传参的时候直接给MAX_SIZE即可保证不越界。
    // 行末的回车换行不会写入buf，但是会从输入流中去掉。这个与gets的行为一致。
    // 总结cin.getline(s, MAX_SIZE); 的行为就是最多读入MAX_SIZE - 1个字符到s中。
    cin.getline(s, sizeof(s));
    cout << s << endl;
    for (int i = 0; i <= PRINT_SIZE; ++i) {
		cout << i << ":" << (int)s[i] << endl;
	}
    return 0;
}