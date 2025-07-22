/*
Short-Circuit Evaluation in C++
Short-circuit evaluation is a technique used in C++ (and many other languages) where logical operators (&& and ||) stop evaluating further operands as soon as the result is determined.

How It Works

1. Logical AND (&&)

a=0;
if (a != 0 && a++)

 the left side (a != 0) is false

Since false && anything is false, the right side is not evaluated ➝ a is never incremented

2. Logical OR (||)

a=10;
if (a != 0 && a++)

the left side (a != 0) is true

Since true || anything is true, the right side is not evaluated ➝ a is never incremented


*/