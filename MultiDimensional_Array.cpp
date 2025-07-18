/*
What is a 2D Array?
A 2D array is like a matrix with rows and columns.

data_type array_name[rows][columns];

int matrix[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
};

It has 2 rows and 3 columns.
Memory is stored in row-major order (row by row in a single block).

Accessing Elements:
cout << matrix[0][2];  // Output: 3

int arr[][2] = {{1, 2}, {3, 4}};

⚠️ Important Rules:
When declaring a 2D array, column size is mandatory, row size can be deduced.
You cannot resize this array — it's stored on the stack.

*/

#include <iostream>
using namespace std;


int z[5]; // global array ----> uninitialized so all ements zero.

int main(){
   int arr[5];
    for (int i = 0; i < 5; ++i)
        cout << arr[i] << " ";  // garbage data will be printed

    int array[5] = {1, 2};   //Partially Initialized Arrays.
    /*
    arr contents: 1, 2 ,0, 0, 0
    Only the first two elements are initialized; rest get 0
    */

    int a[2][3];  // Local uninitialized
    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 3; ++j)
            cout << a[i][j] << " ";    // garbage data


    int b[2][3] = {{1, 2}};  //Unspecified elements → auto-filled with 0

// | Row | Values   |
// | --- | ------   |
// | 0   | 1, 2, 0  |
// | 1   | 0, 0, 0  |


static int arr[5];
    for (int i = 0; i < 5; ++i)
        cout << arr[i] << " ";

    /*
🟢 Output: 0 0 0 0 0
Static storage → default initialized to 0
Applies to global arrays too
    */

}



/*
SUMMARY---------->

| Declaration Type         | Default Values |
| ------------------------ | -------------- |
| `int arr[5];` (local)    | ❌ Garbage      |
| `static int arr[5];`     | ✅ All `0`      |
| `int arr[5] = {1, 2};`   | ✅ `1 2 0 0 0`  |
| `int* arr = new int[5];` | ❌ Garbage      |
| `new int[5]()`           | ✅ All `0`      |
| `int arr[5]` (global)    | ✅ All `0`      |

*/