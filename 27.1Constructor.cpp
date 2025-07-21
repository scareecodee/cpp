/*
What is a Constructor?
A constructor is a special member function of a class that is automatically called when an object is created. Its purpose is to initialize objects.

Key Properties
1.Has same name as the class.
2.No return type (not even void).
3.Called automatically when an object is created.
4.Can be overloaded (multiple constructors in a class).
Can take parameters.

Types of Constructors
| Type                       | Description                                 |
| ---------------------------| ------------------------------------------- |
|  Default Constructor       | No parameters                               |
|  Parameterized Constructor | Takes parameters                            |
|  Copy Constructor          | Copies from another object                  |
|  Dynamic Constructor       | Uses `new` for dynamic memory               |
|  Constructor Overloading   | Multiple constructors with different params |

Types of Constructors
C++ provides several types of constructors:

Default Constructor: Takes no parameters. If you don't define any constructors, the compiler will provide a default one. It initializes the object with default values.

Parameterized Constructor: Takes one or more parameters, allowing you to initialize objects with specific values at creation.

constructor with default parameter ----->

class Student {
public:
    Student(string name = "Unknown", int age = 0) {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};


*/

#include <iostream>
#include <vector>
# include <string>
using namespace std;

class Student{
    public:
    string name;   
    string uid;    
    long long number;    
    vector <string> subjects;
    /*
    Default Constructor
    Student(){     
    }

    */

    Student(){ 
         cout<<"Heyyy this is constructor" ;
    }
    

};  

int main(){

    Student s1; // constructor is called automatically. So, " Heyy this is constructor  will be printed
    return 0;
}
