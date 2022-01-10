# Comments

A comment is the part of code, which is ignored by the compiler, they are used as
programmer's annotations. These annotations can be helpful when seeing code later,
or providing your code to someone else.

You might have noticed I used // for putting some comments.

In C++ there are two different styles of comments, both of which serve 
the same purpose: to help programmers document the code in some way.

## Single line comments

`//` symbol is used to create single line comments. This makes the compiler ignore
the line after this symbol is used.

```cpp
std::cout << "Let's use comments in C++"; // Everything from here to the end of the line is ignored
```
## Multi line comments

A pair of symbols `/*` and `*/` is used, in which `/*` denotes the start and
`*/` denotes the end.

```cpp
/* 
   This is a multi-line comment.
   This line will be ignored.
   So will this one. 
*/
```

Don’t use multi-line comments inside other multi-line comments. 
Wrapping single-line comments inside a multi-line comment is okay.

Comment your code liberally, and write your comments as if speaking to 
someone who has no idea what the code does and for the future you. Don’t assume you’ll remember why you made specific choices.

## Proper uses

Yeah so, what is proper use of comments? I did mention above about how we should use commments, but I will use some examples to demonstrate
it to you. 

Generally there are 3-4 kinds of commenting.

### Describe what

```cpp
// This program calculates the student's final grade based on his test and homework scores.
```

```cpp
// This function uses Newton's method to approximate the root of a given equation.
```

```cpp
// This function takes input from user and then returns the value.
```

### Describe how

```cpp
/* To calculate the final grade, we sum all the weighted midterm and homework scores
    and then divide by the number of scores to assign a percentage, which is
        used to calculate a letter grade. */
```

```cpp
// To find the roots of these quadratic equations, 
// we use the quadratic formula (Sridharacharya Formula).
```

```cpp
// To generate a random number, 
// we hav used the stdlib and used the rand() function
```

### Describe why

```cpp
// We need to multiply quantity by 2 here because they are bought in pairs
cost = quantity * 2 * storePrice;
```

```cpp
// We're going to use Newton's method to find the root of a number because
// there is no deterministic way to solve these equations.
```

### Decribe what (BAD comments)

```cpp
// range = 0;	// We set the range to 0
```

```cpp
int add( int x , int y)
{
	return x + y;	// returned the sum of arguments
}
