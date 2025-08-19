/*
Vectors in C++

A vector in C++ is a dynamic array that can change its size during runtime. Unlike normal arrays (which have fixed size), vectors can grow  or shrink automatically.

Vectors are defined in the Standard Template Library (STL) under <vector> header.

---> #include <vector>

#include <vector>
using namespace std;
vector<data_type> vector_name;


vector<int> v;   // empty vector of int
vector<int> v2(5, 10); // size 5, all elements initialized to 10

Important Methods of Vectors

1. push_back()

Adds element at the end.
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;  // vector of size=0
    v.push_back(10);  // size of vector increases by one as one element is pushed . size=1
    v.push_back(20);  // agaion size of array increases by one . size=2
    v.push_back(30);  // again size of array increases by one . size=3

    for(int x : v) cout << x << " ";
}

OUTPUT:-
10 20 30



2. pop_back() ---> Removes last element.
vector<int> v = {1, 2, 3, 4};
v.pop_back();  // removes the last element which is 4 and size of vector reduces by one as one element is removed.

for(int x : v) cout << x << " ";

OUTPUT:
1 2 3


3. front() and back()
vector<int> v = {11, 22, 33};
cout << "Front: " << v.front() << " Back: " << v.back();

OUTPUT: Front: 11 Back: 33

You can also use index method to access any element of vector like --->
v[0] ----> element at index 0;
v[v.size()-1] ---> element at last index(v.size()-1)



4. swap()
Swaps contents of two vectors.

vector<int> a = {1, 2}, b = {10, 20, 30};
a.swap(b);
for(int x : a) cout << x << " ";
cout << endl;
for(int x : b) cout << x << " ";

OUTPUT: 
10 20 30
1 2

*/