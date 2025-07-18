/*
 What is a Delegating Constructor?
A delegating constructor is a constructor that calls another constructor of the same class to reuse its initialization logic.

🧠 Introduced in C++11 to eliminate duplication in constructors.

class ClassName {
public:
    ClassName(int x, int y) {
        // Initialization logic
    }

    ClassName(int x) : ClassName(x, 0) {  // Delegating to another constructor
        // Additional logic if needed
    }
};

*/

#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    // Main constructor
    Student(string n, int a) {
        name = n;
        age = a;
        cout << "Constructor with name and age called\n";
    }

    // Delegating constructor
    Student(string n) : Student(n, 18) {
        cout << "Delegating constructor with default age called\n";
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s1("Itachi", 21);  // Main constructor
    s1.display();

    Student s2("Sasuke");      // Delegates to main constructor
    s2.display();

    return 0;
}
