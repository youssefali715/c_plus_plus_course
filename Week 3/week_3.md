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
