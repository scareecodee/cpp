/*
What is an Array?

An array in C++ is a collection of fixed-size elements of the same data type, stored in contiguous memory locations.

Declaring an Array
data_type array_name[size];

C++ arrays are static, meaning their size must be known at compile time.

 What is Row-Major Order?
In C++, arrays are stored in row-major order, which means:

The rows are stored one after another in memory.
The elements of the first row are stored first, followed by elements of the second row, and so on.

 Accessing Array Elements (Indexing)

Arrays are zero-indexed
First element → index 0, last element → index size - 1

int a[3] = {10, 20, 30};
cout << a[0];  // 10
cout << a[2];  // 30



Memory Representation (Visual)

int a[4] = {5, 6, 7, 8};

| Index | Value |
| ----- | ----- |
| 0     | 5     |
| 1     | 6     |
| 2     | 7     |
| 3     | 8     |

If int takes 4 bytes and address of a[0] is 1000:

| Index | Address | Value |
| ----- | ------- | ----- |
| 0     | 1000    | 5     |
| 1     | 1004    | 6     |
| 2     | 1008    | 7     |
| 3     | 1012    | 8     |

| Feature         | Array  | Vector (`<vector>`) |
| --------------- | ------ | ------------------- |
| Size            | Fixed  | Dynamic             |
| Bounds Check    | No     | Yes (with `.at()`)  |
| Syntax          | Simple | Rich and flexible   |
| STL Compatible  | No     | Yes                 |
| Memory Overhead | Less   | Slightly more       |

*/


/*

The array name in C++ is a pointer to the first element of the array. 
---> arr ≡ &arr[0]

More precisely ---> array name points to First byte of first element of array (arr[0])



What is Pointer Arithmetic?
In C++, pointers can be used with arithmetic operators to move across memory. This is especially useful when working with arrays, memory buffers, or dynamic data structures.

Allowed Operations on Pointers

| Operation         | Description                                     |
| ----------------- | ----------------------------------------------- |
| `ptr + i`         | Moves pointer forward by `i` elements           |
| `ptr - i`         | Moves pointer backward by `i` elements          |
| `ptr1 - ptr2`     | Gives number of elements between two pointers   |
| `++ptr` / `--ptr` | Moves pointer to next / previous element        |
| Comparisons       | You can compare pointers (`<`, `>`, `==`, etc.) |
*/

#include <iostream>
using namespace std;


// fn taking array as argument 
void printArray(int arr[],int size) {
    for(int i = 0; i < 5; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}




int main(){
int a[5] = {1, 2, 3, 4, 5};
int b[] = {10, 20, 30};  // size auto-calculated
int c[5] = {1};          // others filled with 0 → {1, 0, 0, 0, 0}
int d[5] = {};           // all zeroes → {0, 0, 0, 0, 0}
char letters[5]={'a','b'};  // rest will be null {'a','b','\0','\0','\0'}
cout<<b[0]<<endl; // 10
cout<<b[1]<<endl; //20
cout<<b[100]<<endl;  // No Bounds Checking	b[100] may crash or corrupt or garbage data

int arr[5] = {1, 2, 3, 4, 5};
for (int i = 0; i < 5; i++) {
    cout << arr[i] << " ";
}

cout<<"\n";

for (int i = 0; i < 5; i++) {
        cout << *(arr + i) << " ";  // pointer arithmetic
    }

    cout<<"\n";

cout << arr << endl;     // address of arr[0]
cout << &arr[0] << endl; // same address
printArray(a,5);

}




