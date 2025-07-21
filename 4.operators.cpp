/*
Operators in C++
In C++, operators are special symbols used to perform operations on variables and values. For example: +, -, *, /, =.

Operands in C++
An operand is a value (or variable) on which an operator performs an operation.

int sum =10+20;

+ is the operator (binary operator--> takes two operands)
10,20 ---> operands

*/

/*
----------TYPES OF OPERATORS---------

1. Arithmetic Operators	+, -, *, /, %	Basic math operations

2.Relational Operators	==, !=, <, >, <=, >=	Comparison operations  --->returns either  true (i.e., 1) or false (i.e., 0)

3.	Assignment Operators	=, +=, -=, *=, /=, %=	--->Assign and update values

4. Logical Operators 
Logical AND (&&) , 
Logical OR (||) , 
Logical NOT (!) ---> !true → false, !false → true

*/

#include <iostream>
using namespace std;

int main(){
        int a = 5,  b= 2;
    cout << "a + b = " << a + b << endl;   // 7
    cout << "a - b = " << a - b << endl;   // 3
    cout << "a * b = " << a * b << endl;   // 15
    cout << "a / b = " << a / b << endl;   // 2 (integer division)
    cout << "a / b = " << a /(double)b << endl; // 2.5
    cout << "a % b = " << a % b << endl;   // 1 ---> remainder

    cout << (a == b) << endl;   // 0 (false)
    cout << (a != b) << endl;   // 1 (true)
    cout << (a < b) << endl;    // 0 (false)
    cout << (a > b) << endl;    // 1 (true)
    cout << (a <= b) << endl;   // 0 (false)
    cout << (a >= b) << endl;   // 1 (true)

    // ✅ Output will be in 0 (false) or 1 (true) format.
    // Use cout << boolalpha; to print true/false instead.

    bool x = true;
    bool y = false;

    cout << (x && y) << endl;   // 0 (false)
    cout << (x || y) << endl;   // 1 (true)
    cout << (!x) << endl;       // 0 (false)
    cout << (!y) << endl;       // 1 (true)

}