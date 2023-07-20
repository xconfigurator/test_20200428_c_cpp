/**
 * @file map0204_find_count.cpp
 * @author liuyang
 * @brief 
 * https://www.bilibili.com/video/BV1et411b73Z?p=234&spm_id_from=pageDriver&vd_source=8bd7b24b38e3e12c558d839b352b32f4
 *
 * find(key);           // 查找key是否存在，若存在，返回该键的元素的迭代器；若不存在，返回map.end();
 * count(key);          // 统计key的元素个数。对于map而言，这个结果无非是0或1。
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

int main(int argc, char const *argv[]) {
    map<string, string> m;
    m.insert(map<string, string>::value_type("k1", "v1"));
    m["k2"] = "v2";
    m["k3"] = "v3";
    m["k4"] = "v4";

    // find()
    map<string, string>::iterator it = m.find("k4");
    cout << (it == m.end() ? "没找到" : "找到了:" + (*it).second) << endl;
    it = m.find("k5");
    cout << (it == m.end() ? "没找到" : "找到了:" + (*it).second) << endl;
    
    // count()
    cout << m.count("k4") << endl;
    cout << m.count("k5") << endl;
    return 0;
}