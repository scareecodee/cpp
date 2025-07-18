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



int main() {
    int a = 5;
    modify1(a);
    cout << "a = " << a;  // Output: a = 5

    modify2(&a);
    cout << "a = " << a;  // Output: a = 15
}
