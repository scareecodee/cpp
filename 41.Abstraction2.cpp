/*
Abstraction can be also achieved using abstract classes.

What is an Abstract Class in C++?
An abstract class in C++ is a class that cannot be instantiated (object of abstract class cann't be created) and is used only as a base class.

It must contain at least one pure virtual function.

It serves as a blueprint for derived classes.

*/


#include <iostream>
using namespace std;

class Animal {  // this is a abstract class as it contains atleast one pure virtual fn.

public:
    virtual void sound() = 0; // Pure virtual function
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks\n";
    }
};

int main() {
    // Animal a; ❌ Error: Cannot instantiate (object create) abstract class
    Dog d;       // ✅ OK
    d.sound();   // Output: Dog barks
}



/*
IMPORTANT 

If a pure virtual function is not overridden in a derived class in C++, then:
❗The derived class also becomes abstract class, and you cannot create an object of that derived class.

class Base {
public:
    virtual void show() = 0; // Pure virtual function
};

class Derived : public Base {  // this derived class becomes abstract class automaticaly as show()  of Base class is not overriden here .

    // ❌ show() is NOT overridden
};

int main() {
    Derived d;  // ❌ Error: Cannot instantiate abstract class
}


*/


