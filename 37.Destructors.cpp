/*
What is a Destructor?
A Destructor is a special member function in C++ that is automatically called when an object goes out of scope or is explicitly deleted.

🧽 It is used to clean up resources (like memory, files, network connections, etc.) allocated by the object during its lifetime.

| Feature                  | Description                                                 |
| ------------------------ | ----------------------------------------------------------- |
| **Name**                 | Same as class name, but **prefixed with a `~`**.            |
| **No Arguments**         | It **doesn’t take any arguments**.                          |
| **No Return Type**       | Not even `void`.                                            |
| **One per class**        | Cannot be overloaded (i.e., only one destructor per class). |
| **Automatically called** | When object goes out of scope or is deleted.                |
| **Used for cleanup**     | Deletes heap memory, closes files, etc.                     |


 What Happens When an Object is Created and Destroyed in C++
When you create an object, the constructor is automatically called.

When the object goes out of scope, the destructor is automatically called.
*/



#include <iostream>
using namespace std;

class Demo {
public:
    Demo() {
        cout << "Constructor called!" << endl;
    }

    ~Demo() {
        cout << "Destructor called!" << endl;
    }
};

int main() {
    Demo obj;  // Constructor is called here

    cout << "Inside main block\n";

    // When main ends or obj goes out of scope:
    // Destructor is automatically called
}


/*

OUTPUT ---->

Constructor called!
Inside main block
Destructor called!

*/