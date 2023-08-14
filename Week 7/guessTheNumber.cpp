#include <iostream>
using namespace std;
int main()
{
  cout << "============================\n====  Guess The Number =====\n============================\n";
  int guess;
  for (int i = 0; i < 5; i++)
  {
    cout << "Enter a number between 1 & 10: ";
    cin >> guess;
    if (guess == 7)
    {
      cout << "Congratulations! You got the number!";
      break;
    }
    else
    {
      if (i == 4)
        cout << "You lose!";
      else
        cout << "Try Again\n";
    }
  }
  return 0;
}