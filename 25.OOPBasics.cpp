/*
Class   ---->   Blueprint for objects.                              
Object ----->  Instance of a class.                                          
*/


/*
Vector in C++ (STL)
A vector in C++ is a dynamic array provided by the Standard Template Library (STL). It behaves like an array but can grow and shrink in size automatically as elements are added or removed.

Why Use Vector?

Dynamic resizing
1.Direct access via index
2.Compatible with STL algorithms
3.Safe and powerful compared to raw arrays

vector<int> v;          // empty vector of integers
vector<int> v(5);       // vector with 5 elements initialized to 0
vector<int> v(5, 10);   // vector with 5 elements, each 10


*/

#include <iostream>
#include <vector>
using namespace std;

class Student{
    public:
    string name;    //data members/attributes
    string uid;     //data members/attributes
    long long number;    //data members/attributes
    vector <string> subjects;

    void showDetails(){    // member function
        cout<<name<<endl;
        cout<<uid<<endl;
        cout<<number<<endl;

    }
    

};  // semicolon is imp

int main(){
    Student s1,s2;  // creating objects of class Student
    s1.name="Sundram";
    s1.uid="b524066";
    s1.number=9709521693l;
    s1.showDetails();
    s2.name="Sonu";
    s2.uid="b524047";
    s2.number=97287827;
    s2.showDetails();
    return 0;
}
