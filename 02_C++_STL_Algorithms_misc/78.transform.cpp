/**
 * @file 78.transform.cpp
 * @author your name (you@domain.com)
 * @brief 将一个容器中的内容搬运到另外一个容器中（注意搬运的目标容器必须提前开辟空间！）
 * 参考：
 * https://en.cppreference.com/w/cpp/algorithm/transform
 * 视频：
 * https://www.bilibili.com/video/BV1et411b73Z/?p=244&spm_id_from=pageDriver&vd_source=8bd7b24b38e3e12c558d839b352b32f4
 * 
 * @version 0.1
 * @date 2023-07-20
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class TransformHandler {
public:
    int operator() (const int & val) {
        return 10 * val;
    }
};

class ForEachHandler {
public:
    void operator() (const int & val) {
        cout << val << "\t";
        return;
    }
};

void PrintVector(const vector<int> & v) {
    for (auto e : v) {
        cout << e << "\t";
    }
    cout << endl;
}

int main(int argc, char const *argv[]) {
    vector<int> v_src = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> v_dest;
    v_dest.resize(v_src.size());// 这一步很关键！不然的话会运行期异常。
    transform(v_src.begin(), v_src.end(), v_dest.begin(), TransformHandler());
    
    // 输出方式1：
    //PrintVector(v_src);
    //PrintVector(v_dest);

    // 输出方式2：
    for_each(v_src.begin(), v_src.end(), ForEachHandler());
    cout << endl;
    for_each(v_dest.begin(), v_dest.end(), ForEachHandler());

    return 0;
}