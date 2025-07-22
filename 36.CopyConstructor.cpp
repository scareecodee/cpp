/*
Purpose of Copy Constructor:
To initialize a new object as a copy of an existing object.

Especially useful when an object manages dynamic memory or resources like files, DB, sockets, etc.

MyClass obj1(10);
MyClass obj2 = obj1;  // 🔁 Copy constructor . data is copied . obj2 doesnt point to obj1. so any changes made to one doesnt reflect in other one.

BUT.........

obj2=obj1


*/

#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    // Parameterized constructor
    Student(string n, int a) {
        name = n;
        age = a;
    }

    // Copy constructor
    Student(const Student &s) {
        name = s.name;
        age = s.age;
        cout << "Copy constructor called!" << endl;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s1("Itachi", 21);   // parameterized constructor
    Student s2 = s1;            // copy constructor

    s1.display();
    s2.display();
    return 0;
}
/*
Copy constructor called!
Name: Itachi, Age: 21
Name: Itachi, Age: 21
*/