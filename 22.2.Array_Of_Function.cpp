/*
1. What is an Array of Function Pointers?
In C++, a function pointer array is an array where each element is a pointer to a function. You can call different functions dynamically using these pointers, just like using an array of objects.

2. When & Why Use Function Pointer Arrays?
✅ Useful when:

You want to call functions based on conditions (e.g., a switch-case replacement)

Building menus, command systems, parsers, or state machines


*/

#include <iostream>
using namespace std;

// Step 1: Define some functions
int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }

int main() {
    // Step 2: Declare array of function pointers
    // Each function takes two ints and returns int
    int (*operation[3])(int, int) = { add, subtract, multiply };

    int x = 10, y = 5;

    // Step 3: Call using index
    cout << "Add: " << operation[0](x, y) << endl;       // 15
    cout << "Subtract: " << operation[1](x, y) << endl;  // 5
    cout << "Multiply: " << operation[2](x, y) << endl;  // 50

    return 0;
}
