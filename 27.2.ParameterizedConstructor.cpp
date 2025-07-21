#include <iostream>
using namespace std;

class Student {
    string name;
    int roll;

public:
    // Parameterized Constructor
    Student(string n, int r) {
        name = n;
        roll = r;
    }

    void display() {
        cout << "Name: " << name << ", Roll No: " << roll << endl;
    }
};

int main() {
    Student s1("Itachi", 7);
    Student s2("Naruto", 9);

    s1.display();
    s2.display();

    return 0;
}
