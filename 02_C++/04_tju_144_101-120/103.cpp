/**
 * @file 103.cpp
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

class cube {
public:
    cube(int ht = 2, int wd = 5, int dp = 3) {
        height = ht;
        width = wd;
        depth = dp;
        cout << "depth=" << depth << " constructor called" << endl;
    }
    ~cube() {
        cout << "depth=" << depth << " destructor called" << endl;
    }
    int volume() {
        return height * width * depth;
    }
private:
    int height, width, depth;
};

int main(int argc, char const *argv[]) {
    cube cone(10, 20, 15), ctwo;
    cout << cone.volume() << endl;
    cout << ctwo.volume() << endl;
    return 0;
}