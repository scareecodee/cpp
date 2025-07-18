/*
Purpose of Copy Constructor:
To initialize a new object as a copy of an existing object.

Especially useful when an object manages dynamic memory or resources like files, DB, sockets, etc.

MyClass obj1(10);
MyClass obj2 = obj1;  // 🔁 Copy constructor . data is copied . obj2 doesnt point to obj1. so any changes made to one doesnt reflect in other one.

BUT.........

obj2=obj1


*/

