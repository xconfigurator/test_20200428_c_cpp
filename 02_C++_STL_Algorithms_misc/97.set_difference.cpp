/**
 * @file 97.set_difference.cpp
 * @author your name (you@domain.com)
 * @brief 差
 * 参考：
 * https://en.cppreference.com/w/cpp/algorithm/set_difference
 * 视频：
 * https://www.bilibili.com/video/BV1et411b73Z?p=263&vd_source=8bd7b24b38e3e12c558d839b352b32f4
 * 
 * @version 0.1
 * @date 2023-07-21
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void Print(const int & v) {
    cout << v << "\t";
}

void setDemo(const vector<int> & v1, const vector<int> & v2) {
    cout << "v1:\t\t";
    for_each(v1.begin(), v1.end(), Print);
    cout << endl;
    cout << "v2:\t\t";
    for_each(v2.begin(), v2.end(), Print);
    cout << endl;

    cout << "v1 - v2:\t";
    vector<int> v1minusv2;
    set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), back_inserter(v1minusv2));
    for_each(v1minusv2.begin(), v1minusv2.end(), Print);
    cout << endl;

    cout << "v2 - v1:\t";
    vector<int> v2minusv1;
    set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), back_inserter(v2minusv1));
    for_each(v2minusv1.begin(), v2minusv1.end(), Print);
    cout << endl;
}


int main(int argc, char const *argv[]) {
    vector<int> v1;
    vector<int> v2;
    for (int i = 0; i < 10; ++i) {
        v1.push_back(i);
        v2.push_back(i + 5);
    }
    setDemo(v1, v2);
    
    /*
    cout << "v1:\t";
    for_each(v1.begin(), v1.end(), Print);
    cout << endl;
    cout << "v2:\t";
    for_each(v2.begin(), v2.end(), Print);
    cout << endl;

    cout << "v1 - v2:\t";
    vector<int> v1minusv2;
    set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), back_inserter(v1minusv2));
    for_each(v1minusv2.begin(), v1minusv2.end(), Print);
    cout << endl;

    cout << "v2 - v1:\t";
    vector<int> v2minusv1;
    set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), back_inserter(v2minusv1));
    for_each(v2minusv1.begin(), v2minusv1.end(), Print);
    cout << endl;
    */
    

    // ////////////////////////////////////
    cout << "/////////////////////////////////////////////////////////////////////////////////////////////////////////" << endl;
    vector<int> vv1 {1, 2, 3, 4, 5};
    vector<int> vv2 {4, 5};
    setDemo(vv1, vv2);

    return 0;
}

// 来自参考
/*
#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
 
template<typename T>
std::ostream& operator<<(std::ostream& os, std::vector<T> const& v)
{
    for (os << "{ "; auto const& e : v)// 需要gcc 12.1 C++23
        os << e << ' ';
    return os << '}';
}
 
struct Order // a struct with some interesting data
{
    int order_id{};
 
    friend std::ostream& operator<<(std::ostream& os, const Order& ord)
    {
        return os << ord.order_id;
    }
};
 
int main()
{
    const std::vector<int> v1 {1, 2, 5, 5, 5, 9};
    const std::vector<int> v2 {2, 5, 7};
    std::vector<int> diff;
 
    std::set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(),
                        std::inserter(diff, diff.begin()));
 
    std::cout << v1 << " ∖ " << v2 << " = " << diff << '\n';
 
    // we want to know which orders "cut" between old and new states:
    std::vector<Order> old_orders {{1}, {2}, {5}, {9}};
    std::vector<Order> new_orders {{2}, {5}, {7}};
    std::vector<Order> cut_orders;
 
    std::set_difference(old_orders.begin(), old_orders.end(),
                        new_orders.begin(), new_orders.end(),
                        std::back_inserter(cut_orders),
                        [](auto& a, auto& b) { return a.order_id < b.order_id; });
 
    std::cout << "old orders = " << old_orders << '\n'
              << "new orders = " << new_orders << '\n'
              << "cut orders = " << cut_orders << '\n';
}
*/