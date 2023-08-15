### Assignments

#### Assignment 1

```
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// I hated my life after this assignment
int main()
{
	int num = 3;
	cout << num + num << "\n";					   // 6
	cout << num * num - num << "\n";			   // 6
	cout << (num + num) * int(log(num)) << "\n";   // 6
	cout << (num + num + num) - num << "\n";	   // 6
	cout << (num + num) + (num % num) << "\n";	   // 6
	cout << (num + num--) + (num / num) << "\n";   // 6
	cout << (++num - num) + (num * num--) << "\n"; // 6
}
```

#### Assignment 2

```
#include <iostream>
using namespace std;
int main()
{
	cout << (10 * 20) + (15 % 3) + (190 + 10) - 400 << "\n"; // 0
}
```

#### Assignmnt 3

```
#include <iostream>
using namespace std;
int main()
{
	// Do Not Edit
	int num = 3;

	num++;
	num++;
	num++;
	// Do Not Edit
	cout << num << "\n"; // 6
}
```

#### Assignmet 4

```
#include <iostream>
using namespace std;
int main()
{
	cout << ((int)10.5 * 5) + ((int)40.5 + (int)10.1) << "\n"; // 100
}
```

#### Assignment 5

```
#include <iostream>
using namespace std;
int main()
{
	// // Assign The Values
	char a = 'Y'; // 98
	char b = '!'; // 33
	char c = '!'; // 33

	// // Do Not Edit
	cout << b * c + -a << "\n"; // 1000
}
```

#### Assignment 6

```
#include <iostream>
using namespace std;
int main()
{
	int a = 10;
	int b = 25;
	int c = 15;

	cout << (a < b) << "\n";					// True
	cout << (c > a) << "\n";					// True
	cout << (a + c == b) << "\n";			// True
	cout << (c > a) << "\n";					// True
	cout << (c < b) << "\n";					// True
	cout << (b > a || b > c) << "\n"; // True
	cout << !(a == b) << "\n";				// True
	cout << (a < b && b > a) << "\n"; // True
}
```

#### Assignment 7

```
#include <iostream>
using namespace std;
int main()
{
	int a = 10;
	int b = 20;

	cout << (((a + b) * (a + b)) + (a * a)) * a << "\n"; // 10000
}
```

#### Assignment 8

```
#include <iostream>
using namespace std;
int main()
{
	int num = 10;
	cout << --num << "  | " << num++ << "  | " << ++num << "\n"; // 9 | 9 | 11
	cout << num++ << " | " << num << " | " << num << "\n";			 // 11 | 12 | 12
	cout << --num << " | " << --num << " | " << --num << "\n";	 // 11 | 10 | 9
}
```
