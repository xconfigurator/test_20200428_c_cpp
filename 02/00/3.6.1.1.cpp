/*
p51
封闭类

说明：
封闭类最基本的示例

@author liyang copy form guowei
@since 2020/12/14
*/
#include <iostream>
using namespace std;

class CTyre {
private:
    int radius; // 半径
    int width;  // 宽度
public:
    CTyre(int r, int w):radius(r), width(w) {}
};

class CEngine {};

class CCar {      // 封闭类
private:
  int price;
  CTyre tyre;     // 成员对象
  CEngine engine; // 成员对象
public:
  CCar(int p, int tr, int tw);
};
CCar::CCar(int p, int tr, int tw) : price(p), tyre(tr, tw) {};


int main(int argc, char const *argv[]) {
  CCar car(20000, 17, 225);
  return 0;
}