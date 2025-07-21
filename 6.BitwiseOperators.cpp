/*
Bitwise Operators in C++
Bitwise operators perform operations directly on binary bits of integers. They are very fast and are used in optimization, low-level programming, and competitive coding.

1. Bitwise AND (&)  -->  5 & 3 = 0101 & 0011 = 0001 = 1
2. Bitwise OR (|)  ---> 5 | 3 = 0101 | 0011 = 0111 = 7
3. Bitwise XOR (^)  ---> Working: Each bit is 1 if bits are different
 eg// : 5 ^ 3 = 0101 ^ 0011 = 0110 = 6
4. Bitwise NOT (~)
a = 5  → 00000101  
~a     → 11111010 = -6 (in 2’s complement)

*/

/*
 5. Left Shift (<<)
a << n
Working: Shifts bits to the left by n, appends 0
Effect: Multiplies the number by 2ⁿ
eg// 5 << 1 = 00000101 << 1 = 00001010 = 10

6. Right Shift (>>)
a >> n
Working: Shifts bits to the right by n, discards lowest bits
Effect: Divides the number by 2ⁿ (floor division)

eg// 5 >> 1 = 00000101 >> 1 = 00000010 = 2

*/

#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 3;

    cout << "a & b = " << (a & b) << endl;
    cout << "a | b = " << (a | b) << endl;
    cout << "a ^ b = " << (a ^ b) << endl;
    cout << "~a = " << (~a) << endl;
    cout << "a << 1 = " << (a << 1) << endl;
    cout << "a >> 1 = " << (a >> 1) << endl;
}


