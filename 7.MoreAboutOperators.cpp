/*
1. Sizeof Operator
Returns size in bytes of data type or variable.

2.Typecasting Operator
Used to convert from one data type to another.

3. Pointer Operators (* and &)
Used in pointer operations.
&x: Address of variable x
*ptr: Dereference pointer ptr (access value at address)

*/


/*
TERNARY / CONDITIONAL Operator --->  Short-hand for single  if-else

SYNTAX : condition ? exp1 : exp2;

if condition is true ---> exp1 is evaluated
if condition is false --> exp2 is evaluated

*/

/*
IMPORTANT --> If you don’t use curly braces {} ( to reprent block ) after if, else, for, while, etc., then only one statement immediately following the condition is executed — even inside functions.
*/

#include <iostream>
using namespace std;

int main(){
    int x=10;
    cout<<sizeof(x)<<endl;

    int* ptr = &x;
    cout << *ptr<<endl;  // Output: 10
    cout<<ptr<<endl; // prints address of x
    x>5?cout<<"hii"<<endl:cout<<"hello"<<endl;

    int a=x>100?10:20;
    cout<<a<<endl;
    return 0;
}
