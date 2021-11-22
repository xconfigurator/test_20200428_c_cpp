/*
测试Stack类驱动程序
Larry Nyhoff 《数据结构与算法分析 C++语言描述（第2版）》p294
*/
#include <iostream>
using namespace std;

#include "Stack.h"

int main(int argc, char const *argv[]) {
  Stack s;
  cout << "Stack created. Empty? " << boolalpha << s.empty() << endl;
  cout << "How many elements to add to the stack? ";
  int numItems;
  cin >> numItems;
  for (int i = 1; i <= numItems; i++) {
    s.push(i);
  }
  cout << "Stack contents:\n";
  s.display(cout);
  cout << "Stack empty?" << s.empty() << endl;
  cout << "Toop value:" << s.top() << endl;

  while (!s.empty()) {
    cout << "Poping" << s.top() << endl;
    s.pop();
  }

  cout << "Stack empty?" << s.empty() << endl;
  cout << "Top value:" << s.top() << endl;
  cout << "Trying to pop:" << endl;
  s.pop();

  return 0;
}