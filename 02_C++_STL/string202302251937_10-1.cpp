/**
 * @file string202302251937_10-1.cpp
 * @author your name (you@domain.com)
 * @brief 
 * 《C++程序设计》 P324 10-1 ExtractWords.cpp
 * @version 0.1
 * @date 2023-02-25
 * 
 * @copyright Copyright (c) 2023
 * 
 */
 #include <iostream>
 #include <sstream>
 #include <string>
 using namespace std;

 int main(int argc, char const *argv[]) {
    string text("Programming is fun");
    stringstream ss(text);

    cout << "The words in the text are " << endl;
    string word;
    while (!ss.eof()) {
        ss >> word;
        cout << word << endl;
    }
    return 0;
 }
