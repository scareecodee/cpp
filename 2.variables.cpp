/*
A variable is:

A named container in memory to store data.
It is assigned a data type like int, float, char, etc.
 space for variables in C++ is allocated in RAM (main memory).

It has:
A name ---> valid identifier
A data type
A value
An unique address in memory

if variable not initialized ---> garbage data 
as we initialize data garabage data is overriden
*/


/*
What are Identifiers in C++?
An identifier is the name you give to elements in your C++ program — such as:

Variables
Functions
Classes

Rules for Naming Identifiers in C++:

Rule	Example
Can contain letters (A–Z, a–z), digits (0–9), and underscores  eg:	my_var1
Must not begin with a digit	❌ 1num → invalid
Cannot use C++ keywords	❌ int, class, return
C++ is case-sensitive	MyVar ≠ myvar
No special characters (@, $, etc.)	❌ @name → invalid

*/


/*
 What Are Constants in C++?
A constant in C++ is a value that does not change during the execution of the program.

| Type                  | Example                        | Description                       |
| --------------------- | ------------------------------ | --------------------------------- |
| **Literal constants** | `10`, `3.14`, `'A'`, `"Hello"` | Hardcoded values                  |
| **`const` variables** | `const int x = 10;`            | Named constant variable           |
| **`#define` macros**  | `#define PI 3.14`              | Preprocessor constant (old style) |
| **`constexpr`**       | `constexpr int x = 5;`         | Compile-time constant (C++11+)    |

*/

#include <iostream>
using namespace std;

int main(){
    int x;
    cout << x <<endl;
    int y=10;
    cout << y <<endl;
    y=20;
    cout <<y;
    const int a=100;
    cout <<endl <<a ;
    // a=200; // --> will show error --> read only variable
}