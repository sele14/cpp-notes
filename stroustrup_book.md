# Notes from the book Programming: Principles and Practice Using C++ by Bjarne Stroustrup

## Chapter 2: Hello, World!

##### Code Snippet 1: Hello world
- ```cout`` is the standard output stream: character output stream
- Put characters into it using the ```<<``` operator

##### The ```main``` function:
- How does a comuter know where to start?
- It looks for a function called ```main```
- Every cpp program must have a main function
- A function is a named sequence of instructions for the computer to execute, in the order they are written
- Functions have 4 parts:
  - return type, int here, which specifies what kind of result it will give
  - a name, e.g. main
  - a parameter list, enclosed in paraenthesis, in this case it's empty
  - a function body, inside {} containing the instructions

### Compilation
- C++ is a compiled language
  - Must translate it from human readable form (the code we write) into something the machine can understand
  - The compiled does this process
  - The code we read is the source code, and the computer can read machine code (or object code, or executables).
- C++ source code files are either .cpp or .h
- The compiler ignores comments
- The compiler has zero tolerance for spelling mistakes
- The compiler is usually right, even when complaining about small things

### Linking
- A program will contain different parts
  - E.g. our string "Hello, world!" and the code from the cout from standard library, and so on.
- The parts are called translation units, must be compiled and must be linked together using a linker
- Linker: links e.g. an object from the C++ standard library (obstream.obj) with our source code's object: hello_world.obj to create the executable hello_world.exe
- Object code and executables are not OS independent, i.e. the compiled code cannot run on Windows and mac
- **Declaration**: a program statement specifying how a piece of code can be used
- **Compile-time errors**: errors found by the compilers
- **Link-time errors**: errors found by the linker
- **run-time errors**: errors that are not found until the pgoram is run (the exe). ALso called logic errors.

# Chapter 3: Objects, Types, and Values

- **Object**: a region of memory with a type that specifies what kind of information can be placed in it
  - A named object is called a variable
  - E.g. character strings are put into string variables and integers are put into int variables
  - Objects are boxes that you can put a value of the object's type
    - E.g. => age [ 42 ] int

- Code Snippet 3: input / output
  - The first line is called a prompt; tries to prompt the user to do something; enter name

-**Variables**: A named object with a specific type (int, string)
  - The place where we store data is an object
  - To access an object we need a name

#### Some common types:
- Also known as data types
  - ```int``` for integers (39)
  - ```double``` for floating-point numbers (3.5)
  - ```char``` for individual characters "."
  - ```string``` for character strings ("Hello")
  - ```bool`` true/fals logical vals (true)

#### Composite assignment Operators
- Incrementing a variable (adding 1 to it) is so common that C++ has a special syntax for it:
  - ```++ counter``` is equivalent to ```counter = counter + 1```
    - Or in python: ```counter += counter```
- Other variations:
  - ```a += 7; // means a = a + 7```
  - ```b -= 9; // means b = b - 9```
  - ```c *= 2; // means c = c * 2```