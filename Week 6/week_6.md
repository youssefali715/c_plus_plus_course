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

### Lesson 42 & 43

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

### Lesson 44

[Guess the number game]()

### Lesson 45 & 46 (String & Concatenation)

- String is array of Characters
- The combiler adds `\0` to terminate the string

#### Syntax

`char str[] = "YA";`
OR
`char str[] = {'Y', 'A'};`
OR
`string str = "YA";`

#### Concatenation

- You must include the library `string.h`
  `strcat(str1, str2);`
  OR
  `str1 + str2`
  OR
  `str1.append(str2)`

### Search Results

- [x] [Matrix Operations](https://1drv.ms/b/s!Am6KY0K4fPPagX11MuX9OVue3ekH?e=beEq0V)
- [x] [3D Array](https://www.geeksforgeeks.org/multidimensional-arrays-in-c/)
- [x] [C++ Array](https://cplusplus.com/doc/tutorial/arrays/)
- [x] [C++ Array & Vector](https://cplusplus.com/reference/vector/vector/)
- [x] [C++ String](https://cplusplus.com/reference/string/string/)
