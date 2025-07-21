/*
Inheritance in C++
Inheritance is an Object-Oriented Programming (OOP) feature that allows a class (child/derived) to inherit properties and behaviors (data members and member functions) from another class (parent/base).

It promotes code reuse, hierarchical classification, and polymorphism.

Basic Syntax--->

class Base {
    // base class members
};

class Derived : access_specifier Base {
    // derived class members
};

1.Single Inheritance:
In this type, one derived class inherits from a single base class. It establishes a one-to-one relationship.
Example: class B : public A.

2.Multilevel Inheritance:
A class is derived from another derived class, forming a chain of inheritance.
Example: class C : public B, where B : public A.

3.Multiple Inheritance:
A single class inherits from two or more base classes. It allows the derived class to combine features of multiple classes.
Example: class C : public A, public B.

4.Hierarchical Inheritance:
Multiple classes inherit from a single base class. It helps create different versions of a base class’s functionality.
Example: class B : public A, class C : public A.

5.Hybrid Inheritance:
A mix of more than one type of inheritance (e.g., multiple + multilevel). It often leads to the Diamond Problem, which is handled using virtual inheritance.
Example: A class inherits from multiple classes that share a common base.

*/


//--------------Single Inheritance-------------------------

#include <iostream>
using namespace std;

class A {
public:
int a=5;
    void showA() {
        cout << "Class A\n";
    }
};

class B : public A {
public:
    void showB() {
        cout << "Class B\n";
    }

};


int main(){
    class B b;
    b.showA();
    cout<<b.a<<endl;

}