#include <iostream>
using namespace std;

// Base class
class A {
public:
    A() {
        cout << "Constructor of Class A called" << endl;
    }
};

// Derived from A
class B : public A {
public:
    B() {
        cout << "Constructor of Class B called" << endl;
    }
};

// Derived from B
class C : public B {
public:
    C() {
        cout << "Constructor of Class C called" << endl;
    }
};

int main() {
    C obj;  // Object of most derived class
    return 0;
}


/*
OUTPUT 

Constructor of Class A called
Constructor of Class B called
Constructor of Class C called

*/