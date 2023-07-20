/**
 * @file map0203_erase_clear.cpp
 * @author liuyang
 * @brief 
 * https://www.bilibili.com/video/BV1et411b73Z?p=233&spm_id_from=pageDriver&vd_source=8bd7b24b38e3e12c558d839b352b32f4
 * 
 * insert(elem);            // 在容器中插入元素（pair）
 * clear();                 // 清除所有元素
 * erase(pos);              // 删除pos迭代器所指的元素，返回下一个元素的迭代器。
 * erase(first, last);      // 删除[first, last)的所有元素，返回下一个元素的迭代器。
 * erase(key);              // 删除容器中键为key的元素
 * 
 * @version 0.1
 * @date 2021-12-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
#include <map>
using namespace std;

void printMap(const map<string, string>& m) {
    for (auto cpair : m) {
        cout << "[" << cpair.first << "," << cpair.second << "]" << endl;
    }
    cout << endl;
}

map<string, string> getTestMap() {
    map<string, string> m1;
    
    m1.insert(make_pair("k1", "v1"));// 推荐
    
    m1["k2"] = "v2";// 看看得了（不建议这样插入）
    m1.insert(pair<string, string>("k3", "v3"));// 看看得了
    m1.insert(map<string, string>::value_type("k4", "v4"));// 看看得了 
    
    m1.insert(make_pair("k5", "v5"));
    m1.insert(make_pair("k6", "v6"));
    
    return m1;
}

void testClear() {
    map<string, string> m1 = getTestMap();
    /*
    m1.insert(make_pair("k1", "v1"));
    m1.insert(make_pair("k2", "v2"));
    m1.insert(make_pair("k3", "v3"));
    m1.insert(make_pair("k4", "v4"));
    */
    cout << "#clear前 m1 = " << endl;
    printMap(m1);
    
    // clear
    m1.clear();

    cout << "#clear后 m1 = " << endl;
    printMap(m1); 
}

// 可以打断点观察值
void testErase() {
    map<string, string> m1 = getTestMap();
    m1.erase(m1.begin());    

    map<string, string> m2 = getTestMap();
    m2.erase(m2.begin(), m2.end());

    map<string, string> m3 = getTestMap();
    m3.erase("k4");
    // cout << "#执行m2.erase(\"k4\")之后：" << endl;
    // printMap(m3);
}

int main(int argc, char const *argv[]) {
    testClear();
    testErase();
    return 0;
}