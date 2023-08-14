#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  int nums[5];
  int holder[5];
  for (int i = 0; i < 5; i++){
    cout << "Enter Number " << i+1 << " :";
    cin >> nums[i];
  }
  reverse(begin(nums), end(nums));
  for (int g = 0; g < 5; g++){
    cout << nums[g] << "\n";
  }
  return 0;
}