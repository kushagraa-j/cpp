# Assignment and Initialisation 

In the last part, we learned about how we can declare variables and also how to name them, i.e. get a box and give it a name. 
Now changing the stuff inside this box is referred as assignment.

## Assignment 

After a variable has been defined, you can give it a value (in a separate statement) using the = operator. 
This process is called copy assignment (or just assignment) for short.

```cpp
int age;          \\ defined/declared a variable named age
age = 20;         \\ changed the value of age to 20, using copy assignment
```

Copy assignment is named such because it copies the value on the right-hand side of the = operator to the variable on the 
left-hand side of the operator. The = operator is called the assignment operator.

## Initialisation 

One downside of assignment is that it requires at least two statements: one to define the variable, and one to assign the value.
We can replace these two statments, with one. 

```cpp
int age = 23;     \\ Initialised age to 23
```

There are 4 basic ways to initialize variables in C++:

```cpp
int a;       // no initializer
int b = 5;   // initializer after equals sign  -> copy initialisation
int c (6);   // initializer in parenthesis     -> direct initialisation 
int d {7};   // initializer in braces          -> brace initialisation
```

You should prefer brace initialisation also called uniform initialisation as it supports more data types unlike the others and
has benefits like being more effecient and disallowing “narrowing” conversions. That means you cant put 4.3 in a integer using braces, as you can inside
copy and direct, they narrow it to 4.

Initialize your variables upon creation. You may eventually find cases where you want to ignore this advice for a specific reason 
(e.g. a performance critical section of code that uses a lot of variables), and that’s okay, as long the choice is made deliberately.

## Intialising multiple variables together

```cpp
int a = 5, b = 6;  // copy initialization
int c (7), d(8);   // direct initialization
int e {9}, f {10}; // brace initialization (preferred)
```

Unfortunately, there’s a common pitfall here that can occur when the programmer mistakenly tries to initialize both variables by using one initialization statement:

```cpp
int a, b = 5; // wrong (a is not initialized!)
int a = 5, b = 5; // correct
```
