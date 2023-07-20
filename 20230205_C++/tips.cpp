/**
 * @file tips.cpp
 * @author your name (you@domain.com)
 * 
 * C++ 刷题常用技巧
 * https://www.bilibili.com/video/BV1pv4y1w7GY/?spm_id_from=333.788&vd_source=8bd7b24b38e3e12c558d839b352b32f4
 * https://www.yuque.com/jackyao/ifeq8i/vyigt9?#%20%E3%80%8AC/C++%E5%88%B7%E9%A2%98%E5%B8%B8%E7%94%A8%E6%8A%80%E5%B7%A7%E3%80%8B
 * 
 * @brief C++ 刷题常用技巧
 * @version 0.1
 * @date 2023-02-05
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <string.h> // memset
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <bitset>
#include <sstream>
using namespace std;

// bitset
uint32_t reverseBits(uint32_t n) {
    string s = bitset<32>(n).to_string();
    reverse(s.begin(), s.end());
    return bitset<32>(s).to_ulong();
}

// 字符串分割
void splitStr() {
    string s = "hello world my name is liuyang";
    stringstream ss(s);
    string str;
    int cnt = 0;
    while (ss >> str) {
        cnt++;
        cout << str << endl;
    }
    cout << cnt << endl;
}

// 结构体排序
struct node14 {
    int a, b;
    // 从小到大排序
    bool operator < (const node14& node_) const {
        if (a != node_.a) {
            return a < node_.a;
        } else {
            return b < node_.b;
        }
    }
};

int main() {
    cout << "C/C++ 常用刷题技巧" << endl;

    // 1. 自带的宏常量
    int N1 = INT_MIN;
    int N2 = INT_MAX;
    const int INF = 0x3f3f3f3f;     // 通常用来替代最大值，防止运算过程中溢出
    cout << N1 << endl;

    // 2. 字符串判断函数
    char c = 'a';
    isdigit(c);     // 判断c字符是不是数字
    isalpha(c);     // 判断c字符是不是字母
    isalnum(c);     // 判断c自负是不是数字或者字母
    tolower(c);     // 转为小写
    toupper(c);     // 转为大写

    // 3. 字符串和数值间的转换
    int num = 100;
    string str = to_string(num);    // 整形转字符串 (C++ 11)
    int nbumber = stoi(str);        // 字符串转为整形stol()是字符串转为长整型

    // 4. 迭代的二分
    vector<int> nums {1, 2, 34, 44, 99};
    vector<int>::iterator iter_lower = lower_bound(nums.begin(), nums.end(), 56); // 第一个大于等于目标值的迭代器位置
    vector<int>::iterator iter_upper = upper_bound(nums.begin(), nums.end(), 56); // 第一个大于目标值的迭代器位置

    // TODO 5. 字符串转为小写
    // transform(str.begin(), str.end(), str.begin(), ::tolower());

    // 6. 堆
    priority_queue<int> pq_big;                             // 大顶堆
    priority_queue<int, vector<int>, greater<int>> pq_small;// 小顶堆

    // 7. 快速初始化数组
    int arr[100];
    memset(arr, 0, sizeof arr);
    memset(arr, -1, sizeof arr);
    memset(arr, 0x3f, sizeof arr);

    // 8. C++11 的特性
    auto p = new string;            // auto 关键字
    string* pre = nullptr;          // nullptr代替NULL
    unordered_map<int, int> mp;     // 哈希表， 内部是无序的(Leetcode可用)
    unordered_set<int> st;          // 无序集合

    // 9.bitset
    // uint32_t reverseBits(uint32_t n) 

    // 10. 字符串分割
    splitStr();

    // 11. 四舍五入保留小数
    char str11[10];
    double num11= 22.23434;
    sprintf(str11, "%.2f", num11);
    string s11 = str11;
    cout << s11 << endl;

    // 12. 字符串按格式拆分
    string str12 = "12:59:36";
    char chararr12[100];
    memcpy(chararr12, str12.c_str(), strlen(str12.c_str()));
    int u, v, w;
    sscanf(chararr12, "%d:%d:%d", &u, &v, &w);
    cout << u << " " << v << " " << w << endl;

    // 13. 相同字符的字符串
    string s13(10, 'a');
    cout << s13 << endl;

    // 14. 结构体排序
    // 另见：
    // 02_C++_STL_Algorithms/sort_sort_struct_multi_attr.cpp
    // 02_C++_STL_Algorithms/sort_sort_struct.cpp
    cout << "########################" << endl;
    vector<node14> tt14;
    tt14.push_back({1, 5});
    tt14.push_back({2, 3});
    tt14.push_back({2, 3});
    sort(tt14.begin(), tt14.end());
    for (auto &node : tt14) {
        cout << "{" <<  node.a << "," << node.b << "}" << endl;
    }

    // 15. 优先队列自定义排序
    // 在优先队列中相同的排序规则，产生的效果与顺序容器中是相反的
    cout << "########################" << endl;
    priority_queue<node14> pq15;
    pq15.push({1, 5});
    pq15.push({2, 3});
    pq15.push({2, 5});
    while (!pq15.empty()) {
        cout << pq15.top().a << " " << pq15.top().b << endl; 
        pq15.pop();
    }
    
    return 0;
}