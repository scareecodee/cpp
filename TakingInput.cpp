/*
1. cin (Character Input)
Used to take standard input from the keyboard, usually for numbers, words, or characters.

int x;
cin >> x; // input will be stored in variable x

*/


/*
Delimiters for cin in C++

The delimiter is the character(s) that cin uses to determine where input ends when reading with the extraction operator (>>).

| Character    | Treated as Delimiter? |
| ------------ | --------------------- |
| Space `' '`  | ✅ Yes                |
| Tab `\t`     | ✅ Yes                |
| Newline `\n` | ✅ Yes                |

Because cin stops reading as the first delimeter is encountered.


string word;
cin >> word;  // Input: "Naruto Uzumaki"
word = "Naruto"   // "Uzumaki" is left in buffer
Fix: Use cin.ignore() before getline()


*/


/*
getline() is a standard function used to read an entire line of input, including spaces — unlike cin >> which stops at spaces or newlines.

#include <string> ----> include this to use getline method

IMPORTANT ---> When using getline() in C++, input is always taken as a string.

getline(input_stream, destination_variable [, delimiter]);

| Parameter              | Description                                 |
| ---------------------- | ------------------------------------------- |
| `input_stream`         | Usually `cin` (keyboard input)              |
| `destination_variable` | A `string` where input will be stored       |
| `delimiter` (optional) | Default is newline `\n`; you can set custom |

*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    int a,b;
    cout<<"Enter the first number"<<endl;
    cin>>a;
    cout<<"Enter the first number"<<endl;
    cin>>b;
    int sum=a+b;
    cout<<"sum of " <<a<<"and "<<b<<"is "<<sum<<endl;
    string name;
    cout<<"Enter Your Name:- "<<endl;
    cin>>name;
    cout<<name<<endl;
    string str;
    cout<<"Enter Your Name:- "<<endl;
    cin.ignore();  // clears the leftover '\n' from cin >>
    getline(cin,str);
    cout<<str<<endl;

/*
 You expect "sundram kumar" to be read by getline(), but instead it skips input.

❗ Why This Happens:
After using cin >> name;, the user presses Enter (\n) to submit input.
This newline character stays in the buffer and is immediately picked up by the next getline(), which thinks you're done.

So getline() reads empty string ("") and moves on.
 Fix: Use cin.ignore() before getline()
*/
}


