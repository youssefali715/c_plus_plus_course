#include <iostream>
using namespace std;
int main()
{

    cout << "================================\n=======  Years to XP App  ======\n================================\n";

    int price = 100, discount, years;

    cout << "Enter the number of years of experiences: ";
    cin >> years;

    switch (years)
    {
    case 1:
        discount += 0;
        break;
    case 5:
        discount += 20;
        break;
    case 10:
        discount += 50;
        break;
    case 15:
        discount += 100;
        break;
    default:
        discount += 0;
        break;
    }
    cout << "The price is " << price - discount << " for you only!";
}