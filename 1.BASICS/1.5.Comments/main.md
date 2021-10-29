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
