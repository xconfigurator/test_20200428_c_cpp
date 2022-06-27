/**
 * @file 104.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

class Data1 {
private:
    int a;
public:
    Data1()                 {a = 0;}
    void setData(int n)     {a = n;}
    int GetData()           {return a;}
};

int main(int argc, char const *argv[]) {
    Data1 mydata[10];
    mydata->setData(15);
    cout << mydata->GetData() << " ";
    int i = 0;
    while (i < 9) {
        (mydata + i + 1)->setData((mydata + i)->GetData() + 5);
        cout << (mydata + i + 1)->GetData() << " ";
        i++;
    }
    cout << endl;
    return 0;
}