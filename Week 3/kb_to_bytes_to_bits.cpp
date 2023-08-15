#include <iostream>
using namespace std;

int main()
{
    cout << "==================================\n== KiloBytes --> Bytes --> Bits ==\n==================================\n";

    int kb;
    cout << "\nEnter the number of KiloBytes you want to convert: ";
    cin >> kb;

    int byte = kb * 1024, bit = byte * 8;
    cout << "\nYou entered " << kb << " KiloBytes\n";
    cout << "It equals " << byte << " Bytes\n";
    cout << "It equals " << bit << " Bits\n";

    cout << "\nThank You for using our Program \n";
    cout << "Copyright 2023 Made by YA 😊😊";
    return 0;
};