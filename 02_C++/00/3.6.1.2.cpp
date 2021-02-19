/*
p53
封闭类

说明：
封闭类对象生成时，先执行所有成员对象的构造函数，然后才执行封闭类自己的构造函数。
成员对象构造函数的执行次序和成员对象在类定义中的次序一致，与他们在构造函数初始化列表中出现的次序无关。
当封闭类的对象消亡时，先执行封闭类的析构函数，然后再执行成员对象的析构函数。

@author liyang copy form guowei
@since 2020/12/14
*/
#include <iostream>
using namespace std;

class CTyre {
public:
  CTyre() { cout << "CTyre constructor" << endl; }
  ~CTyre() { cout << "CTyre destructor" << endl; }
};

class CEngine {
public:
  CEngine() { cout << "CEngine constructor" << endl; }
  ~CEngine() { cout << "CEngine destructor" << endl; }
};

class CCar {
private:
  // 成员对象构造函数的执行次序和成员对象在类定义中的次序一致，与他们在构造函数初始化列表中出现的次序无关。
  CEngine engine;
  CTyre tyre;
  // CTyre tyre;
  // CEngine engine;
  
public:
  CCar() { cout << "CCar constructor" << endl; }
  // CCar() : tyre() , engine() { cout << "CCar constructor" << endl; }
  // CCar() : engine(), tyre()   { cout << "CCar constructor" << endl; }
  ~CCar() { cout << "CCar destructor" << endl; }
};

int main(int argc, char const *argv[]) {
  CCar car;
  return 0;
}