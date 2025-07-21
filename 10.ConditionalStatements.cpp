/*
IMPORTANT --> If you don’t use curly braces {} ( to reprent block ) after if, else, for, while, etc., then only one statement immediately following the condition is executed — even inside functions.
*/

#include <iostream>
using namespace std;

int main(){

    int age = 18;
    if (age >= 18) 
    cout << "You can vote!" << endl;
    else
    cout << "You can not vote" << endl;

    if(10) // 10 ---> true
    cout<<"Sundram kumar"<<endl;


    int a=10;
    if(a=18) // 18---> non zero --> true 
    cout<<"Hello"<<endl; // Hello will be printed

    cout<<a<<endl; // a=18

    if(a=0)  // 0 ---> false 
    cout<<"Heyy";  

     cout<<a<<endl; // a=0
     return 0;

}