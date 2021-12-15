/**
 * @file LC692HeapHashTable.cpp
 * @author liuyang
 * @brief 
 * 692. 前K个高频单词
 * 
 * 题目：
 * https://leetcode-cn.com/problems/top-k-frequent-words/
 * 
 * OJ已通过，代码本地可运行。
 * 
 * @version 0.1
 * @date 2021-12-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
#include <vector>
#include <queue>
#include <map>

using namespace std;

struct Record {
    string word;
    int count;
    friend ostream& operator << (ostream& os, const Record& r) {
        os << r.word << ", " << r.count << endl;
        return os;
    }
};

struct MyCompare {
    bool operator() (const Record& r1, const Record& r2) {
        if (r1.count == r2.count) {
            return r1.word > r2.word;// 注意在堆里的这个比较顺序貌似都是反着的！
        } else {
            return r1.count < r2.count;// 注意在堆里的这个比较顺序貌似都是反着的！
        }
    }
};

vector<string> topKFrequent(vector<string>& words, int k) {
        vector<string> results;

        // 词频统计
        map<string, int> m;
        map<string, int>:: iterator it;
        for (int i = 0; i < words.size(); i++) {
            if ((it = m.find(words[i])) == m.end()) {// 没找到
                m.insert(make_pair(words[i], 1));
            } else {
                (*it).second ++;
            }
        }

        // 建堆
        priority_queue<Record, vector<Record>, MyCompare> heap;
        for (it = m.begin(); it != m.end(); it++) {
            Record r;
            r.word = (*it).first;
            r.count = (*it).second;
            heap.push(r);
        }

        // 结果
        for (int i = 0; i < k; ++i) {
            results.push_back(heap.top().word);
            heap.pop();
        }
        
        return results;
    }


int main() {
    vector<string> param = {"i", "love", "leetcode", "i", "love", "coding"};
    vector<string> result = topKFrequent(param, 2);
    for (auto str : result) {
        cout << str << endl;
    }
    return 0;
}
