/**
 * @file vector_202212071842.cpp
 * @author your name (you@domain.com)
 * @brief http://c.biancheng.net/view/6749.html
 * @version 0.1
 * @date 2022-12-07
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    //初始化一个空vector容量
    vector<char>value;
    //向value容器中的尾部依次添加 S、T、L 字符
    value.push_back('S');
    value.push_back('T');
    value.push_back('L');
    //调用 size() 成员函数容器中的元素个数
    printf("元素个数为：%d\n", value.size());
    //使用迭代器遍历容器
    for (auto i = value.begin(); i < value.end(); i++) {
        cout << *i << " ";
    }
    cout << endl;
    //向容器开头插入字符
    value.insert(value.begin(), 'C');
    cout << "首个元素为：" << value.at(0) << endl;


    // liuyang test begin
    cout << "liuyang test 看看下标从几开始？" << endl;
    cout << value.size() << endl;
    for (int i = 0; i < value.size(); ++i) {
        cout << i << " " << value[i] << endl;
    }
    // liuyang test end
    return 0;
}