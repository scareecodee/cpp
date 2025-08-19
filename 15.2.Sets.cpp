/*
Set in C++

A set is an ordered collection of unique elements.

No duplicates are stored.

Elements are stored in sorted (ascending) order by default.

It is implemented as a balanced BST (Red-Black Tree).

👉 Header file:
#include <set>

set<int> s;       // empty set of integers
set<string> str;  // set of strings

Important Methods of Set

1. insert(x)

Adds element in sorted order. Duplicate elements are ignored.

#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s;
    s.insert(30);
    s.insert(10);
    s.insert(20);
    s.insert(10); // duplicate, ignored

    for(int x : s) cout << x << " ";
}

OUTPUT:-
10 20 30

---> elements are stored in ascending order by default.No duplicate elements.


2. size()

Gives number of elements.
cout << "Size: " << s.size();

OUTPUT:
Size: 3


3. empty()
checks if set is empty.

cout << (s.empty() ? "Empty" : "Not Empty");

OUTPUT:
Not Empty


4. count(x)

Returns 1 if element exists, else 0.

cout << s.count(10) << " " << s.count(40);

OUTPUT:
1 0


5. clear()
s.clear();
cout << "Size = " << s.size();

OUTPUT:
Size = 0


*/