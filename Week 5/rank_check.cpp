#include <iostream>
using namespace std;
int main()
{
    cout << "=============================\n====  User Rank Checker  ====\n=============================\n";

    int xp;
    cout << "Enter your XP: ";
    cin >> xp;

    if (xp < 500)
        cout << "Your are beginner. :(";
    else if (500 < xp && xp < 1000)
        cout << "You are Intermediate. :|";
    else
        cout << "You are dragon. :)";
}