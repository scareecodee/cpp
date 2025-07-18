/*
 What is a Pointer?
A pointer is a data type that is used to store the memory address of memory location.

& ----> address of operator
* ----> derefrence operator

--------IMPORTANT-----
int* p1, p2; ----> p1 is a pointer to int . but p2 is a regular int not a pointer
int *p1,*p2 ----> p1 and p2 both are pointer to int


--------IMPORTANT--------
What is typedef in C++?
typedef is a keyword used to give a new name (alias) to an existing data type.
It makes complex or long type definitions more readable and convenient.

typedef existing_type new_name;
typedef int Marks;
Marks m1 = 90, m2 = 80;  // same as: int m1 = 90;

typedef int* IntPtr;
IntPtr p1, p2;   -----> 🔴 Caution: p1 and p2 are both pointers to int — unlike int* p1, p2; where only p1 is a pointer.


✅ Modern Alternative: using in C++
Since C++11, it's better to use using, which is more powerful and cleaner.

using NewName = ExistingType;

using Marks = int;
Marks m = 95;  // same as int m = 95;

*/

#include <iostream>
using namespace std;


int main(){ 
   int a=10;
   int *ptr=&a;
   cout<<ptr<<endl;
    cout<<&a<<endl; // prints address of variable a

    cout<<*ptr<<endl; // value at the address

    cout<<&ptr<<endl; // prints address of ptr

    int *ptr2;   // garbage data ---> address of arbitary memory location
    cout<<ptr2<<endl;

    int a = 5;
    int &x = a; // x and a are name of same memory location. x is not taking any new space in memory. here &a == &x
    x = 20;
    cout << a;  // prints 20

    return 0;
}