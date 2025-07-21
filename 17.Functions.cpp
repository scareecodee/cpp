/*
A function is a self-contained block of code that performs a specific task when called.

 Why Use Functions?

1.Code reuse: Write once, use many times
2.Modularity: Break problems into smaller parts
3.Readability: Cleaner and more understandable code
4.Maintainability: Easy to debug and modify

Types of Functions in C++

1.Built-in functions – Provided by C++ (e.g., sqrt(),getline(),etc)
2.User-defined functions – Created by the programmer


SYNTAX:

return_type function_name(parameter_list with their data type) {
    // function body
}

| Part             | Description                                          |
| ---------------- | ---------------------------------------------------- |
| Return Type      | Type of value function returns (`int`, `void`, etc.) |
| Function Name    | Identifier for the function                          |
| Parameter List   | Input values accepted by function                    |
| Function Body    | Code to execute                                      |
| Return Statement | Sends value back to the caller                       |


*/


#include <iostream>
using namespace std;

// fn defining+declaration
int add(int num1,int num2){   
return num1+num2;  // if return statement not given ---> error
}

//fn declare
int sub(int num1,int num2);

void sayHello() {    //---->
    cout << "Hello!" << endl;
}


int main(){
  cout<<add(10,20)<<endl;
  cout<<sub(10,20)<<endl;
  sayHello();  // calling fn
}

//fn define
int sub(int num1,int num2){
    return num1-num2;
}