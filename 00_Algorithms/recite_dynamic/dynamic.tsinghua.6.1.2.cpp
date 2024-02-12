/**
 * @file dynamic.tsinghua.1.2.cpp
 * @author your name (you@domain.com)
 * @brief 兔子数列问题
 * https://www.xuetangx.com/learn/THU08091000270/THU08091000270/10322319/video/17398616?channel=i.area.learn_title
 * total(i) = total(i - 2) + total(i - 1)
 * 
 * @version 0.1
 * @date 2022-08-15
 * 
 * @copyright Copyright (c) 2022
 * 
 */
 #include <iostream>
 using namespace std;

 int main(int argc, char const *argv[]) {

    int n;
    cin >> n;

    // 定义数组
    int total[12];

    // 设定初值
    total[0] = 1;
    total[1] = 1;

    // 递推
    for (int i = 2; i < n; ++i) {
        total[i] = total[i - 2] + total[i - 1];
    }

    // 输出总数
    cout << total[n - 1] << endl;

    return 0;
 }