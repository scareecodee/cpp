/*

Friend Function in C++
A friend function in C++ is a special function that is not a member of a class but is granted access to the class's private and protected members.

| Feature                               | Description                                     |
| ------------------------------------- | ----------------------------------------------- |
| **Not a member**                      | Defined outside the class.                      |
| **Access**                            | Has access to private and protected members.    |
| **Declaration**                       | Declared inside class with `friend` keyword.    |
| **Definition**                        | Defined outside using normal function syntax.   |
| **No `this` pointer**                 | Since it’s not a member.                        |
| **Can be global or in another class** | Can be standalone or a member of another class. |


5. Can Be a Friend of Multiple Classes
You can declare the same function as a friend in multiple classes.


*/


#include <iostream>
using namespace std;

class Student{
    private:
    string name="Sundram Kumar";

    friend void display();

};

void display(){
    Student s;
    cout<<s.name<<endl;
}

// void display2(){
//      Student s;
//     cout<<s.name<<endl;  // show error as name is private data member of Class Student 
// }


int main(){
    display();
    return 0;
}