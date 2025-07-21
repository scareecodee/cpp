#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    // Default constructor
    Student() {
        name = "Unknown";
        age = 0;
        cout << "Default constructor called\n";
    }

    // Parameterized constructor (name only)
    Student(string n) {
        name = n;
        age = 18;
        cout << "Constructor with name called\n";
    }

    // Parameterized constructor (name and age)
    Student(string n, int a) {
        name = n;
        age = a;
        cout << "Constructor with name and age called\n";
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s1;                  // Calls default constructor
    Student s2("Naruto");        // Calls constructor with 1 parameter
    Student s3("Sasuke", 20);    // Calls constructor with 2 parameters

    s1.display();
    s2.display();
    s3.display();

    return 0;
}
