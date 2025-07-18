/*
What is Dynamic Memory Allocation?
It means allocating memory during runtime (instead of compile time).

✅ In C++, dynamic memory is allocated from the heap (also called the free store), using new and delete operators.

 Why Use Dynamic Allocation?
You don't know the size of data in advance (like user input).

To create large or variable-sized structures (like arrays, trees, graphs).

Memory is managed manually — gives flexibility and efficiency if used properly.

| Operator | Purpose                  |
| -------- | ------------------------ |
| `new`    | Allocates memory on heap |
| `delete` | Frees memory on heap     |


🧠 Static vs Dynamic Memory

| Type    | Allocated When? | Lifetime | Syntax Example      |
| ------- | --------------- | -------- | ------------------- |
| Static  | Compile time    | Fixed    | `int x = 5;`        |
| Dynamic | Runtime         | Manual   | `int* p = new int;` |


*/


#include <iostream>
using namespace std;


int main(){ 
    int* ptr = new int;      // Allocates memory for one int
    *ptr = 10;               // Assign value

 int* arr = new int[3];  // array of 3 ints
arr[0] = 10;
arr[1] = 20;
arr[2] = 30;

for (int i = 0; i < 3; i++)
    cout << arr[i] << " ";

delete [] arr;  // free array memory


}