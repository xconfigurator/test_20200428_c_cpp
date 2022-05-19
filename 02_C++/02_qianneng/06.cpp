/*
简单计算器 P18

设计一个简单的计算器程序，能够根据键盘输入的运算指令和整数，做简单的加减乘除运算。
*/
#include <iostream>
#include <ctype.h>
using namespace std;

// 是否继续
int continueWorking();

int main() {
    int result;
    do {
        cout << "Key in an operator:+, -, *, / ==>";
        char operation;
        cin >> operation;
        int firstNumber, secondNumber;
        if (operation != '+' && operation != '-' && operation != '*' && operation != '/') {
            cout << "You entered a bad operator." << endl << endl;
            continue;
        }
        cout << "Enter your first number:";
        cin >> firstNumber;
        cout << "Enter your second number:";
        cin >> secondNumber;
        switch(operation) {
            case '+':
                result = firstNumber + secondNumber;
                break;
            case '-':
                result = firstNumber - secondNumber;
                break;
            case '*':
                result = firstNumber * secondNumber;
                break;
            case '/':
                result = firstNumber / secondNumber;
                break;
        }
        cout << "The result is :" << result << "." << endl << endl;
    } while(continueWorking());
    return 0;
}

int continueWorking() {
    char response;
    do {
        cout << "continue?(y/n): (Enter only lower letter of 'y' or 'n')";
        cin >> response;
    } while (response != 'y' && response != 'n');
    return response == 'y';
}