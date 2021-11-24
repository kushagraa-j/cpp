# Uninitialised Variables

Unlike some other new high end programming languages, C++ doesnt initialise the variable to zero on its own automatically, instead it contains the value stored (garbage value) under
the memory location assigned to it by the compiler. A variable that has not been given a known value (usually through initialization or assignment) is called an uninitialized variable. 

So maybe you gave your box a name (example used in prev parts) but you forgot to check and replace what was actually inside the box, so the box will be uninitialised.

> Extra: This lack of initialization is a performance optimization inherited from C, back when computers were slow. 
Imagine a case where you were going to read in 100,000 values from a file. In such case, you might create 100,000 
variables, then fill them with data from the file. If C++ initialized all of those variables with default values 
upon creation, this would result in 100,000 initializations (which would be slow), and for little benefit (since you’re 
overwriting those values anyway. For now, you should always initialize your variables because the cost of doing so is 
miniscule compared to the benefit. Once you are more comfortable with the language, there may be certain cases where 
you omit the initialization for optimization purposes. But this should always be done selectively and intentionally.

Using the values of uninitialized variables can lead to unexpected results. Consider the following short program:

```cpp
#include<iostream>

int main(){

	int num;                        // uninitialised variable

	std::cout << num ;              // this value will be different each time you compile the program
					// as the compiler assigns a new memory location each time

	return 0;
}
```

Using uninitialized variables is one of the most common mistakes that novice programmers make, and unfortunately, 
it can also be one of the most challenging to debug (because the program may run fine anyway if the uninitialized variable 
happened to get assigned to a spot of memory that had a reasonable value in it, like 0).

This is the primary reason for the “always initialize your variables” best practice.
