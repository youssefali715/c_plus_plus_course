# Assignment 1
```
int i = 1;
for (; i <= 10; i++)
     cout << i << endl;
i = 1;
while (i <= 10)
{
     cout << i << endl;
     i++;
};
i = 1;
do
{
     cout << i << endl;
     i++;
} while (i <= 10);
```
# Assignment 2
```
int index = 2;

for (;;) // <= Do Not Edit This Line
{
     cout << index << "\n"; // From 2 To 10
     if (index == 8)
          break;
     else
          index++;
}
```
# Assignment 3
```
int num1, num2, holder;
cout << "Enter the first number: ";
cin>> num1;
cout << "Enter the second number: ";
cin>> num2;
if (num1 > num2)
{
     holder = num1;
     num1 = num2;
     num2 = holder;
}
else
     
for (int i = num1+1; i < num2; i++)
{
     if (i % 2 == 0)
          continue;
     cout << i << endl;
}
```
# Assignment 4
```
// Method 1
     for (int i = 1; i < 20; i++)
     {
          if (i % 2 != 0)
               continue;
          cout << i << endl;
     }
     
     // Method 2
     int i = 0;
     while (i < 19)
     {
          i++;
          if (i % 2 != 0)
               continue;
          cout << i << endl;
     }
```
# Assignment 5
```
     // Method 1
     for (int i = 0; i <30; i+=3)
     {
          cout << i << endl;
     }
     
     // Method 2
     int i = -3;
     while (i < 30)
     {
          i+=3;
          cout << i << endl;
     }
```
# Assignment 6
```
     // Method 1
     for (int i = 10; i < 100000002; i *= i)
     {
          cout << i << endl;
     }
     
     // Method 2
     int i = 10;
     while (i < 100000002)
     {
          cout << i << endl;
          i*=i;
     }
```
# Assignment 7
```
     // Method 1
     for (int i = 2; i < 129; i *= 2)
     {
          cout << i << endl;
     }
     
     // Method 2
     int i = 2;
     while (i < 129)
     {
          cout << i << endl;
          i*=2;
     }
```
# Assignment 8
```
     // Method 1
     for (int i = 2; i < 127;)
     {    
          cout << i << endl;
          i++;
          i*=2;
     }
     
     // Method 2
     int i = 2;
     while (i < 127)
     {
          cout << i << endl;
          i++;
          i *= 2;
     }
```
# Assignment 9
```
     string friends[] = {"Ahmed", "Mohamed", "Sayed", "Gamal"};
     // Method 1
     for (int i = 1; i < 3;i++)
     {    
          cout << friends[i] << endl;
     }
     
     // Method 2
     int i = 1;
     while (i < 3)
     {
          cout << friends[i] << endl;
          i++;
     }
```
# Assignment 10
```
     string friends[] = {"Ahmed", "Mohamed", "ameer", "Ashraf", "Amany"};
     // Method 1
     for (int i = 0; i < 5;i++)
     {
          if (friends[i][0] != 'A'){
               continue;
          }
               cout << friends[i] << endl;
     }
     
     // Method 2
     int i = -1;
     while (i < 5)
     {
          i++;
          if (friends[i][0] != 'A')
          {
          continue;
          }
          cout << friends[i] << endl;
     }
```
# Assignment 11
```
     string friends[] = {"Ahmed", "Osama", "Ameer"};
     int friendsize = sizeof(friends) / sizeof(friends[0]);
     for (int i = 0; i < friendsize; i++)
     {
     cout << "==================\n====== " << friends[i] << " =====\n==================\n";
     cout << "===  ";
     for (int j = 0; j < 5; j++)
     {
          cout << friends[i][j] << " ";
     }
     cout << " ==\n";
     cout << "==================\n\n";
     }
```
# Assignment 12
```
     int nums[] = {10, 20, 14, 28, 40, 80, 15, 30};
     int numsize = sizeof(nums) / sizeof(nums[0]);
     for (int i = 0; i < numsize; i++)
     {
          if (nums[i] + nums[i] == nums[i+1])
               cout << nums[i] << endl;
          else
               continue;
     }
```
# Assignment 13
```
     for (int i = 30; i > 0; i-=3)
          cout << i << endl;

     for (int i = 30; i > 0; i-=3)
     {
          if (i % 2 == 0)
               continue;
          cout << i << endl;
     }
```
# Assignment 14
```
     int num = 2;
     while (num < 520)
     {
          cout << num / 2 << endl;
          num = (num++ * 2) + 4;
     }
     cout << num / 2 << endl;
```
# Assignment 15
```
     int help_num = 4;
     int nums[] = {2, 4, 5, 6, 10};
     int j = 0;

     for (int i = help_num; i > -1; i--)
     {
          cout << nums[j] << " + " << nums[i] << " = " << nums[j] + nums[i] << endl;
          j++;
     }
```
# Assignment 16
```
     int index = 10;
     int jump = 2;

     for (;;)
     {
          cout << index << endl;
          index -= 2;
          if (index == 2)
               break;
     }
```
# Assignment 17
```
     for (int i = 1; i < 103; i++)
     {
          if (i < 10)
               cout << "00" << i << endl;
          else if (i < 100)
          {
               if (i > 20 && i < 100)
                    continue;
               cout << "0" << i << endl;
          }
          else
               cout << i << endl;
     }
```
# Assignment 18
```
     for (int i = 0; i <= 1000; i += 100) // Do Not Edit This Line
     {
          if (i == 0 || i == 1000)
               continue;
          cout << i << "\n";
     }

```
# Assignment 19
```
     for (int i = 100; i <= 1100; i += 100) // Do Not Edit This Line
     {
          cout << i << "\n";
          if (i == 100 || i == 1100)
               continue;
          else
               cout << i << "\n";
     }
```
# Assignment 20
```
     string names[] = {"Osama", "Ahmed", "Mahmoud", "Hagar", "Eman", "Salwa"};
     int namesize = sizeof(names) / sizeof(names[0]);
     for (int i = 0; i < namesize; i++)
     {
          if (names[i].length() == 5)
               cout << names[i] << endl;
          else
               continue;
     }
```