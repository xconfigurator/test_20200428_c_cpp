/**
 * @file LC20.cpp
 * @author liuyang
 * @brief 栈练习
 * 20.有效的括号
 * https://leetcode-cn.com/problems/valid-parentheses/
 * 
 * ？？？？？？？？？？？？？？？
 * ？1 在LeetCode上编译不通过
 * ？2 在本机编译通过，但[()]测试结果不对
 * 
 * 参考：
 * https://www.bilibili.com/read/cv8457685?from=articleDetail
 * 
 * 
 * @version 0.1
 * @date 2021-12-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
#include <string>
#include <stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        if (s.length() == 0) return true;// s.size() == s.length() https://en.cppreference.com/w/cpp/string/basic_string/size
        
        stack<char> mystack;
        for (int i = 0; i < s.length(); i++) {
            if ('(' == s[i] || '[' == s[i] || '{' == s[i] ) {
                mystack.push(s[i]);
            } else {
                if (mystack.empty()) return false;

                int top = mystack.top();
                mystack.pop();
                if (s[i] == ')' && top != '(') return false;
                if (s[i] == ']' && top != '[') return false;
                if (s[i] == '}' && top != '{') return false;
            }
        }
        return mystack.empty() ? true : false;
    }
};

int main() {
    string s = "[[()][()]]]";// [[()][()]]    [()]
    Solution solution;
    cout << solution.isValid(s) << endl;
    return 0;
}
