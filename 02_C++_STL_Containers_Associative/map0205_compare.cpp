/**
 * @file map0205_compare.cpp
 * @author liuynag
 * @brief 
 * 
 * 默认会按照key升序排列（非递减）
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

void printMap(const map<int, int>& m) {
    for (auto cpair : m) {
        cout << "[" << cpair.first << "," << cpair.second << "]" << endl;
    }
    cout << endl;
}

struct CompRule {
    bool operator()(int v1, int v2) {
        return v1 > v2;
    }
};

class CompRuleClass {
public:
    bool operator()(int v1, int v2) {
        return v1 > v2;
    }
};

int main(int argc, char const *argv[]) {
    map<int, int, CompRule> m1;
    m1[1] = 1;
    m1[2] = 2;
    m1[3] = 3;
    m1[4] = 4;
    //printMap(m1);// 注意这样是错的！
    for (auto cpair : m1) {
         cout << "[" << cpair.first << "," << cpair.second << "]" << endl;
    }

    map<int, int, CompRuleClass> m2;
    m2[1] = 1;
    m2[2] = 2;
    m2[3] = 3;
    m2[4] = 4;
    //printMap(m2);// 注意这样是错的！
    for (auto cpair : m2) {
         cout << "[" << cpair.first << "," << cpair.second << "]" << endl;
    }

    // 示例：
    map<int, int, less<int>> m3; // 默认！
    map<int, int, greater<int>> m4;

    return 0;
}