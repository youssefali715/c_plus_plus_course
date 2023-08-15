### Assignments

#### Assignment 1

```
 int nums[]{100, 300, 600, 900};
    string awards[]{"iPhone", "iPad", "PC", "Car"};

    cout << "Number " << nums[0] << " Award Is: " << awards[0] << endl;
    cout << "Number " << nums[1] << " Award Is: " << awards[1] << endl;
    cout << "Number " << nums[2] << " Award Is: " << awards[2] << endl;
    cout << "Number " << nums[3] << " Award Is: " << awards[3] << endl;
```

#### Assignment 2

```
    int check = 25;
    int nums[]{20, 25, 30, 70, 100};

    if (nums[0] > check)
    {
        nums[3] += nums[0];
    }
    else if (nums[1] > check)
    {
        nums[3] += nums[1];
    }
    else if (nums[2] > check)
    {
        nums[3] += nums[2];
    }
    cout << nums[3];
```

#### Assignment 3

```
    int filling = 10;
    int vals[]{100, 200, 300, 400};

    vals[0] = vals[1] = vals[2] = vals[3] = filling;

    cout << vals[0] << "\n"; // 10
    cout << vals[1] << "\n"; // 10
    cout << vals[2] << "\n"; // 10
    cout << vals[3] << "\n"; // 10
    return 0;
```

#### Assignment 4

```
    int vals[]{100, 200, 600, 400, 200};
    if (vals[0] + vals[4] > vals[2])
    {
        cout << vals[0] << " + " << vals[4] << " = " << vals[0] + vals[4] << endl;
        cout << vals[0] + vals[4] << " > " << vals[2] << endl;
    }
    else if (vals[1] + vals[3] > vals[2])
    {
        cout << vals[1] << " + " << vals[3] << " = " << vals[1] + vals[3] << endl;
        cout << vals[1] + vals[3] << " > " << vals[2] << endl;
    }
    else
        cout << vals[2] << endl;
```

#### Assignment 5

```
    int vals[] = {100, 200, 600, 200, 100};

    if (vals[0] == vals[(sizeof(vals) / sizeof(vals[0])) - 1] && vals[1] == vals[(sizeof(vals) / sizeof(vals[0])) - 2])
        cout << "Array Is Palindrome";
    else
        cout << "Array Is Not Palindrome";
```

#### Assignment 6

```
    int vals[] = {10, 20, 30};

    vals[0] *= 10;
    vals[1] *= 10;
    vals[2] *= 10;

    cout << vals[0] << "\n"; // 100
    cout << vals[1] << "\n"; // 200
    cout << vals[2] << "\n"; // 300
```

#### Assignment 7

```
string names[3][3] = {
        {"Ahmed", "Sayed", "Mahmmoud"},
        {"Sameh", "Mahdy", "Gamal"},
        {"Mohammed", "Adel", "Majed"}};
```

#### Assignment 8

```
#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int, 3> nums = {0, 1, 2};
    nums.fill(100);
    cout << nums[0] << "\n"; // 100
    cout << nums[1] << "\n"; // 100
    cout << nums[2] << "\n"; // 100
}
```

#### Assignment 9

```
    int nums[] = {10, 20, 30, 40, 20, 50};
    array<int, sizeof(nums) / sizeof(nums[0])> nums2 = {nums[0], nums[1], nums[2], nums[3], nums[4], nums[5]};
    cout << sizeof(nums) / sizeof(nums[0]) << endl;
    cout << nums2.size() << endl;
    cout << nums2.end() - nums2.begin();
```

#### Assignment 10

```
    array<int, 6> nums = {10, 20, 30, 40, 20, 50};
    cout << nums[0] << endl
         << nums[(sizeof(nums) / sizeof(nums[0])) - 1] << endl;
    cout << nums.front() << endl
         << nums.back() << endl;
    cout << nums.at(0) << endl
         << nums.at((sizeof(nums) / sizeof(nums[0])) - 1) << endl;
```

#### Assignment 11

```
     int index = 1;
     array<int, 3> oldNums = {10, 20, 30};
     array<int, 3> newNums;

     newNums.swap(oldNums);
     reverse(begin(newNums), end(newNums));
```

#### Assignment 12

```
     // Do Not Edit The Next 6 Lines
     int nums[] = {1, 2, 3, 5};
     int vals[] = {10, 20, 40, 30, 10, 60};
     int i1 = nums[3];
     int i2 = nums[0];
     int i3 = nums[1];
     int i4 = nums[2];

     // Need To Get Ouput 150
     // You Can Use Plus Operator Only

     // Your Code Here
     cout << vals[i1] + vals[i2] + vals[i3] + vals[i4];
```

#### Assignment 13

```
     string fName = "Elzero ";
     string mName = "Web ";
     string lName = "School";

     cout << fName << mName << lName << endl;
     cout << fName + mName + lName << endl;
     fName.append(mName);
     fName.append(lName);
     cout << fName;
```