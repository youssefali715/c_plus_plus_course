#include <iostream>
using namespace std;

int main()
{
    int day, month, year;

    cout << "Enter the birth Day: ";
    cin >> day;

    cout << "Enter the birth Month: ";
    cin >> month;

    cout << "Enter the birth year: ";
    cin >> year;

    cout << "\nYour birth date is: " << day << "/" << month << "/" << year;
    cout << "\nYou lived: " << ((2023 - year) * 12) + (12 - month) << " Months";
    cout << "\nYou lived: " << ((2023 - year) * 12 * 30) + (30 - day) << " Days";
}