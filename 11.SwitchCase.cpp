/*
SWITCH CASE

SYNTAX:
switch (expression) {
    case constant1:
        // Code block
        break;
    case constant2:
        // Code block
        break;
    ...
    default:
        // Code block if no match
}

The default case in a switch statement is a fallback that executes when none of the case labels match the input value.
default is optional. Itcan be placed anywhere in switch block.



IMPORTANT

1. expression must evaluate to a intger value  
----> The expression in switch(expression) must be of integral type:
int, char, short, long, enum.
❌ Not allowed: float, double, bool, string, objects, or structs

2. Case Values Must Be Unique and Constant.
int a = 2;
switch(x) {
    case a:        // ❌ INVALID: 'a' is a variable, not a constant
}


*/


/*
int day = 1;

switch (day) {
    case 1:
        cout << "Monday\n";
    case 2:
        cout << "Tuesday\n";
    default:
        cout << "Other day\n";
}

OUTPUT -->
Monday
Tuesday
Other day

fall thorugh until break is encountered

*/

#include <iostream>
using namespace std;

int main(){
    int x=2;
    switch (x) {
    case 1: cout << "One\n"; break;
    case 2: cout << "Two\n"; break;
    default: cout << "Invalid number\n";
}

int day=1;
switch (day) {
    case 1:
        cout << "Monday\n";
    case 2:
        cout << "Tuesday\n";
    default:
        cout << "Other day\n";
}

}