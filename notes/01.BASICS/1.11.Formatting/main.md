# Basic formatting and spacing

Um, this is a little subjective topic, so be free to NOT agree with me.
C++ ignores all the whitespaces and free lines, it comes down to the programmer on how he/she chooses 
to format his/her code.

Although its totally upto the programmers, there are some conventional practices that are followed,
as it will be easier for others if you follow them too.

```cpp
std::cout << "Hello world!";

std::cout               <<            "Hello world!";

		std::cout << 		"Hello world!";

		std::cout
			<< "Hello world!";
```

All of these statments do the same task, output "Hello world", but the first statement makes sense as it does not hav unnecessary spaces.

> One exception where the C++ compiler does pay attention to whitespace is inside quoted text, such as "Hello world!"

## Indentation

You can use tab or spaces to indent your code, but make sure it even and uniform. 
Most IDE's set tabwidth to 4, and i recommend it too.

## Function Braces

```cpp
int main() {
	// Recommended by Google C++ style guide
}
```

```cpp
int main() 
{
	// I personally prefer this style, as it enhances readability
}
```

## Lines 

Keep your lines no more than 80 colums, long lines look ugly

## Preferences

Your code is your code and no one else's code so format it how you like, but keep in mind
at some point, you will hav to share your code with people or even collaborate.
