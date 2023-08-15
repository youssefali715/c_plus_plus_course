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
