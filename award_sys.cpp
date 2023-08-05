#include <iostream>
using namespace std;
int main()
{
    cout << "===============================\n=== Award System Application ==\n===============================\n";

    int num;
    cout << "Enter the number you received: ";
    cin >> num;

    switch (num)
    {
    case 100:
    case 110:
    case 120:
        cout << "Congratulations! You recived an iphone";
        break;
    case 200:
        cout << "Congratulations! You recived a PC";
        break;
    case 300:
        cout << "Congratulations! You recived an ipad";
        break;
    default:
        cout << "Bad Luck! Come next time to earn more!";
        break;
    }
}