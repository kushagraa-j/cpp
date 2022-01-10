# Objects and variables

In this part, we shall see what is data, object, variable and how one can use variables in their cpp code.

## Data
Anything that can be processed, moves and stored by a computer is data. This data can be from anwywhere, the internet or the user himself.
Programs are collections of instructions that manipulate data to produce a desired result.

## Objects

Assume RAM as a big storage godown with a lot of boxes. Some of these boxes are empty and some are filled. Data of a single box is called *value*.
How can we access these boxes? Well, you cant directly. But indirectly you can use them with the help of *objects*. You can think of the stuff inside the box
as value and the box as a whole itself as an object.

Objects can be named or unnamed (anonymous). A named object is called a variable, and the name of the object is called an identifier. 
In our programs, most of the objects we create and use will be *variables*.

## Variables

How can we create variables?

```
<type> <name>;
```

Yes, that's it, this is how you define a variable.
You can think of definition as putting the name of the variable on the box, but not changing the 
stuff inside.

This is how you can define a variable of the name a_variable of type integer.
```cpp
int a_variable;
```

Two variables of the same type can be defined together,
```cpp
int a,b;
```

## General data types

In the last example we saw a integer variable, but we have more data types in cpp.
A data type (more commonly just called a type) tells the compiler what type of value (e.g. a number, a letter, text, etc…) the variable will store.
Think of data types as different kinds of boxes.

```cpp
letter = char
text = string
number = int, double, float
```

We will talk more about data types later.
