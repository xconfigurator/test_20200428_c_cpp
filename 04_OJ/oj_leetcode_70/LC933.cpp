/**
 * @file LC933.cpp
 * @author liuyang
 * @brief 最近的请求次数 The Number of Calls
 * 
 * 题目：https://leetcode-cn.com/problems/number-of-recent-calls/
 * OJ状态：通过
 * 
 * @version 0.1
 * @date 2021-12-02
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
#include <queue>
using namespace std;

class RecentCounter {
public:
    RecentCounter() {

    }
    
    /*
    两组：
    add/remove/element
    offer/poll/peek
    联想C++ STL:
    push/pop/ front back
    */
    int ping(int t) {
        queue.push(t);
        while (!queue.empty() && (t - queue.front() > 3000)) {
            queue.pop();
        }
        return queue.size();
    }
private:
    queue<int> queue;
};

int main() {

    return 0;
}