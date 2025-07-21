/*
🧠 What is Encapsulation in C++?
Encapsulation is one of the four fundamental principles of Object-Oriented Programming (OOP).
It refers to bundling data (variables) and functions (methods) that operate on that data into a single unit, typically a class, and restricting access to some components.

It also means restricting direct access to some of an object’s components — mainly using access specifiers.

| Specifier   | Access Level | Who Can Access          |
| ----------- | ------------ | ----------------------- |
| `public`    | Open access  | Anywhere                |
| `private`   | Restricted   | Inside class only       |
| `protected` | Limited      | Class + Derived classes |

 Why Encapsulation?

1.Protects internal object state from corruption.
2.Hides implementation details.
3.Helps in maintenance and flexibility.
4.Enables data validation using getters/setters.

A class in C++ is the perfect example of encapsulation — because it hides data and exposes only what’s needed.
*/

#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    void setName(string n) {
        name = n;
    }

    void setAge(int a) {
        if (a >= 0) {
            age = a;
        }
    }

    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }
};

int main() {
    Student s;
    s.setName("Itachi");
    s.setAge(22);

    cout << "Name: " << s.getName() << endl;
    cout << "Age: " << s.getAge() << endl;
}


/*
 Key Observations:
name and age are private → cannot be accessed directly.

Access is controlled using getter (getName()) and setter (setName()) methods.

You can add validation in setters (e.g., age >= 0).


*/