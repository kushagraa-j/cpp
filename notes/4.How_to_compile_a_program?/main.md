# How to compile a program?

Compiling a program inside GNU/Linux is pretty straightforward.

```bash
g++ file.cpp -o file.o
```

- This commands compiles your file file.cpp to generate a object file named file.o.
You can add the flags `-Wextra` ,`-Wall` and `-Werrors` to give you extra warnings in the form of errors.

- You can add `-pedantic-errors` to disable compiler extensions. Compiler extensions let you write code
outdated or incompatible with the C++ standard.

- You can choose you language standard by using the flags `-std=c++11, -std=c++14, -std=c++17, or 
-std=c++2a` to enable C++11/14/17/2a support respectively.
