### Assignments

#### Assignment 1

```
/*
'a' //char --> Character
'9' //char --> Character
9  //int --> Integer
true //bool --> boolean
100 //int --> Integer
-10 //int --> Integer
0 //int --> Integer
false //bool --> boolean
10.9 // float/double
*/
```

#### Assignment 2

```
#include <iostream>
using namespace std;
int main()
{
	double salary = 5000.98;
	cout << sizeof(salary) << " Bytes" << endl;
	// 8 Bytes
	cout << sizeof(salary) * 8 << " Bits" << endl;
	// 64 Bits
}
```

#### Assignment 3

```
#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
	cout << "Maximum Integer Number Is => " << INT_MAX << endl;
	cout << "Minimum Integer Number Is => " << INT_MIN << endl;
	cout << "Maximum Short Integer Number Is => " << SHRT_MAX << endl;
	cout << "Minimum Short Integer Number Is " << SHRT_MIN << endl;
}
```

#### Assignment 4

```
#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
	cout << sizeof(10.5f + 5 + 20.5f + 10) << "\n"; // 8
}
```

#### Assignment 5

```
#include <iostream>
using namespace std;
int main()
{
	char a = '~';
	char b = '&';
	char c = '%';
	char d = 'A';
	cout << "ASCII Value of " << a << " Is " << (int)a << endl;
	cout << "ASCII Value of " << b << " Is " << (int)b << endl;
	cout << "ASCII Value of " << c << " Is " << (int)c << endl;
	cout << "ASCII Value of " << d << " Is " << (int)d << endl;
}
```

#### Assignment 6

```
#include <iostream>
using namespace std;
int main()
{
	int a = 69;
	int b = 108;
	int c = 122;
	int d = 101;
	int e = 114;
	int f = 111;

	cout << "Character Of This ASCII Value " << a << " Is " << (char)a << endl;
	cout << "Character Of This ASCII Value " << b << " Is " << (char)b << endl;
	cout << "Character Of This ASCII Value " << c << " Is " << (char)c << endl;
	cout << "Character Of This ASCII Value " << d << " Is " << (char)d << endl;
	cout << "Character Of This ASCII Value " << e << " Is " << (char)e << endl;
	cout << "Character Of This ASCII Value " << f << " Is " << (char)f << endl;
	cout << (char)a << (char)b << (char)c << (char)d << (char)e << (char)f;
}
```

#### Assignment 7

```
#include <iostream>
using namespace std;
int main()
{
	int a = 1;
	int b = 13;
	int c = 17;
	int d = 70;
	cout << char(d - a);
	cout << char(d + c);
	cout << char(d + b);

}
```

#### Assignment 8

```
#include <iostream>
using namespace std;
int main()
{
	// Edit Anything Except Values
	short int a = 100;
	long long int b = 15001500;
	long double c = 100.54565746;

	// Do Not Edit
	cout << sizeof(a) << " Bytes\n"; // 2 Bytes
	cout << sizeof(b) << " Bytes\n"; // 8 Bytes
	cout << sizeof(c) << " Bytes\n"; // 16 Bytes
}
```

#### Assignment 9

```
#include <iostream>
using namespace std;
int main()
{
	// Edit Anything Except Values
	unsigned int a = 100;
	signed int b = -100;
	short c = 100;
	float d = 500.55;

	// Do Not Edit
	cout << a << "\n"; // 100
	cout << b << "\n"; // -100
	cout << c << "\n"; // 100
	cout << d << "\n"; // 500.55
}
```

#### Assignment 10

```
#include <iostream>
using namespace std;
int main()
{
	// Add Type Alias Here
	using lli = long long int;
	typedef long long int lli;

	// Do Not Edit
	lli num = 150050005; // This Is Long Long Int
	cout << num << "\n"; // 150050005
}
```

#### Assignment 11

```
#include <iostream>
using namespace std;
int main()
{
	// Do Not Edit Here
	short int a = 100;
	float b = 98.5f;
	double c = 1.7;

	// Edit This Line And Use Type Casting To Get The Output
	cout << a + int(b + c) << "\n"; // 200
}
```

#### Assignment 12

```
#include <iostream>
using namespace std;
int main()
{
	short a = 1000;
	int b = 10000;
	long double c = 5.560000505012;

	cout << sizeof(c) - sizeof(b) << "\n";									 // 12
	cout << sizeof(c) + sizeof(b) << "\n";									 // 20
	cout << sizeof(b) * (sizeof(c) / 2) << "\n";						 // 32
	cout << int(c) * a << "\n";															 // 5000
	cout << char((sizeof(c) / 2) * (sizeof(c) - 6)) << "\n"; // P
}
```
