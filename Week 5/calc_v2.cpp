#include <iostream>
using namespace std;
int main()
{
    cout << "==============================\n====  Simple Calculator  =====\n==============================\n";

    int num1, num2, result;
    char operation;
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Enter the operation (+,-,x,/): ";
    cin >> operation;

    switch (operation)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case 'x':
        result = num1 * num2;
        break;
    case '/':
        result = num1 / num2;
        break;
    default:
        cout << "Fuck y";
        break;
    }

    cout << result;
}