/*
 Function Overriding in C++ — Detailed Explanation

 Function Overriding means redefining a base class function in the derived class with the same signature (same name,
 parameters, and return type).

---> It allows a derived class to provide a specific implementation for a function that is already defined in its base class.
*/


// Case 1: Overriding Without Virtual → No Runtime Polymorphism

#include <iostream>
using namespace std;

class Base {
public:
    void show() {     //  No virtual keyword used
        cout << "Base show()" << endl;
    }
};

class Derived : public Base {
public:
    void show() {     // Overriding, but runtime polymorphism not achieved
        cout << "Derived show()" << endl;
    }
};

int main() {
   Derived d;
   d.show(); // which fn has to be called is decided at compile time.output --> Derived show()
}


