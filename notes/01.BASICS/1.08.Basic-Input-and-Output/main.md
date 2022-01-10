# Basic input and output

U remember we talked about iostream library? input-output stream? The input/output library (io library) is part of the C++ standard library that 
deals with basic input and output. As we know, to use iostream or any library for that matter, we need to include it in out file.

```cpp
#include <iostream>
```

## cout

The iostream library contains a few predefined variables for us to use. One of the most useful is std::cout, 
which allows us to send data to the console to be printed as text. cout stands for “character output” or "console output"
We use cout with the insertion operator (<<).

Cout is of the namespace std, so we must prepend it with std:: , we will talk more about namespaces later.
For now just remember that std is company of which cout is a product imported to your country by iostream.
We must reffer cout as std::cout as you would say for a mobile (Xiaomi:Note10).

Lets see how we can use cout:

```cpp
#include <iostream>

int main {
	std:cout << "My life sucks!"
	return 0;
}

OUTPUT: My life sucks!
```

Lets see another with a variable:

```cpp
#include <iostream>

int main{
	int num {1};
	std::cout << num ;
	return 0;
}

OUTPUT: 1
```
You can do a lot with cout alone, go ahead and play around heh

## cin

cin is another predefined variable that is defined in the iostream library. Whereas std::cout prints data to the console using the insertion operator (<<), 
std::cin (which stands for “character input”) reads input from keyboard using the extraction operator (>>). The input must be stored in a variable to be used.

Let's see a example:

```cpp
#include<iostream>

int main(){

	int num ;
	
	std::cout << "Enter a number:" ;
	std::cin  << num{} ;
	std::cout << "\nYou entered" << num ;   // \n creates a newline
	
	return 0;
}

OUTPUT:

Enter a number:99
You entered 99
```

## For advanced users

std:cerr is used to handle error stream, which is different from input and output.
Read more here: [link](https://en.cppreference.com/w/cpp/io/cerr) 
