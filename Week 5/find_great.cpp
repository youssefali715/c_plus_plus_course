#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3;
    cout << "=================================\n=== Find the greatest number ====\n=================================\n";

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the third number: ";
    cin >> num3;

    if (num1 > num2)
    {
        if (num1 > num3)
            cout << "The greatest number is: " << num1;
        else if (num1 < num3)
            cout << "The greatest number is: " << num3;
    }
    else if (num1 < num2)
    {
        if (num2 > num3)
            cout << "The greatest number is: " << num2;
        else if (num2 < num3)
            cout << "The greatest number is: " << num3;
    }
}