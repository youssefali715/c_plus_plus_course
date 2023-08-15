### Assignments

#### Assignment 1

```
#include <iostream>
using namespace std;

int main()
{
    // Write Your Code Here
    int age = 40, period = 10;
    // Do Not Edit The Next 2 Lines
    cout << "My Age Is: " << age << "\n";
    cout << period << " Years Ago My Age Was: " << age - period << "\n";
    // Add The Third Line Below
    cout << "After " << period << " Years My Age Will Be : " << age + period;
    return 0;
}

```

#### Assignment 2

```
#include <iostream>
using namespace std;

int main()
{
    // Write Your One Line Code Here
    int a, b, c;
    // Do Not Edit Below
    a = 10, b = 20, c = 70;
    cout << "Sum Of All Number Is: " << a + b + c;
    return 0;
}
```

#### Assignment 3

```
/*
	name        [ Valid | Good Practice ]
	NAME        [ Valid | Bad Practice ]
	1name       [ Not Vaild ] => because it starts with a number
	__name      [ Valid | Good Paractice] => because it starts with an underscore
	name@name   [ Not Valid ] => because it includes an underscore
	name10name  [ Valid | Bad Practice ] => because it has an unmeaningful name
	name!name   [ Not Valid ] => because it includes an exclamation mark
	first_NAME  [ Valid | Bad Practice ]
	first_name  [ Valid | Good Practice ]
	firstName   [ Valid | Good Practice ]
	first name  [ Not Valid ] => because it has a space between words
	fn          [ Valid | Bad Practice ] => because it has an unmeaningful name
	public      [ Not Valid ] => because it is a language keyword
	Public      [ Valid ] => it is not a keyword
*/
```

#### Assignment 4

```
#include <iostream>
using namespace std;

int main()
{
	// Write my_text Variable Content Here
	string my_text = "============\n== Elzero ==\n============";

	// Do Not Edit Below
	cout << my_text;
	return 0;
}
```

#### Assignment 5

```
#include <iostream>
using namespace std;

int main()
{
	// Do Not Edit Below
	int a, b, c = 100;

	// Add Your Code Here
	a = b = c;
	// Do Not Edit Below
	cout << a + b + c; // 300
	return 0;
}
```

#### Assignment 6

```
#include <iostream>
using namespace std;

int main()
{
	// Do Not Edit Below
	int a = 210, b = -50, c = -40;

	// Write Your cout Code Here
	cout << a - b - c;
	return 0;
}
```

#### Assignment 7

```
#include <iostream>
using namespace std;

int num = 50;

int read()
{
	int num = 100;
	cout << num;
	return 0;
}

int play()
{
	int num = 200;
	read();
	return 0;
}

int main()
{
	play();
	return 0;
}
```

#### Assignment 8

```
#include <iostream>
using namespace std;
int main()
{
	// Edit Here To Fix The Error
	int current_year;
	int birth_year;

	// Do Not Edit Here
	current_year = 2022;
	birth_year = 1982;
	int age_in_years = current_year - birth_year;
	cout << age_in_years;
	return 0;
}
```

#### Assignment 9

```
#include <iostream>
using namespace std;

int main()
{
	// Write Your Code Here
	int num;
	cout << "Enter ther Number: ";
	cin >> num;
	cout << num * num;
	// Num 10
	// Needed Output 100 [10 * 10]
	return 0;
}
```

#### Assignment 10

```
#include <iostream>
using namespace std;

int main()
{
	// Write Your Code Here
	int num1, num2;
	cout << "Enter the first number: ";
	cin >> num1;

	cout << "Enter the second number: ";
	cin >> num2;

	cout << num1 * num2;
	// Number One => 10
	// Number Two => 100
	// Needed Output 1000 [10 * 100]
	return 0;
}
```

#### Assignment 11

```
#include <iostream>
using namespace std;

int main()
{
	cout << "Bello\rHello Elzero\bo";
	cout << " Web School\bl\bl";
	cout << " I Love Programming";
	cout << " Too Much";
	cout << " Specially C++";
	return 0;
}

```
