#include <iostream>
using namespace std;

/*
注意cout展示getfloat()输出的是值0 不是0.0

Initializing default
Initializing default
0 0
Destructor is active
Destructor is active
*/
class test {
private:
  int num;
  float fl;

public:
  test();
  int getint() { return num; }
  float getfloat() { return fl; }
  ~test();
};

test::test() {
  cout << "Initializing default" << endl;
  num = 0;
  fl = 0.0;
}

test::~test() { cout << "Destructor is active" << endl; }

int main(int argc, char const *argv[]) {
  test array[2];
  cout << array[1].getint() << " " << array[1].getfloat() << endl;
  return 0;
}