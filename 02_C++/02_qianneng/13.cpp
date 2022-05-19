/*
求零件数 P32
20210919

有100多个零件，被4除2，被7除余3，被9除余5，求该数。

注：《程序设计基础 第4版》 P77 筛法
    《数学的思维方式与创新》 P25 中国剩余定理
*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
   for (int i = 101; i < 200; i++) {
       if (i % 4 == 2 && i % 7 == 3 && i % 9 == 5) {
           cout << i << endl;
       }
   }
   return 0;
}