/*
继承中的访问权限 P121

找错
*/
#include <iostream>
using namespace std;

class Base {
public:
  void Set(int a, int b) {
    cout << "Base Set" << endl;
    i = a;
    j = b;
  }
  void Show() { cout << i << " " << j << endl; }

private:
  int i, j;// 若不初始化就是一个随机整数值如 0 16
};

class Derived : private Base {
public:
  Derived(int x) { k = x; }
  void Set(int a, int b) {
      cout << "Derived Set" << endl;
      Base::Set(a, b);
  }
  void ShowK() { 
      cout << k << endl; 
      Base::Show();// OK
  }
private:
  int k;
};

int main(int argc, char const *argv[]) { 
    Derived ob(3);

    /*
    当基类通过使用private存取说明符被继承时，基类的所有public和protected成员编程派生类的private成员。
    注：他们仍然可以由派生类的成员进行访问。
    */
    //ob.Set(1, 2);// error
    //ob.Show();// error 
    ob.Set(1, 2);   
    ob.ShowK();
    return 0; 
}