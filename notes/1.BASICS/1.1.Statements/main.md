# Statements

As we have just learnt that, program is a set of intructions. A single intruction by itself is called a statement. 
As we have cells in our body which are often called the builing blocks of human beings, we can regard statements 
as building blocks of programs in high level languages. A single high level statement might get translated into many
machine code instructions.

Most (but not all) statements in C++ end with a ;

```cpp
#include <iostream>

int main() {                              // Main function
    bool something = true;                // A simple statemend ending with ;

    if (something) {                      // An `if` statement, it doesn't end with a ; and it executes statments if argument is true
        std::cout << "Something" << '\n';
    } 

    else {                                // `Else` is an optional statement on top of `if`, also doesn't end with a ;
        std::cout << "Not something" << '\n';
    }
    
    return 0;  // Returns the code 0, `return` is also a statement
}
```
