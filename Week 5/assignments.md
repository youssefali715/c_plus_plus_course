### Assignments

#### Assignment 1

```
#include <iostream>
using namespace std;
int main()
{
	int age = 40;
	int points = 800;
	float rate = 8.5f;
	if (age > 18 && points > 500 && rate > 5.f)
	{
		cout << "Yes Age > 18 & Points > 500 & Rate > 5";
	}
};
```

#### Assignment 2

```
#include <iostream>
using namespace std;
int main()
{
	int age = 18, points = 450;

	if (age > 18)
		cout << "Your age is acceptable\n";
	else
		cout << "Your age is not acceptable\n";

	if (points > 500)
		cout << "Your points are acceptable\n";
	else
		cout << "Your age is not acceptable\n";
};
```

#### Assignment 3

```
#include <iostream>
using namespace std;
int main()
{
	int num;
	cout << "Please Type A Number Between 0 And 150: ";
	cin >> num;

	if (num < 10 && num > 0)
		cout << "00" << num << endl;
	else if (num > 10 && num < 100)
		cout << "0" << num << endl;
	else
		cout << num;
};
```

#### Assgnment 4

```
#include <iostream>
using namespace std;
int main()
{
	int num1 = 20;
	int num2 = 1;
	int num3 = 20;
	int num4 = 60;

	// Do Not Edit Any Condition

	// Condition 1
	if (num1 > num2)
		cout << "Condition 1 Is True\n";
	else
		cout << "Condition 1 Is False\n";

	// Condition 2
	if (num1 > num2 && num1 < num4)
		cout << "Condition 2 Is True\n";
	else
		cout << "Condition 2 Is False\n";

	// Condition 3
	if (num1 > num2 && num1 == num3)
		cout << "Condition 3 Is True\n";
	else
		cout << "Condition 3 Is False\n";

	// Condition 4
	if (num1 + num2 < num4)
		cout << "Condition 4 Is True\n";
	else
		cout << "Condition 4 Is False\n";

	// Condition 5
	if (num1 + num3 < num4)
		cout << "Condition 5 Is True\n";
	else
		cout << "Condition 5 Is False\n";

	// Condition 6
	if (num1 + num2 + num3 < num4)
		cout << "Condition 6 Is True\n";
	else
		cout << "Condition 6 Is False\n";

	// Condition 7
	if (num4 - (num1 + num3) + num2 == 21)
		cout << "Condition 7 Is True\n";
	else
		cout << "Condition 7 Is False\n";
};
```

#### Assignment 5

```
#include <iostream>
using namespace std;
int main()
{
	int by = 82; // by => Birth Year
	int s = 500; // s => Salary
	string result;
	(by > 80) ? ((s < 600) ? result = "OK\n" : result = "High\n") : result = "Not OK\n";
	cout << result;
};
```

#### Assignment 6

```
#include <iostream>
using namespace std;
int main()
{
	int age = 40;
	int points = 100;

	if (age > 18)
	{
		cout << "Age Is Ok\n";
		if (points > 50)
			cout << "Points Is Ok\n";
		if (sizeof(age) == 4)
			cout << "Age Data Is 4 Bytes\n";
	}
};
```

#### Assignment 7

```
#include <iostream>
using namespace std;
int main()
{
	int result = 0;
	int num1, num2, num3, num4;

	cout << "Enter the first number: ";
	cin >> num1;

	if (num1 < 20 && (num1 % 2 == 0))
		result += num1;
	else
		result += 0;
	cout << "Enter the second number: ";
	cin >> num2;

	if (num2 < 20 && (num2 % 2 == 0))
		result += num2;
	else
		result += 0;
	cout << "Enter the third number: ";
	cin >> num3;

	if (num3 < 20 && (num3 % 2 == 0))
		result += num3;
	else
		result += 0;
	cout << "Enter the fourth number: ";
	cin >> num4;

	if (num4 < 20 && (num4 % 2 == 0))
		result += num4;
	else
		result += 0;
	cout << result;
};
```

### Assignments

#### Assignment 1

```
#include <iostream>
using namespace std;
int main()
{
	cout << "========================\n===== Life Events ======\n========================\n";

	int num;
	cout << "Enter the year: ";
	cin >> num;

	switch (num)
	{
	case 1982:
		cout << "My Birth Day";
		break;
	case 1989:
		cout << "My First Work";
		break;
	case 1995:
		cout << "Windows 95";
		break;
	case 2000:
		cout << "Windows Millennium";
		break;
	case 2002:
		cout << "Created My vBulletin Forum";
		break;
	default:
		cout << "No Events in This Year";
		break;
	}
}
```

#### Assignment 2

```
#include <iostream>
using namespace std;

int main()
{
	int day;
	cin >> day;

	switch (day)
	{
	case 1:
	case 2:
	case 3:
		cout << day << " Shop Is Open";
		break;
	case 4:
	case 5:
		cout << day << " Shop Is Closed";
		break;
	default:
		cout << "Day Is Not Valid";
	}

	return 0;
}
```

#### Assignment 3

```
#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;

	switch (num)
	{
	case 10:
		cout << "Case 1";
		break;
	case 19:
	case 20:
	case 21:
		cout << "Case 2";
		break;
	case 29:
	case 30:
	case 31:
	case 32:
	case 33:
		cout << "Case 3";
		break;
	default:
		cout << "Invalid Number";
		break;
	}
	return 0;
}
```
