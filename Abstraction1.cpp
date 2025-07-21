/*\ What is a Pure Virtual Function in C++?

A pure virtual function is a function that:
1.Has no body in the base class
2.Is declared with = 0 in the base class
3.Must be overridden in the derived class

virtual void show() = 0;  // 👈 Pure virtual function


Abstraction means hiding internal implementation details and showing only essential features to the user. It can be done by two ways --

 1. Using Classes
You can create a class and expose only necessary functions (public), hiding implementation details (private/protected).

*/

// using classes

#include <iostream>
using namespace std;

class Car {
public:
    void start() {
        engineOn();      // abstraction — user just calls start
        cout << "Car started\n";
    }

private:
    void engineOn() {
        cout << "Engine ON\n";
    }
};

int main() {
    Car c;
    c.start();     // User sees only start() but not engineOn(). engineOn() ---> hidden ---> abstraction
}
