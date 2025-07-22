/*
Exception Handling in C++
Exception Handling in C++ is a mechanism to handle runtime errors so that the normal flow of the program is not interrupted.

🔹 Why Exception Handling?
Without exception handling:

int x = 5, y = 0;
int z = x / y;  // ❌ Crash or undefined behavior

With exception handling:
try {
    // risky code ----> code which might throw error at runtime
} catch (...) {
    // handle error
}

🔸 Key Keywords in C++ Exception Handling
| Keyword | Description                                                  |
| ------- | ------------------------------------------------------------ |
| `try`   | Block where you write risky code that may cause an exception |
| `throw` | Used to **raise** an exception                               |
| `catch` | Handles the exception thrown by `try` block                  |

 Standard Exception Classes (from <stdexcept>)
 #include <stdexcept>

throw std::runtime_error("Something went wrong");
throw std::out_of_range("Index out of range");

*/


#include <iostream>
using namespace std;

int divide(int a, int b) {
    if (b == 0)
        throw "Division by zero error!";  // throwing exception
    return a / b;
}

int main() {
    try {
        int result = divide(10, 0);
        cout << "Result: " << result << endl;
    }
    catch (const char* msg) {
        cout << "Exception caught: " << msg << endl;
    }
}


