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


new is used to dynamically allocate memory on the heap.

delete is used to deallocate (free) the memory that was allocated using new.

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

/*
Always use delete[] for arrays created with new[], and delete for single variables.

If you do:
int* arr = new int[5];
delete arr;  // ❌ Wrong
You’re telling the compiler:

"Hey, I only allocated one int, please free the memory just that."

So only the first element might be deallocated. The rest?

Memory remains allocated (memory leak).

For non-primitive types (like classes), their destructors won’t be called ⇒ resource leak.


*/