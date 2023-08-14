#include <iostream>
using namespace std;

int main()
{
  int nums[] =  {10, 20, -20, 13, 30, -30, 40};
  int finalValue;
  int numSize = sizeof(nums) / sizeof(nums[0]);

  for (int i = 0; i < numSize; i++)
  {
    if ((nums[i] % 2) == 0 && nums[i] > 0)
      finalValue += nums[i];
    else
      continue;
    cout << finalValue << endl;
  }

  return 0;
}