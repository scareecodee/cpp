/*
 1. Call by Value
A copy of the variable is passed to the function.
Changes made to formal argument doesnt reflect in actual argument.

2.Call by Reference
The address or reference of the variable is passed.
Changes made directly affect the original variable.

example of call by ref ------>
void modify(int &x) {
    x = x + 10;  // Modifies the original
}

int main() {
    int a = 5;
    modify(a);
    cout << "a = " << a;  // Output: a = 15


fn with default value supported is supprted in c++
SYNTAX---->
    return_type function_name(type1 param1 = default1, type2 param2 = default2, ...){
    }

}

*/

#include <iostream>
using namespace std;

void modify1(int x) {
    x = x + 10;  // Only modifies the copy
}


void modify2(int* x) {
    *x = *x + 10;
}

#include <iostream>
using namespace std;


// fn with default parameter value
void greet(string name = "User") {
    cout << "Hello, " << name << "!" << endl;
}




int main() {
    int a = 5;
    modify1(a);
    cout << "a = " << a;  // Output: a = 5

    modify2(&a);
    cout << "a = " << a<<endl;  // Output: a = 15

    greet();  // prints "Hello User"
    greet("Sundram");
}
