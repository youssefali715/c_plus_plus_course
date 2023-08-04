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

    if (operation == '+')
        result = num1 + num2;
    else if (operation == '-')
        result = num1 - num2;
    else if (operation == 'x')
        result = num1 * num2;
    else if (operation == '/')
        result = num1 / num2;
    else
        cout << "$h!t";

    cout << result;
}