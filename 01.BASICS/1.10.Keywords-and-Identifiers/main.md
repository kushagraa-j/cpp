# Keywords and Identifiers

In this section we will talk about the distiction in keywords and identifiers in C++

## Keywords

C++ reserves a set of 92 words (as of C++20) for its own use. These words are called keywords (or reserved words), 
and each of these keywords has a special meaning within the C++ language.

Here is a list of C++ reserved keywords:


```cpp
alignas (since C++11)

alignof (since C++11)

and

and_eq

asm

atomic_cancel (TM TS)

atomic_commit (TM TS)

atomic_noexcept (TM TS)

auto (1)

bitand

bitor

bool

break

case

catch

char

char8_t (since C++20)

char16_t (since C++11)

char32_t (since C++11)

class (1)

compl

concept (since C++20)

const

consteval (since C++20)

constexpr (since C++11)

constinit (since C++20)

const_cast

continue

co_await (since C++20)

co_return (since C++20)

co_yield (since C++20)

decltype (since C++11)

default (1)

delete (1)

do

double

dynamic_cast

else

enum

explicit


export (1) (3)

extern (1)

false

float

for

friend

goto

if

inline (1)

int

long

mutable (1)

namespace

new

noexcept (since C++11)

not

not_eq

nullptr (since C++11)

operator

or

or_eq

private

protected

public

reflexpr (reflection TS)

register (2)

reinterpret_cast

requires (since C++20)

return

short

signed

sizeof (1)

static

static_assert (since C++11)

static_cast

struct (1)

switch

synchronized (TM TS)

template

this

thread_local (since C++11)

throw

true

try

typedef

typeid

typename

union

unsigned

using (1)

virtual

void

volatile

wchar_t

while

xor

xor_eq 
```

Its a long list indeed. 

## Identifeirs

Identifers cant be named after any of these keywords. Identifiers are all the names that you shall give to 
user defined  variables, functions, classes  etc.

Let's see some rules for naming your indentifers:

- First, it is a convention in C++ that variable names should begin with a lowercase letter. If the variable name is one word, the whole thing should be written in 
lowercase letters.

```cpp
int value; // correct

int Value; // incorrect (should start with lower case letter)
int VALUE; // incorrect (should start with lower case letter)
```

But its just a convention so um, do what you feel like.

- If a name is more than a single word we can use underscores or change case

```cpp
int my_variable_name; // correct (separated by underscores/snake_case)
int my_function_name(); // correct (separated by underscores/snake_case)

int myVariableName; // correct (intercapped/CamelCase)
int myFunctionName(); // correct (intercapped/CamelCase)

int my variable name; // invalid (whitespace not allowed)
int my function name(); // invalid (whitespace not allowed)

int MyVariableName; // valid but incorrect (should start with lower case letter)
int MyFunctionName(); // valid but incorrect (should start with lower case letter)
```

```
int ccount	        Bad		What does the c before “count” stand for?
int customerCount       Good		Clear what we’re counting
int i	                Either		Okay if use is trivial, bad otherwise
int index	        Either		Okay if obvious what we’re indexing
int totalScore	        Either		Okay if there’s only one thing being scored, otherwise too ambiguous
int _count	        Bad		Do not start names with underscore
int count	        Either		Okay if obvious what we’re counting
int data	        Bad		What kind of data?
int 23:16	        Bad		Is this in seconds, minutes, or hours?
int minutesElapsed	Good		Descriptive
int value1, value2	Either	        Can be hard to differentiate between the two
int numApples	        Good	        Descriptive
int monstersKilled	Good	        Descriptive
int x, y		Either	        Okay if use is trivial, bad otherwise
```
