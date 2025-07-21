/*
 1. length() / size() ---->Returns the number of characters in the string.
string str = "Sundram";
cout << str.length();  // Output: 7

2.empty() ---> Checks if the string is empty.
string str = "";
cout << str.empty();  // Output: 1 (true)

3. append()
string str = "Hello";
str.append(" World");
cout << str;  // Output: Hello World

You can also use +=:
str += "!";

4. at(index) and []
string str = "Hello";
cout << str.at(1);  // Output: e
cout << str[1];     // Output: e

5. substr(start, length)
string str = "Sundram Kumar";
cout << str.substr(8, 5);  // Output: Kumar

6. find(substring) ---->Finds the index of the first occurrence.
string str = "Hello World";
cout << str.find("World");  // Output: 6
Returns string::npos if not found.

7. rfind(substring)
Finds the last occurrence of a substring.
string str = "abc def abc";
cout << str.rfind("abc");  // Output: 8

8. replace(pos, len, newstr)
string str = "I like Java";
str.replace(7, 4, "C++");
cout << str;  // Output: I like C++

 9. insert(pos, str)
Inserts a string at the specified position.
string str = "C++";
str.insert(3, " Language");
cout << str;  // Output: C++ Language

10. erase(pos, len)
Erases characters from the string.
string str = "Sundram Kumar";
str.erase(7, 1);  // Remove space
cout << str;      // Output: SundramKumar

11. compare(str) --->Compares two strings lexicographically.
string a = "apple";
string b = "banana";
cout << a.compare(b);  // Output: -1 (since "apple" < "banana")
----> ascii value of 'a' - ascii value of 'b' = -1

 14. swap(str2)
Swaps content with another string.
string a = "Hello", b = "World";
a.swap(b);
cout << a << " " << b;  // Output: World Hello

*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    // 1. length() / size()
    string name = "Sundram";
    cout << "Length of '" << name << "' = " << name.length() << endl;

    // 2. empty()
    string emptyStr = "";
    cout << "Is emptyStr empty? " << emptyStr.empty() << endl;

    // 3. append() and +=
    string greet = "Hello";
    greet.append(" World");
    greet += "!";
    cout << "Appended string: " << greet << endl;

    // 4. at() and []
    cout << "Character at index 1 using at(): " << greet.at(1) << endl;
    cout << "Character at index 1 using []: " << greet[1] << endl;

    // 5. substr(start, length)
    string fullName = "Sundram Kumar";
    string lastName = fullName.substr(8, 5);
    cout << "Substring (last name): " << lastName << endl;

    // 6. find(substring)
    string msg = "Hello World";
    size_t pos = msg.find("World");
    if (pos != string::npos)
        cout << "'World' found at index: " << pos << endl;
    else
        cout << "'World' not found" << endl;

    // 7. rfind(substring)
    string repeat = "abc def abc";
    size_t rpos = repeat.rfind("abc");
    cout << "Last occurrence of 'abc': " << rpos << endl;

    // 8. replace(pos, len, newStr)
    string sentence = "I like Java";
    sentence.replace(7, 4, "C++");
    cout << "After replace: " << sentence << endl;

    // 9. insert(pos, str)
    string lang = "C++";
    lang.insert(3, " Language");
    cout << "After insert: " << lang << endl;

    // 10. erase(pos, len)
    string spaced = "Sundram Kumar";
    spaced.erase(7, 1);  // Removes space
    cout << "After erase: " << spaced << endl;

    // 11. compare(str)
    string a = "apple";
    string b = "banana";
    int result = a.compare(b);
    cout << "Comparison (apple vs banana): " << result << endl;

    // 14. swap(str)
    string s1 = "Hello", s2 = "World";
    s1.swap(s2);
    cout << "After swap: s1 = " << s1 << ", s2 = " << s2 << endl;

    return 0;
}


/*
Length of 'Sundram' = 7
Is emptyStr empty? 1
Appended string: Hello World!
Character at index 1 using at(): e
Character at index 1 using []: e
Substring (last name): Kumar
'World' found at index: 6
Last occurrence of 'abc': 8
After replace: I like C++
After insert: C++ Language
After erase: SundramKumar
Comparison (apple vs banana): -1
After swap: s1 = World, s2 = Hello

*/