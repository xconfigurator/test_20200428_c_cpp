/**
 * @file 109.cpp
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

// count 不明确
class Count {
public:
    Count()             {count1++;}
    static int data()   {return count1;}
    ~Count()            {count1--;}
private:
    static int count1;
};

int Count::count1 = 60;

int main(int argc, char const *argv[]) {
    Count a, b, c, d, e;
    cout << Count::data() << endl;
    cout << a.data() << endl;
    cout << e.data() << endl;
    return 0;
}