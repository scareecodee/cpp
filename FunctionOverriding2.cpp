/*
for achieving runtime ----> use 'virtual' keyword with the fn. that has to be overriden

"override" ----> keyword can be used when a virtual fn is overriden. it is optional.
*/

#include <iostream>
using namespace std;
class Base {
public:
    virtual void show() {   //  virtual keword used
        cout << "Base show()" << endl;
    }
};

class Derived : public Base {
public:
    void show() override {  // Overridden
        cout << "Derived show()" << endl;
    }
};

int main() {
    Base* b = new Derived();
    b->show();  // ✅ Output: Derived show()
}
