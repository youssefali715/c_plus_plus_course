#include <iostream>
using namespace std;

int main()
{
    int points = 0;
    int answers[3];

    cout << "=================================\n====  Guess the number Game  ====\n=================================\n\n\n";

    cout << "##########  Sequence 1  ##########\n";
    cout << "1,5,10,16,...\n";
    cin >> answers[0];

    cout << "##########  Sequence 2  ##########\n";
    cout << "2,4,8,16,...\n";
    cin >> answers[1];

    cout << "##########  Sequence 3  ##########\n";
    cout << "1,1,2,3,...\n";
    cin >> answers[2];

    int sequences[3][5] = {
        {1, 5, 10, 16, 23},
        {2, 4, 8, 16, 32},
        {1, 1, 2, 3, 5}};

    if (answers[0] == sequences[0][4])
        points++;
    if (answers[1] == sequences[1][4])
        points++;
    if (answers[2] == sequences[2][4])
        points++;

    cout << "You got " << points << " out of 3!";
    cin >> answers[4];
    return 0;
}