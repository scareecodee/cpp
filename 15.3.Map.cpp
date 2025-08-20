/*
🔹 What is map in C++?

1.map is an associative container in the C++ Standard Template Library (STL).

2.It stores key–value pairs in a sorted order by default (based on the keys).
so, If keys are string or character then --- lexicographically arranged .

3.Each key is unique.

4.Internally, map is usually implemented as a Self-Balancing Binary Search Tree (Red-Black Tree).


#include <map>
using namespace std;

map<KeyType, ValueType> mp;


🔹 Is size of map fixed?

👉 No, the size of a map in C++ is not fixed.

A map is a dynamic container.

Its size changes automatically as you insert or erase elements.

You don’t need to specify a capacity like in arrays.


IMPORTANT METHODS

1. Insertion
mp[key] = value;           // inserts (if key is not present) or updates (if key is already present)
mp.insert({key, value});   // inserts (if key not present)

2. Access
mp[key];      // Access value by key (creates new key if not exists, with default value)
mp.at(key);   // Access value (throws exception if key not found)

3. Size and Capacity
mp.size();    // number of elements
mp.empty();   // true if map is empty


4. Find and Count
mp.find(key);     // returns iterator to key, or mp.end() if not found
mp.count(key);    // returns 1 if key exists, 0 otherwise

5. Erase Elements
mp.erase(key);          // erase element by key

6. Clear
mp.clear();   // removes all elements

7. Swapping
map<int, int> a, b;
a.swap(b);   // swap contents of two maps


*/


#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> mp;
    map<int, int> a, b; // creating two maps ---> a and b


    cout << "Initial size: " << mp.size() << endl;

    mp[1] = "Apple";
    mp[2] = "Banana";
    mp[3] = "Mango";

    cout << "After insertion: " << mp.size() << endl;
     for (auto &p : mp) {
        cout << "Key: " << p.first << ", Value: " << p.second << endl;
    }  // p.first ---> key and p.second  ----> value 

    mp.erase(2);  // remove key 2

    cout << "After deletion: " << mp.size() << endl;
     for (auto &p : mp) {
        cout << "Key: " << p.first << ", Value: " << p.second << endl;
    }

    return 0;
}
