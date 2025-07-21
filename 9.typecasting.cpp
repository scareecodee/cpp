/*
1. Implicit Typecasting (Automatic Conversion)
The compiler automatically converts data types when:
No data loss is expected
It happens in mixed-type expressions
*/


/*
2. Explicit Typecasting (Manual Conversion)
You force a conversion using typecast operators. Data may loss.

*/
#include <iostream>
using namespace std;

int main(){
    int a=20;
    float b=30.5;  // implicit typecastin from double to float
    float sum=a+b; // implicit typecasting of 20(int) to 20.0(float)
    cout<<sum<<endl;
    a = 65;
    char ch =(int)a;  // a = 65 → 'A'
    cout<<ch<<endl;
    ch='b';
    a=ch; // a=98
    cout<<a<<endl; // prints ascii value of 'b'  --->98

}