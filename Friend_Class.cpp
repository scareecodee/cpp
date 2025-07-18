/*
In C++, a class can also be declared as a friend of another class.
This means the entire class (all its member functions) will get access to the private and protected members of the class that grants friendship.


*/


#include <iostream>
using namespace std;
class B;  // Forward declaration

class A {
private:
    int x = 10;

    // Declare class B as a friend
    friend class B;
};

class B {
public:
    void accessA(A a) {
        cout << "Accessing private member of A: " << a.x << endl;
    }
};

int main(){
    B b;
    A a;
    b.accessA(a);

}
