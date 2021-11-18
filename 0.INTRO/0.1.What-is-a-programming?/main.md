# What is a programming language?

Modern computers are really fast, though they have a contraint, 
they are needed to be told *exactly* what to do from the certain set of commands they understand. 

You need to really elaborate about what you are trying to do for your computer to understand.

This might help you understand what i mean by exact instructions: [video](https://www.youtube.com/watch?v=Ct-lOOUqmyY)

## Programmming
These set of instruction are called programs. These are often referred as apps or applications
in the daily use. The process of creating a program is called *programming*. Programmers typically 
create programs by producing *source code* (commonly shortened to code), which is a list of commands 
typed into one or more text files. When the program is runned by the hardware, its called execution 
of the program.


## Types of languages
A computer is incapable of speaking the C++ language, it only understand commands in the form of 
0's and 1's called machine language or machine code. Here is a sample machine language 
instruction: `10110000 01100001`. Writing the machine code by hand is very time taking and 
confusing. 

Each set of binary digits is interpreted by the CPU into a command to do a very specific job, 
such as compare these two numbers, or put this number in that memory location. However, because 
different CPUs have different instruction sets, instructions that were written for one CPU type 
could not be used on a CPU that didn’t share the same instruction set. This meant programs 
generally weren’t portable (usable without major rework) to different types of system, 
and had to be written all over again.


### Low end
As the people saw how hard it was to deal with the machine code, a language came into the play, the 
*Assembly* language. Here is the same instruction as above in assembly language: `mov al, 061h`. 
This language is easiser to read than machine code. The code is conerted into machine code using a 
*assembler*. Programs written in assembly languages tend to be very fast, and assembly is still used 
today when speed is critical. Although it still lacks portability.


### High end
To address the readability and portability concerns, new programming languages such as C, C++, 
Pascal (and later, languages such as Java, Javascript, and Perl) were developed. 
These languages are called high level languages, as they are designed to allow the programmer to 
write programs without having to be as concerned about what kind of computer the program will 
be run on. Here is the same instruction as above in C/C++: `a = 97;`


## Compiler 
A *compiler* is a program that reads source code and produces a stand-alone executable program that 
can then be run.
