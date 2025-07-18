/*
 What is Method Overloading?
Method overloading in C++ means you can define multiple functions with the same name in the same scope but with different parameter lists (number or type of parameters).

 Rules of Overloading

You can overload functions by changing:
✅ Number of parameters
✅ Type of parameters
✅ Order of parameters

But you cannot overload by:
❌ Return type only

✅ Why Use Overloading?
Improves code readability and reusability.
Logical grouping of methods with similar functionality.
Makes APIs easier to use.

IMPORTANT ----> In C++, when you overload a function, the decision about **which function to call is made at compile-time.
This is known as compile-time polymorphism or static binding.

*/

#include <iostream>
using namespace std;

class Calculator {
public:
    // Function with two int parameters
    int add(int a, int b) {
        return a + b;
    }

    // Function with two double parameters
    double add(double a, double b) {
        return a + b;
    }

    // Function with three int parameters
    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    Calculator calc;

    cout << calc.add(2, 3) << endl;           // Calls int version
    cout << calc.add(2.5, 3.5) << endl;       // Calls double version
    cout << calc.add(1, 2, 3) << endl;        // Calls 3-int version

    return 0;
}
