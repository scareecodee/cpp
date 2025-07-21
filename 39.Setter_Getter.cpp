#include <iostream>
using namespace std;


class Student {
private:
    int age;

public:
    // Setter function    -----> write the data 
    void setAge(int a) {
        if (a >= 0)   // validation
            age = a;
    }

    // Getter function  ----> read the data
    int getAge() {
        return age;
    }
};

int main(){
    Student s;
    s.setAge(18);
    int age=s.getAge();
    cout<<age<<endl;
    return 0;
}
