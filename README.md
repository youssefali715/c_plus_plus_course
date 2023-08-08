# C++ Course

This is a repository that contains all assignments, cheat sheets and search results for the "Fundamentals of Programming using C++" Course by 'Osama Elzero'.

[Course Link](https://www.youtube.com/playlist?list=PLDoPjvoNmBAwy-rS6WKudwVeb_x63EzgS) | [Study Plan](https://elzero.org/study/cplusplus-study-plan/) | [Lessons Notes](https://elzero.org/category/courses/cplusplus/)

## Week 1

### Lesson 1 & 2

If we can observe something from this lesson we can observe that you must Be Patient & Calm. This is a note for me in the future. You must summarize all lessons, do assignments and don't skip challenges.

### Lesson 3 & 4

![](https://i.imgur.com/UN6PwrV.jpeg)
![](https://i.imgur.com/IT6GXB4.jpeg)
![](https://i.imgur.com/tfUT6Jr.jpeg)
![](https://i.imgur.com/IjtjYIl.jpeg)
![](https://i.imgur.com/4pOJQsG.jpeg)
[Full Document](https://1drv.ms/b/s!Am6KY0K4fPPafQ43mG7WZbuh3eo?e=39AcCQ)

### Lesson 5

- The file that the code is written in it is called the source file
- The code that is written in this file is called Source Code
  ![](https://i.imgur.com/Jdv5tsg.png)
  [Learn More About PreProcessor Directives Here](https://www.geeksforgeeks.org/cc-preprocessors/)

### Lesson 6

The C++ compilation process is the process of converting C++ source code into an executable program. It involves several steps, including **preprocessing**, **compiling**, and **linking**.

During preprocessing, the preprocessor reads the source code and processes any preprocessor directives, such as `#include` and `#define`. These directives tell the preprocessor to include other files or replace certain text in the source code.

Next, the compiler takes the preprocessed source code and translates it into object code, which is a low-level representation of the program that can be executed by the computer.

Finally, during linking, the linker takes the object code and combines it with any necessary libraries to create an executable program.

Source:

- How C++ Works: Understanding Compilation | Toptal®. https://www.toptal.com/c-plus-plus/c-plus-plus-understanding-compilation.
- Learn C++ | Codecademy. https://www.codecademy.com/learn/learn-c-plus-plus.
- C/C++ Preprocessors - GeeksforGeeks. https://www.geeksforgeeks.org/cc-preprocessors/.

### Lesson 7

#### C++ Syntax :

- { } these are called curly braces that contains a block of code
- ; This is a semi colon that each line of code must end with it
- << Stream insertion operator
- Text is wrapped in double quotes
- Spaces are Ignored
- backslah (\\) is apecial character that do something different such as:
  (\\n) that enters a new line

### Lesson 8 (Comments)

#### Comments Syntax:

`// This is a comment` (single line comment)

```
/* This
is
a
comment */
```

(Multiple Line Comment)

#### Use Cases of comments:

Comments in C++ are used to explain the code and make it more readable. They can also be used to prevent execution when testing alternative code¹. Some common use cases for comments in C++ include:

- Summarizing an algorithm
- Identifying a variable’s purpose
- Clarifying a code segment that appears unclear
- Making a program more readable by providing an overall description of the code
- Helping with debugging by making it easier to skip the execution of some parts of the code
- Recapping all the information of the code quickly when a program or code is reused after long periods of time²

Source:

- C++ Comments - W3Schools. https://www.w3schools.com/cpp/cpp_comments.asp.
- C++ Comments - GeeksforGeeks. https://www.geeksforgeeks.org/cpp-comments/.
- C++ Comments - Programiz. https://www.programiz.com/cpp-programming/comments.
- C++ Comments | C-style comments in C++ - Scaler Topics. https://www.scaler.com/topics/cpp/comments-in-cpp/.
- Comments - cppreference.com. https://en.cppreference.com/w/c/comment.

### Search Results

- [x] [C++ iostream](https://1drv.ms/b/s!Am6KY0K4fPPagQJF0FeYiCb78cDP?e=hvUnQH)
- [x] [C++ Compiler](https://1drv.ms/b/s!Am6KY0K4fPPagQPvwTy6juCB7Yi9?e=qGBUU3)
- [x] [C++ Debugger](https://1drv.ms/b/s!Am6KY0K4fPPagQRSSNCAPazIJ_JG?e=hQyM8K)
- [x] [C++ Translation Unit](https://1drv.ms/b/s!Am6KY0K4fPPagQXgGOfaWSHvO5NG?e=IbNzNd)
- [x] [C++ Namespace](https://1drv.ms/b/s!Am6KY0K4fPPagQbL57kyvxw-gd_4?e=zeyn4i)
- [x] [C++ Object Linker](https://1drv.ms/b/s!Am6KY0K4fPPagQdoPiQdW74cbV3k?e=aUeeRs)

### Assignments

#### Assignment 1

```
#include <iostream>

int main()
{
    std::cout << "Line One \n";
    std::cout << "Line Two \n";
    std::cout << "Line Three \n";
    return 0;
}
```

#### Assignment 2

```
/*
  iostream Header File Content
  -- cout
  -- cin
  -- cerr
  -- clog
  -- wcin
  -- wcout
  -- wcerr
  -- wclog
*/
```

#### Assignment 3

```
#include <iostream>

int main()
{
    std::cout << "I am learning Programming \n with \n Elzero \n Web\n School \n <3";
}
```

#### Assignment 4

```
#include <iostream>

int main()
{
    std::cout << "|=======================|\n";
    std::cout << "|== Elzero Web School ==|\n";
    std::cout << "|==        C++        ==|\n";
    std::cout << "|=======================|\n";
}
```

#### Assignment 5

```
// Any Details About the file
#include <iostream> //Preprocessor Directive
int main()
{
    std::cout << "Line One\n"; // Character Output
    std::cout << "Line Two\n";
    std::cout << "Line Three\n";
    return 0;
}
```

## Week 2

### Lesson 9

**Note:** Anything wrapped in double quotes is String
**Note:** If you are tired of writing `std::` then write the following line in the begging of the file `using namespace std`

#### Variable Syntax:

`[dataType] [variableName] [assignmentOperator] [value]`

#### Example:

`int price = 100;` (This is a Variable Declaration)

#### Updating the value:

`price = 20;`

### Lesson 10

In C++, there are some rules for declaring variables. Variable names can range from 1 to 255 characters, must begin with a letter of the alphabet or an underscore (\_), and after the first initial letter, variable names can also contain letters and numbers. Variable names are case sensitive, no spaces or special characters are allowed, and you cannot use a C++ keyword (a reserved word) as a variable name.

C++ has a list of reserved keywords that have special meanings to the compiler and are not available for re-definition or overloading. Some common C++ keywords include `int`, `float`, `double`, `char`, `void`, `for`, `while`, `if`, `else`, `switch`, `case`, `break`, `continue`, `return`, `class`, `struct`, `union`, `enum`, `const`, `volatile`, and many others.

Would you like more information on this topic?

There are also some best practices for naming variables in C++. For example, some people prefer separating words using capitals (myVar or MyVar), or using underscores (my_var). Typically, variables that use underscores are in all lowercase. There are many different styles/conventions that people use when coding C++, so it's important to be consistent in your naming.

Sources:

- What are the rules to declare variables in C++? - Online Tutorials Library. https://www.tutorialspoint.com/What-are-the-rules-to-declare-variables-in-Cplusplus.
- What is a good naming convention for vars, methods, etc in C++?. https://stackoverflow.com/questions/3706379/what-is-a-good-naming-convention-for-vars-methods-etc-in-c.
- Naming Convention in C++ - GeeksforGeeks. https://www.geeksforgeeks.org/naming-convention-in-c/.
- C++ Core Guidelines - GitHub Pages. https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines.
- C++ keywords - cppreference.com. https://en.cppreference.com/w/cpp/keyword.
- C++ Keywords - GeeksforGeeks. https://www.geeksforgeeks.org/cpp-keywords/.
- C++ Keywords | List of C++ keywords | Examples & Codes with Output - EDUCBA. https://www.educba.com/c-plus-plus-keywords/.
- Keywords (C++) | Microsoft Learn. https://learn.microsoft.com/en-us/cpp/cpp/keywords-cpp?view=msvc-170.

### Lesson 11

#### Notes:

- You can declare variables without value

```
int a;
a = 100;
```

- You can declare multiple variables in one line

```
int a, b, c;
a = 100, b = 200, c = 300;
```

- You can make multiple variables with the same value

```
int a, b, c;
a = b = c = 300;
```

### Lesson 12

In C++, the scope of a variable is defined as the extent of the program code within which the variable can be accessed or declared or worked with. There are mainly two types of variable scopes: Local Variables and Global Variables.

Local variables are defined within a function or block and are said to be local to those functions. Anything between `{` and `}` is said to be inside a block. Local variables do not exist outside the block in which they are declared, i.e. they cannot be accessed or used outside that block.

Global variables, on the other hand, can be accessed from any part of the program. They are available throughout the lifetime of a program. They are declared at the top of the program outside all of the functions or blocks.

Sources:

- Scope of Variables in C++ - GeeksforGeeks. https://www.geeksforgeeks.org/scope-of-variables-in-c/.
- Scope (C++) | Microsoft Learn. https://learn.microsoft.com/en-us/cpp/cpp/scope-visual-cpp?view=msvc-170.
- C Variable Scope - W3Schools. https://www.w3schools.in/c-programming/variable-scope.
- C++ Scope of Variables - Online Tutorials Library. https://www.tutorialspoint.com/cplusplus-scope-of-variables.

### Lesson 13 (Constant Variables)

You can declare Variables that their values are for Read-Only and can't be edited using `const` keyword.
`const int a = 100;`

Constant variables serve an important purpose in C++. They can be used to store values that should not be changed throughout the lifetime of a program. For example, if you were creating a program in C++ to document passport values, you wouldn’t want those numbers overridden. This is where constant variables come into play.

Another use case for constant variables is adding constants to code. For example, you could define the speed of light as a constant variable and use it in calculations without worrying about the value changing.

❌ Don't do this:

- You can declare constant variable susing `#define` but this way is not preferable
  let me explain it in a simple way. Imagine you have a toy box and you put a label on it that says "cars only". This means that you can only put toy cars in that box and nothing else. In the same way, in a computer program, we can use something called `const` to label a box (called a variable) so that it can only hold one thing and it can't be changed.

  But, there is another way to label the box called `#define`. This way is not as good because it's like putting a sticky note on the box instead of a real label. The sticky note can fall off or get lost and then we won't know what the box is for. That's why it's better to use `const` to label the box because it's like a real label that won't fall off or get lost.

  It is generally not preferable to declare a constant variable in C++ using `#define` because `#define` performs a token/textual replacement in the source code, not a semantic replacement. This can cause issues with namespace use, as `#define`d variables are replaced with values and not containing a fully qualified name.

  Instead of using `#define`, it is recommended to declare a constant using the `const` keyword. This allows for proper scoping and type checking of the constant variable.

### Lesson 14

[Calaculate your age Application](https://github.com/youssefali715/c_plus_plus_course/blob/main/age_calc.cpp)

### Lesson 15

[Escape Sequences Characters Reference](https://en.cppreference.com/w/cpp/language/escape)

### Search Results:

- [x] [Static Typed Language VS. Dynamic Typed Language](https://1drv.ms/b/s!Am6KY0K4fPPagQpFCJou3g5imi7g?e=Lu9SJN)
- [x] [C++ Variables Use Cases](https://1drv.ms/b/s!Am6KY0K4fPPagQv06nexo_eZkkv2?e=rKxQ7F)

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

## Week 3

### Lesson 16

#### Data Types:

- Integer `int`
  Integer is a number that doesn't contain any decimals and It's a clear number such as: `50` `25` `100` and so on.
- Float `float` and Double `double`
  Both of them are numbers that have decimals such as: `3.14` but the float is limited to 7 decimals only but the double is limited to 15 decimals so if you have a number that you do an operation on it and doesn't know what will it be so it's recommended to use double
- String `string`
  Notice that the color of the `string` is not the same color as `int` or `float` in the editor, This is because string is not a built-in data type but it is user defined by the library `iostream` [Read More](https://stackoverflow.com/questions/5388685/c-is-string-a-built-in-data-type)
- Character `char`
  This type can include only one character of any type

:warning: There is also some types that Mr.Osama didn't talk about, such as:

- void `void`
  Void means without any value. void data type represents a valueless entity. A void data type is used for those function which does not return a value.

- Wide Character `wchar_t`
  Wide character data type is also a character data type but this data type has a size greater than the normal 8-bit data type. Represented by wchar_t. It is generally 2 or 4 bytes long.

[Data Types is a very big ocean, You can learn more about data types from here](https://www.geeksforgeeks.org/cpp-data-types/)

#### Operators and Operands

[Learn More About C++ Operators and Operands from here](https://1drv.ms/b/s!Am6KY0K4fPPagU9QbwdvgyoB6jEN?e=hbxXaG)

#### Determinators of choosing Data Types

1. Operations
   According to the type of opertions, you would choose the type of data you use. As you can't divide an integer on a string and you can't repeat an integer but you can repeat string.
2. Size of Data
   According to the size of data, you would choose the type of data you use. This leads us to the Lesson 17

### Lesson 17

- Our program deosn't store the data in the Hard Disk but it saves it in the **RAM** (**R**andom **A**cess **M**emory).
- Computer Memory is divided into locations that our program saves data in it.
- To find the location of your data in your memory, Add the bitwise operator `&`.
- You can mix between C++ as a static typed language and dynamic typed language by declaring a variable using `auto` keyword
  - Notice that you must add a value to the variable as the language isn't powered by Chat GPT, It can't Predict the type of data in it.

![Data Syzes in Computer](https://am3pap005files.storage.live.com/y4mgp64nF2elYk-oB54kGHz3uHsxdRJDy0UOfx8uzObfrFEt1pqlEUM8DWsSOVYyVx906phCfdAJYT3eZ2qkYwka22DLYZ8dbhy6sj3FZXJkczISzq-YJvwUpqc-Xc0glf02Wrke1gZjCNgUaraIf-pr26hAXMeDQtz6c6VDtnL53V4uEZfOBPfGDqfQfFfJftz?encodeFailures=1&width=318&height=841)

- Our data is reserved in storage with bytes
  - `int` takes 2 or 4 bytes
    C++ is a general-purpose programming language that can be used on a variety of platforms, including Windows, macOS, Linux, and many others. The size of an `int` in C++ is platform-dependent and can vary between 2 or 4 bytes. The exact size is determined by the implementation and can depend on factors such as the hardware architecture and the operating system².
  - `float` takes 4 bytes
  - `double` takes 8 bytes
  - `char` takes 1 byte
  - `bool` takes 1 byte

#### Application

[Convert Kilobytes to Bytes to Bits](https://github.com/youssefali715/c_plus_plus_course/blob/main/kb_to_bytes_to_bits.cpp)

### Lesson 18

- Data is divided into 3 main types, Premitive / Primary & Derived & User-Defined. Look at the following image:
  ![Data Types in C++](https://media.geeksforgeeks.org/wp-content/cdn-uploads/20191113115600/DatatypesInC.png)

Today, We will talk about Integer

#### What is Integer?

An integer is a whole number, including positive numbers, negative numbers, and zero. Here are some examples of integers: 1, 2, -3, 0, 100, -500. The set of integers is denoted by the symbol Z.

#### Limits

There are limits for Integers in C++ [Here's a document that explain why there's a limit for Integers in C++](https://1drv.ms/b/s!Am6KY0K4fPPagVj6EjUIE1vQViQd?e=b6RaME). However, You can use `INT_MIN` and `INT_MAX` to know the limits. These Values are declared by `#define` in `limits.h` file.

#### endl; VS. \n

[Here's a document to expalin the difference between them](https://1drv.ms/b/s!Am6KY0K4fPPagVrSVvypRY1b7B-Q?e=ahyXBM)

### Lesson 19 (Double and float)

#### Why we declare Variable Data Type?

The basic answer is to increase Performance, but how? We are talking about 2 and 4 bytes. Computer now have 16 Gigs of RAM. Does it matter for us to declare variable data type. [Here is a document that explains this point](https://1drv.ms/b/s!Am6KY0K4fPPagVvBNLuQSeyukp4n?e=KWHHAW)

#### Truncation

Truncation basically is removing the fractional component from a number. This process is operated automatically when you put float or double in an integer. [You can learn more about Truncation from here](https://1drv.ms/b/s!Am6KY0K4fPPagVzTj9eeZTuc_sJp?e=gHsWfP)

- You can add Integer to a float var. An integer is not considered a float in the traditional sense. A float is a number that has a decimal point, while an integer does not. However, in many programming languages, an integer can be implicitly converted to a float when it is used in an operation that requires a float. This means that the integer will be converted to a float before the operation is performed, and the result of the operation will be a float.
- When we use auto or when we add two integrs, we want to male sure that they are float by adding the suffix `f`

### Lesson 20 `char`

- A character is put in single quotes `''` not in double quotes `""`
- Every Character has an ASCII Value [If you want to know more about ASCII and why we created it, Click here](https://1drv.ms/b/s!Am6KY0K4fPPagV1HmrEKOKFBguwl?e=tzbxSC)

[Convert Int to ASCII App](https://github.com/youssefali715/c_plus_plus_course/blob/main/int_to_ASCII.cpp)

[Convert ASCII to INT App](https://github.com/youssefali715/c_plus_plus_course/blob/main/ASCII_to_int.cpp)

### Lesson 21 `bool` and `void`

#### Boolean Data Type

- Boolean data type in js is explained in two keywords: `true` and `false`.
- :radioactive: The keywords are case-sensitive.
- [Here is a document that expalins why could i use the number value of a boolean data type variable?](https://1drv.ms/b/s!Am6KY0K4fPPagV-zUmkixzzM2zBe?e=ioDucV)
- You can put a condition as a value for a boolean variable and the result will be outputed according to the result of the condition.

#### Void

Void means without any value. void data type represents a valueless entity. A void data type is used for those function which does not return a value.

### Leeson 22 (Type Modifiers and Type Alias)

- Type Modifiers are made to modify the length of data.
  Sure, here are some use cases for type modifiers in C++:
- Here are use cases for Type Modifiers in C++:

  - **To specify the size of a data type:** The `short` and `long` modifiers can be used to specify the size of a data type. For example, `short int` is a smaller data type than `int`, and `long int` is a larger data type than `int`.
  - **To specify the signedness of a data type:** The `signed` and `unsigned` modifiers can be used to specify the signedness of a data type. A `signed` data type can store both positive and negative numbers, while an `unsigned` data type can only store positive numbers.
  - **To improve the readability and understandability of code:** Type modifiers can be used to improve the readability and understandability of code. For example, if you are using a `short int` to store a small number, you can use the `short` modifier to make it clear to the reader that the number is small.
  - **To enforce good programming practices:** Type modifiers can be used to enforce good programming practices. For example, you might use the `const` modifier to ensure that a variable cannot be changed after it is initialized.

  Here are some examples of how type modifiers can be used in C++:

  ```c++
  short int my_short_variable; // A small integer variable
  long int my_long_variable; // A large integer variable
  unsigned int my_unsigned_variable; // An unsigned integer variable
  const int my_constant_variable = 10; // A constant integer variable
  ```

- A type alias in C++ is a way of giving a new name to an existing data type. This can be useful for making your code more readable and easier to understand.
- Another reason to use type aliases is to make your code more flexible. For example, let's say you have a function that takes an int as an argument. You could create a type alias called my_integer that is a synonym for int. This would allow you to pass any type that can be implicitly converted to an int to the function.
- There are two ways to write a type alias:
  1.  `using [Identifier] [Assignmnet Operator] [type]`
      Example:
      `using BigNum = long long int`
  2.  `typedef [type] [Identifier]`
      Example:
      `typedef long long int BigNum`

### Lesson 23

[Type Casting](https://1drv.ms/b/s!Am6KY0K4fPPagV6REDyA4CMONnB9?e=osFthH)

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

## Week 4

### Lesson 24 --> 28

We explained it previously, but [Here is the document that we shared before](https://1drv.ms/b/s!Am6KY0K4fPPagU9QbwdvgyoB6jEN?e=vCUETR).
And [Here is a document that expalins modulus and its use cases](https://1drv.ms/b/s!Am6KY0K4fPPagWR7pOllGzRFfXOv?e=xwvn2z)

### Lesson 29

We can shorten Operator Presednce to the following sentence:
[**P**lease **E**xecuse **M**y **D**ear **A**unt **S**ally]
P --> Parantheses
E --> Exponent
M --> Multiplication
D --> Division
A --> Addition
S --> Subtraction

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

## Week 5

### Lessons 30 --> 32

If Condition Syntax

```
if (condition)
{

}
else if (condition)
{
	if (condition)
	{

	}
	else if (condition)
	{

	}
}
else
{

}
```

### Lessons 33 --> 34

Ternary condition Operator

```
(condition) ? True : false
```

### Lessons 35

- [Even & Odd numbers Checker](https://github.com/youssefali715/c_plus_plus_course/blob/main/even_odd_checker.cpp)
- [Find the greates number App](https://github.com/youssefali715/c_plus_plus_course/blob/main/find_great.cpp)
- [Player Rank Checker](https://github.com/youssefali715/c_plus_plus_course/blob/main/rank_check.cpp)
- [Simple Calculator](https://github.com/youssefali715/c_plus_plus_course/blob/main/calc.cpp)

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

### Lesson 36

#### Switch Statment Syntax

```
switch(expression) {
case x:
// code block
break;
case y:
// code block
break;
default:
// code block
}
```

- You can merge between two cases
- Switch Statments accept only `char` and `int`

- [Use cases of Switch Statements](https://1drv.ms/b/s!Am6KY0K4fPPagWmt_6isbFjGzvMv?e=94A4Kg)
- [When to use switch and when to use if](https://1drv.ms/b/s!Am6KY0K4fPPagWoJ3PBv8Yo88cew?e=lSOL35)
- [Use cases of not using break](https://1drv.ms/b/s!Am6KY0K4fPPagWiR3guxnT5Szj9y?e=CVgIms)

### Lesson 37

- [x] [Award System Application](https://github.com/youssefali715/c_plus_plus_course/blob/main/award_sys.cpp)
- [x] [Discount Application](https://github.com/youssefali715/c_plus_plus_course/blob/main/discount.cpp)
- [x] [Simple Calculator](https://github.com/youssefali715/c_plus_plus_course/blob/main/calc_v2.cpp)

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

## Week 6

### Lesson 38 & 39 & 40(Arrays)

1. It is a collection of dat of the same type
2. The data is placed in contguos memory locations
3. We can achieve certain elements by indexing
4. C++ is a zero-based-indexing language

#### Syntax

`[dataType] [varName] [No. of elements](optional) =(optional) {ele1, ele2, ele3, ....}`

- :radioactive: The size of data depends on no. of elements

#### Acessing elements

`varName [no.]`

The index of last element = No. of elements -1

#### Adding & Updating elements

`varName [index no.] = value`

#### Getting the length of an array

sizeOf(array) / sizeOf (array[0])

### Lesson 41 (2D Array)

- A 2D array is an array with rows and columns like MS Excel

#### Syntax

`dataType varName [No. of Rows] [No. of columns] = {{}, {}, {}}`

### Lesson 42

`int points[4] = {1,2,3,4}` --> c-style-array
Preferred Method:
`std::array <dataType, size> Identifier = {1,2,3,4};`
This method allows us to use various methods in the array class like:

1. array.fill(value) // Fill all the values with another values
2. array.front() // Brings the first element
3. array.back() // Brings the last element
4. array.at() // Brings specific element
5. array.size() // Brings the length
6. array.empty() // Checks if the array is empty or not
