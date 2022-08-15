/**
 * @file dynamic.tsinghua.1.3.cpp
 * @author your name (you@domain.com)
 * @brief 兔子数列问题 - 不用数组递推
 * https://www.xuetangx.com/learn/THU08091000270/THU08091000270/10322319/video/17398618?channel=i.area.learn_title
 * 
 * @version 0.1
 * @date 2022-08-16
 * 
 * @copyright Copyright (c) 2022
 * 
 */
 #include <iostream>
 using namespace std;

 int main(int argc, char const *argv[]) {

    int n;
    cin >> n;

    // 定义变量
    int qian_yue, shang_yue, dang_yue;

    // 初值
    qian_yue = 1;
    shang_yue = 1;

    // 递推
    for (int i = 2; i < n; ++i) {
        dang_yue = qian_yue + shang_yue;
        qian_yue = shang_yue;
        shang_yue = dang_yue;
    }

    // 输出
    cout << dang_yue << endl;

    return 0;
 }