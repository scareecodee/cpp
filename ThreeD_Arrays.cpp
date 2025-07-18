/*
A 3D array is an array of 2D arrays. Think of it like a cube or stack of 2D matrices.

int arr[2][3][4];  // 2 layers, each with 3 rows and 4 columns

Block 0:
[
  [0][0][0]  [0][0][1]  [0][0][2]  [0][0][3]
  [0][1][0]  [0][1][1]  [0][1][2]  [0][1][3]
  [0][2][0]  [0][2][1]  [0][2][2]  [0][2][3]
]

Block 1:
[
  [1][0][0]  [1][0][1]  [1][0][2]  [1][0][3]
  [1][1][0]  [1][1][1]  [1][1][2]  [1][1][3]
  [1][2][0]  [1][2][1]  [1][2][2]  [1][2][3]
]


*/

#include <iostream>
using namespace std;

int main() {
    // 3D array with 2 blocks, 2 rows, and 3 columns
    int arr[2][2][3] = {
        {
            {1, 2, 3},
            {4, 5, 6}
        },
        {
            {7, 8, 9},
            {10, 11, 12}
        }
    };

    // Loop through the 3D array and print elements
    for (int i = 0; i < 2; i++) {           // Block (depth)
        cout << "Block " << i << ":\n";
        for (int j = 0; j < 2; j++) {       // Row
            for (int k = 0; k < 3; k++) {   // Column
                cout << arr[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
