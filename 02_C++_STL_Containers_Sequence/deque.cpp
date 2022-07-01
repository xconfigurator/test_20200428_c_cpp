/**
 * @file deque.cpp
 * @author your name (you@domain.com)
 * @brief 
 * https://en.cppreference.com/w/cpp/container/deque
 * 
 * @version 0.1
 * @date 2022-07-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#include <deque>
 
int main()
{
    // Create a deque containing integers
    std::deque<int> d = {7, 5, 16, 8};
 
    // Add an integer to the beginning and end of the deque
    d.push_front(13);
    d.push_back(25);
 
    // Iterate and print values of deque
    for(int n : d) {
        std::cout << n << ' ';
    }
}