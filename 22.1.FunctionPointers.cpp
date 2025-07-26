/*
Function pointers in C++ are powerful tools that allow you to:

Store addresses of functions in variables.

Pass functions as arguments to other functions.

Call functions dynamically at runtime.

 What is a Function Pointer?
A function pointer is a variable that stores the address of a function that can be called later.

return_type (*pointer_name)(parameter_list);



// A simple function

void sayHello() {
    std::cout << "Hello!\n";
}

// Function pointer declaration and assignment
void (*funcPtr)() = sayHello;

// Calling function using pointer
funcPtr();  // Output: Hello!

*/

#include <iostream>
int add(int a, int b) {
    return a + b;
}

int (*ptr)(int, int) = add;


int main(){
    int result = ptr(5, 3);    // or (*ptr)(5, 3)
std::cout << result;       // Output: 8

}