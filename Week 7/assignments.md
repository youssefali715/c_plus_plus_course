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
# Assignment 12
# Assignment 13
# Assignment 14
# Assignment 15
# Assignment 16
# Assignment 17
# Assignment 18
# Assignment 19
# Assignment 20