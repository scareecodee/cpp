/*
✅ What is Operator Overloading?
Operator Overloading means redefining an existing operator (like +, -, ==, etc.) to work with user-defined types (like classes).

👉 C++ lets you "teach" operators how to behave when used with your custom objects.

🔹 Why Use It?
Makes code more readable & intuitive.

Allows using operators with objects just like basic types.

Essential for classes like complex numbers, matrices, strings, etc.

📌 Syntax of Operator Overloading
return_type operatorOP(symbol) (arguments) {
    // code
}

Or inside a class:

class MyClass {
public:
    MyClass operator+(MyClass obj); // overload +
};
 Example: Overloading + Operator for Complex Numbers

#include <iostream>
using namespace std;

class Complex {
private:
    float real, imag;

public:
    Complex(float r = 0, float i = 0) {
        real = r;
        imag = i;
    }

    // Overload + operator
    Complex operator+(Complex c) {
        return Complex(real + c.real, imag + c.imag);
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(2.5, 3.5), c2(1.2, 4.3);
    Complex result = c1 + c2;
    result.display();
    return 0;
}
🔍 Output:

3.7 + 7.8i

🔧 Common Overloadable Operators
Operator	Meaning
+	Addition
-	Subtraction
*	Multiplication
/	Division
==	Equality check
[]	Indexing
()	Function call
<< >>	Stream I/O

❌ Operators You Cannot Overload

. (member access)
.* (pointer-to-member)
:: (scope resolution)
sizeof
typeid

✅ Example: Overloading == Operator

class Person {
public:
    string name;
    int age;

    Person(string n, int a) : name(n), age(a) {}

    bool operator==(Person p) {
        return (name == p.name && age == p.age);
    }
};
*/