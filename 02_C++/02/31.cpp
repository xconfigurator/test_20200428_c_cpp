/*
图书卡片类 P67
2021/9/18

建立一个被称为Card的类，用来保存图书馆卡片分类记录。
用这个类存储书的题目、作者和馆中拥有的数量。
其中题目与作者以字符串的形式保存，书的数量为证书。
公共成员函数Store()存储书的信息，公共成员函数Show()显示这些信息。

本题目就是练了一下strncpy
*/
#include <iostream>
#include <string.h> // 注意：不是<stirng>
using namespace std;

class Card {
public:
    Card(char* t, char* name, int num);
    void Show();
private:
    char title[80];     // book title
    char author[40];    // author
    int number;         // number in library
};

Card::Card(char* t, char* name, int num) {
    strncpy(title, t, sizeof(title));// ？？ 这样指定对么？
    title[sizeof(title) / sizeof(*title) - 1] = '\0';
    strncpy(author, name, sizeof(author));
    author[sizeof(author) / sizeof(* author) - 1] = '\0';
    number = num;
}

void Card::Show() {
    cout << endl;
    cout << "Title:" << title << endl;
    cout << "Author:" << author << endl;
    cout << "Number on hand:" << number << endl;
}

int main(int arc, char const *argv[]) {
    Card book1("高等数学18讲", "张宇", 2);
    Card book2("线性代数9讲", "张宇", 2);
    Card book3("概率论与数理统计9讲", "张宇", 2);

    book1.Show();
    book2.Show();
    book3.Show();
    return 0;
}