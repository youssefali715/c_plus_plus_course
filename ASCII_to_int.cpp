#include <iostream>
using namespace std;
int main()
{
    cout << "==================================\n== Convert Character to Number ===\n==================================\n";

    char character;
    cout << "Enter the Character you want to convert: ";
    cin >> character;

    cout << "The ASCII Value that corrsepond to your Character is: " << int(character) << endl;
}