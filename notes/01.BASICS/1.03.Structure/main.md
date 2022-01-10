# Structure

In this part we will talk about the basic structure of a c++ program, now that you know what is a statement and a function.

```cpp
#include<iostream>              // include headers from library
#include<my.h>                  // include local personal headers

int yourfuncname(int x){        // your custom function with a argument x

	// statements
	return 0;               // As it is a int return type function, it must return a integer value

}


int main{ 

	\\ statments
	\\ some more statements

	return 0;

}
```

Only the statements inside the main function shall be executed. The statements of 
yourfucnname fuction will not be executed unless its called inside main function.
