/**
 * @file string202302251941_10-2.cpp
 * @author your name (you@domain.com)
 * @brief 
 * 《C++程序设计》 P325 10-2 ReplaceString.cpp
 * @version 0.1
 * @date 2023-02-25
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
#include <string>
using namespace std;

bool replaceString(string& s, const string& oldSubStr, const string& newSubStr);

int main(int argc, char const *argv[]) {
    cout << "Enter string s, oldSubStr, and newSubStr" << endl;
    string s, oldSubStr, newSubStr;
    cin >> s >> oldSubStr >> newSubStr;

    bool isReplaced = replaceString(s, oldSubStr, newSubStr);

    if (isReplaced) {
        cout << "The replaced string is " << s << endl;
    } else {
        cout << "No mathces" << endl;
    }

    return 0;
}

bool replaceString(string& s, const string& oldSubStr, const string& newSubStr) {
    bool isReplaced = false;
    int currentPosition = 0;
    while (currentPosition < s.length()) {
        int position = s.find(oldSubStr, currentPosition);
        if (position == string::npos) {
            return isReplaced;
        } else {
            s.replace(position, oldSubStr.length(), newSubStr);
            currentPosition = position + newSubStr.length();
            isReplaced = true;
        }
    }

    return isReplaced;
}