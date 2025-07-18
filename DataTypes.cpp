/*
Three categories ---?
1. Primitive
2. Derived
3. User-defined

/*

1. Primitive data type

| Type      | Keyword  | Example Value | Description                  |
| --------- | -------- | ------------- | ---------------------------- |
| Integer   | `int`    | `10`          | Whole numbers                |
| Character | `char`   | `'A'`         | Single character             |
| Boolean   | `bool`   | `true/false`  | Logical (1 or 0)             |
| Floating  | `float`  | `3.14f`       | Decimal numbers              |
| Double    | `double` | `3.14159`     | Double-precision float       |
| Void      | `void`   | –             | No value / used in functions |


a) integers

| Type                    | Size (Typical) | Range                    |
| ------------------------| -------------- | ------------------------ |
| `short`                 | 2 bytes        | -32,768 to 32,767        |
| `int`                   | 4 bytes        | -2,147,483,648 to 2.14e9 |
| `long`                  | 4 or 8 bytes   | Larger range             |
| `long long`             | 8 bytes        | ±9 quintillion           |


b) floating point numbers

| Type          | Size        | Precision           |
| ------------- | ----------- | ------------------- |
| `float`       | 4 bytes     | \~6 decimal places  |
| `double`      | 8 bytes     | \~15 decimal places |
| `long double` | 10-16 bytes | Extended precision  |

*/

/*
Derived Data Types

| Type       | Description                  |
| ---------- | ---------------------------- |
| Arrays     | Collection of same data type |
| Pointers   | Stores memory address        |
| References | Alias to another variable    |
| Functions  | Code that performs a task    |

*/

/*
User-Defined Data Types

| Type     | Description                    |
| -------- | ------------------------------ |
| `struct` | Group of variables             |
| `union`  | Memory-efficient grouping      |
| `enum`   | User-defined integer constants |
| `class`  | Blueprint for objects (OOP)    |

*/


/*
What is Signed and Unsigned in C++?
🔹 Signed:
Can store both positive and negative numbers.

Default type for most integer types (int, short, etc.)

🔹 Unsigned:
Can store only positive numbers (including 0).

Cannot represent negative values.
*/


/*
char can be used to store small numbers.
| Type            | Range           |
| --------------- | --------------- |
| `signed char`   | **-128 to 127** |
| `unsigned char` | **0 to 255**    |
*/

//  '/0' ----> null character . ASCII value = 0

#include <iostream>
using namespace std;

int main(){

    int a=10;  // here 10 is of int type --->  by default integer data is of int type
    cout <<a<<endl;
    a=12.5;  // truncated decimal part
    cout <<a<<endl;

    cout <<10.5<<endl; // here 10.5 is of double data type ---> by default floating point numbers are of double data type
     cout <<10.5f<<endl;  // 10.5 ---> float
    float b=10.5; // type conversion of 10.5(double) to 10.5(float)
    float c=10.5f; // no type conversion ---> 10.5 is already of float data type

    char ch='a';  // used to store a single character --> in single quote
    cout <<ch<<endl;
    bool d=true; 
    cout <<d<<endl;  // will print 1 ---> true --- 1 and false ---0
    /*
    non zeros number --> true
    zero ---> false
    '/0'  ---- null character ---> false
    */
    

      char j='abcde';  //will store last character . --> compiler will show warning
      cout<<j<<endl; 

      char c = 'A';    
      int x = c;        // x becomes 65

        return 0;
}


