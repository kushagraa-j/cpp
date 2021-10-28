# Functions

It is a set statements running in sequential order contributing to do a specific task 
inside a program is called a function. As we took a human body example in the previous, lets take 
one here too. We can compare functions to tissues, *not exacty* but think of statements as cells 
trying to perform a specific task.

If that doesnt make much sense, screw the example.

Every C++ program must have a special function named main (all lower case letters). 
When the program is run, the statements inside of main are executed in sequential order.

- A function named “max” might contain statements that figures out which of two numbers is larger. 
- A function named “calculateGrade” might calculate a student’s grade from a set of test scores. 

Structure of a function:

```cpp
<return-type> <name>( <arg1> , <arg2 , ...) {
	<statments>
}

Whatever which shall reside inside the two braces, shall execute in a sequential order.

```

Lets take examples of functions in working code,

```cpp
#include <iostream>

// its return type is `int`
int add_numbers(int x, int y) {                         // it takes 2 arguments, they both have the type of `int` and their names are x and y
    return x + y;                                       // it returns the sum of x + y
}

// its return type is `int`
int main() {                                                 // main is a function
    std::cout << "1 + 5 = " << add_numbers(1, 5) << '\n';    // calls the add_numbers function with values 1 and 5
    return 0;                                                // it returns the value of `0`
}                                                            // end the main function
```

Dont get overwhelmed with these pieces of code, they are just for the mere purpose of exmaples.
