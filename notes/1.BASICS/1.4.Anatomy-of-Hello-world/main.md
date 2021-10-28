Lets try to understand, THE HELLO WORLD PROGRAM!

```cpp
#include<iostream>

int main()
{
	std:cout << "Hello World";
	return 0:
}
```

Well, easy enough, isnt it?

Line 1: You can see we used #include directive, basically telling the linker to bring out iostream 
from the standard library, iostream stands for input and output stream. So you can regard #include as
a call to the market (talked about this example in 0.3) asking for the code. Iostream lets you do 
input and output from the console.

Line 2: Its empty, as so its ingonred by the compiler, its left empty for the sake of cleaner code.

Line 3: As we talked previously, every cpp program has a main function, so here it is. 
Its return type is integer, try using return type as void and remove the return statement as see what happens.

Line 4: The main function starts here.

Line 5: std::cout (which stands for “character/console output”) and the << operator 
allow us to send letters or numbers to the console to be output. In this case, we’re sending 
it the text “Hello world!”, which will be output to the console. This statement creates the 
visible output of the program.

Line 6: As the return type of the main function, we ought to return a integer value, by convention 
we just use the value 0, you can use any.

Line 7: The main function ends here.
