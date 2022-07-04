#include <iostream>
#include <string>
using namespace std;

string Reverse_Words(const string& str) {
    string restr = str;
    int len = str.size();
    int i, j, k = 0;

    // 字符串整体翻转
    for (i = 0, j = len - 1; i < j; ++i, --j) {
        swap(restr[i], restr[j]);
    }

    while (k < len) {
        i = j = k;

        // 寻找反转后单词结束位置
        //while (restr[j] != ' ' && restr[j] != '') ++j; // error: empty character constant
        while (restr[j] != ' ') ++j;// 20220704 还有问题！！

        k = j + 1;
        --j;

        // 翻转单词
        for (; i < j; ++i, --j) {
            swap(restr[i], restr[j]);
        }
    }

    return restr;
}

int main(int argc, char const *argv[]) {
    string str = "here is tju";
    cout << Reverse_Words(str) << endl;
    return 0;
}