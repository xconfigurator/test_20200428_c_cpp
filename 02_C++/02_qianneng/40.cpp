/*
商品进销类 P83

某商店经销一种货物，货物成箱购进，成箱卖出，购进和卖出时以重量为单位。
各箱的重量不一样，因此商店需要记下目前库存货物的总量。
现在要求用C++把商店货物购进和卖出的情况模拟出来。

提要：
设置类的静态数据成员，用以表达总重量。

输出样例：
The initial weight of goods：0
32
The first goods weights 32
56
The total weight of goods:88
*/
#include <iostream>
using namespace std;

class Goods {
public:
    Goods(int w) {
        weight = w;
        totalWeight += w;
    }
    Goods(Goods& gd) {
        weight = gd.weight;
        totalWeight += gd.totalWeight;
    }
    ~Goods() {
        totalWeight -= weight;
    }
    int Get() {
        return weight;
    }
    static int GetTotal() {
        return totalWeight;
    }
private:
    static int totalWeight;
    int weight;
};

int Goods::totalWeight = 0;// 静态变量初始化方法

int main(int argc, char const *argv[]) {
    int w;
    cout << "The initial weight of goods：" 
         << Goods::GetTotal() << endl;
    cin >> w;
    Goods g1(w);
    cout << "The first goods weights " 
         << g1.Get() << endl;
    cin >> w;
    Goods g2(w);
    cout << "The total weight of goods:" 
         << Goods::GetTotal() << endl;
    return 0;
}