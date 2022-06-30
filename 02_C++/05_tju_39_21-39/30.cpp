/**
 * @file 30.cpp Quicksum
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*
Problem Description:
    A checksum is an algorithm that scans a packet of data and return a single number.
    The idea is that if the packet is changed,  the checksum will also change, so checksum are often used for detecting transmission errors,
    validating document content, and in many other situations where it is necessary to detect undesirable changes in data.

    For this problem, you will implement a checksum algorithm called Quicksum. A Quicksum packet allows only uppercase letters and spaces.
    It always begins and ends ith an uppercase letter. Otherwise, spaces and letters can occur in any combination, including consecutive spaces.

    A Quicksum is the sum of the products of each character's position in the packet times the character's value. A Space has a value of zero, while letters have a value equal to their position in the alphabet.
    So. A=1, B=2, etc., though Z=26. Here are example Quicksum calculations for the packets "ACM" and "MID CENTRAL":
    ACM: 1 * 1  + 2 *3 + 3 * 13 = 46
    MID CENTRAL: 1 * 13 + 2 * 9 + 3 * 4 + 4 * 0 + 5 * 3 + 6 * 5 + 7 * 14 + 8 * 20 + 9 * 18 + 10 * 1 + 11 * 12 = 650

Input:
    The input consists of one or more packets followed by a line containing only # that signals the end of the input.
    Each packet is on a line by itself, does not begin or end with a space, and contains from 1 t 255 characters.
Output:
    For each packet, output its Quicksum on a separate line in the output.

Sample Input:
ACM
MID CENTRAL
REGIONAL PROGRAMMING CONTEST
ACN
A C M
ABC
BBC
#

Sample Output:
46
650
4690
49
75
14
15
*/
#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[]) {
    char s[500];
    while (gets(s) && s[0] != '#') {
        int sum = 0;
        for (int i = 0; i < strlen(s); i++) {
            if (s[i] != ' ' && s[i] != '\0') {
                sum += (s[i] - 64) * (i + 1);
            } else {
                sum += s[i] * 0;
            }
        }
        cout << sum << endl;
    }
    return 0;
}