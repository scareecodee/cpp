/*
Unary operators are operators that operate on a single operand.
1. Unary Plus (+) ---> Indicates a positive value. 
int x = +5;   // same as x = 5

2.  Unary Minus (-) ---> Negates the value of the operand.
int x = 5;
int y = -x;   // y = -5

3. INCREMENT / DECREMENT Operators ---> operates on only variables not on const. literals

(a) Increment (++)
Increases the value of a variable by 1.

Two types:
Prefix: ++x → Increments, then returns value.
Postfix: x++ → Returns value, then increments.

(b)Decrement (--)
Decreases the value of a variable by 1.

Two types:
Prefix: --x
Postfix: x--

*/

#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 5;

    // Pre-increment: ++a (increments before using)
    int x = ++a;  // a becomes 6, x = 6

    // Post-increment: b++ (uses then increments)
    int y = b++;  // y = 5, then b becomes 6

    cout << "After pre-increment (++a): a = " << a << ", x = " << x << endl;
    cout << "After post-increment (b++): b = " << b << ", y = " << y << endl;

    // Pre-decrement
    int m = --a;  // a becomes 5, m = 5

    // Post-decrement
    int n = b--;  // n = 6, then b becomes 5

    cout << "After pre-decrement (--a): a = " << a << ", m = " << m << endl;
    cout << "After post-decrement (b--): b = " << b << ", n = " << n << endl;
}

