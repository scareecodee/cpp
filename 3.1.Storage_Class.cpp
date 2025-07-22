/*
 Storage Classes in C++
Storage class in C++ defines scope, visibility, lifetime, and default initial value of a variable or function. It tells the compiler where to store the variable, how long it exists, and who can access it.

 1. auto
Default for local variables inside functions.

Automatically deduces the data type (in modern C++, also used for type inference).

auto x = 10;   // x is deduced as int
⚠️ In C++98, auto meant local variable only. In C++11 and later, auto is for type deduction.


2. register
Requests to store variable in CPU register instead of RAM (faster access).

Can't take its address using & operator.

Mostly ignored by modern compilers.


 3. static
Retains the value of a variable between function calls.

Lifetime: entire program.

Scope: local (if declared inside function), global (if outside).

Used to create persistent local state.

 4. extern
Used to declare a global variable that is defined in another file.

Allows sharing variables/functions across files.

file1.cpp 
int a = 10;

file2.cpp
extern int a;  // refers to the variable in file1.cpp
std::cout << a;

 5. mutable
Applies only to class member variables.

Allows modification of a member even if the object is const.

*/

#include <iostream>
using namespace std;

void counter() {
    static int count = 0; // initialized only once
    count++;
    std::cout << count << std::endl;
}

int main() {
    counter(); // 1
    counter(); // 2
    counter(); // 3
}


/*
| Storage Class | Scope         | Lifetime        | Default Value | Use Case                        |
| ------------- | ------------- | --------------- | ------------- | ------------------------------- |
| `auto`        | Local         | Function block  | Garbage value | Type deduction (C++11 onwards)  |
| `register`    | Local         | Function block  | Garbage value | Fast access, CPU register hint  |
| `static`      | Local/Global  | Entire program  | 0             | Retain value across calls       |
| `extern`      | Global        | Entire program  | 0             | Cross-file variable reference   |
| `mutable`     | Class members | Object lifetime | Depends       | Modify member in `const` object |

*/