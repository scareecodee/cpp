/*
In C++, strings are sequences of characters. You can work with strings in two main ways:

1. Array of characters (string)
char name[] = "Itachi"; ---> size of this string = no of characters in string + 1 (for null characaters) bytes
char name[] = {'I', 't', 'a', 'c', 'h', 'i', '\0'};  

IMPORTANT ---> Ends with a null character '\0'.

2. Strings data type
#include <string>
string s1 = "Itachi";
Dynamic size (can grow/shrink). 

*/

/*
strings are indexed in C++. zero based indexing. index 0 to length-1.
string name="hey"
index 0 ---> 'h'
index 1 ---> 'e'
index 2 ---> 'y'

*/

/*
Escape Sequences in C++ ----->  Escape sequences are special character combinations starting with a backslash \ used to represent characters that cannot be typed directly or are invisible (like newline, tab, etc.).

| Escape | Meaning                          | Example Usage               | Output               |
| ------ | -------------------------------- | --------------------------- | -------------------- |
| `\n`   | New line                         | `cout << "Hello\nWorld";`   | Hello <br> World     |
| `\t`   | Horizontal tab (4–8 spaces)      | `cout << "A\tB";`           | A       B            |
| `\\`   | Backslash (`\`)                  | `cout << "C:\\path";`       | C:\path              |
| `\'`   | Single quote (`'`)               | `cout << '\'';`             | '                    |
| `\"`   | Double quote (`"`)               | `cout << "\"Hi\"";`         | "Hi"                 |
| `\r`   | Carriage return                  | `cout << "123\rA";`         | A23                  |
| `\b`   | Backspace                        | `cout << "AB\bC";`          | AC                   |
| `\a`   | Alert (beep sound)               | `cout << "\a";`             | (Beep, if supported) |



*/

#include <iostream>
using namespace std;

int main(){
    string str="Sundram Kumar"; // string of length ---13 
    cout<<str<<endl;
    str=""  ;//---> empty string ---> length=0
    cout<<str<<endl;
    string name = "Itachi";
    cout << name[0] << endl;  // I
    cout << name[3] << endl;  // c
    str="sundram\nkumar";
    cout<<str<<endl;
    str="\"sundram kumar\""; 
    cout<<str<<endl; // prints--> "sundram kumar"

    char ch; // ch=null
    string s; // s=null
    cout<<ch<<endl;
    cout<<s<<endl;

}

