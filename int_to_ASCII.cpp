#include <iostream>
using namespace std;
int main()
{
    cout << "==================================\n== Convert Number to Character ===\n==================================\n";

    int num;
    cout << "Enter the number you want to convert: ";
    cin >> num;

    cout << "The Character that corrsepond to your number is: " << char(num) << endl;
}