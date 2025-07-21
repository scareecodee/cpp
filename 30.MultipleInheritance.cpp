#include <iostream>
using namespace std;

class A {
public:
    A() {
        cout << "Constructor of A" << endl;
    }
    void displayA() {
        cout << "Display from A" << endl;
    }
};

class B {
public:
    B() {
        cout << "Constructor of B" << endl;
    }
    void displayB() {
        cout << "Display from B" << endl;
    }
};

class C : public A, public B {
public:
    C() {
        cout << "Constructor of C" << endl;
    }
    void displayC() {
        cout << "Display from C" << endl;
    }
};

int main() {
    C obj;
    obj.displayA();
    obj.displayB();
    obj.displayC();
    return 0;
}
/*
OUTPUT 

Constructor of A  
Constructor of B  
Constructor of C  
Display from A  
Display from B  
Display from C  

*/