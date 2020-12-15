/*
完整的Stack类
Larry Nyhoff 《数据结构与算法分析 C++语言描述（第2版）》 p290

说明：静态数组版本

@author liuyang copy from Larry Nyhoff
@since 2020/12/15
*/
#include <iostream>

#ifndef STACK
#define STACK

const int STACK_CAPACITY = 128;
typedef int StackElement;

class Stack {
public:
  Stack();
  bool empty() const;
  void push(const StackElement &value);
  void display(ostream &out) const;
  StackElement top() const;
  void pop();

private:
  StackElement myArray[STACK_CAPACITY];
  int myTop;
};

#endif