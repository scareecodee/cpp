// stream ---> flow of data
// input stream ---> data flowing to program 
// output stream ---> data flowing from the program


// What Are Standard I/O Devices in C++?
/* Standard Input/Output (I/O) devices are the default devices used by a program to receive input and display output.
  Input Device: cin (Standard Input)
  Reads from keyboard by default.
  Part of std::istream.
  Output Device: cout (Standard Output)
  Writes to screen by default.
  Part of std::ostream.
  cout << "Hello, World!" */

// using namespace std; allows you to use standard library features (like cout, cin, string, vector, etc.) without typing std:: every time.


/*
✅in C++, the main() function is ultimately called by the operating system (OS) — but not directly.
Let’s explain it clearly and step by step 👇

🔁 Full Flow: How main() is called
When you run a C++ program:

You run the executable (e.g., a.exe or program.exe)

The Operating System loads the program into memory.

The OS starts execution at a special function:
➤ Usually called _start or WinMainCRTStartup

That startup code is provided by the C++ runtime (CRT).

The startup code sets up the environment (stack, heap, argc/argv).

Then it calls your main() function. */


/*
return value	--> Meaning to OS	Convention
0	✅ Success	(Standard)
1, -1, etc.	❌ Failure / error code	(Non-zero = error)
*/

#include <iostream>
using namespace std;
int main(){
cout<<"Hello World"<<endl;
// there are two main work of endl--->
//Inserts a newline (\n) — moves cursor to the next line
// Flushes the output buffer — forces the text to appear on screen immediately
std::cout<<"My name is Kumar";
return 0;
}


/*
Header Files
A header file in C++ is a file that contains declarations of functions, classes, variables, constants, and macros. It helps in organizing and reusing code efficiently across multiple .cpp files.

What is a Header File?
It has a .h or .hpp extension (e.g., math.h, iostream, myfile.hpp)
It does not contain main()
Used to declare, not define, unless it's a template or inline function
*/