# itoa
> This function is not defined in ANSI-C and is not part of C++, but is supported by some compilers.

says https://www.cplusplus.com/reference/cstdlib/itoa/ and sadly that's true...<br>
Sometimes this function works but more often the compiler shows the error 'itoa was not declared in this scope'. This repo was created for those developers whose compilers get stuck when see itoa() in the code.


## General Information
- This project was created beacause I had to use this function - my colleague's project worked well on his PC but not on mine, so I had to implement this function on my own.
- The function 'itoa()' works well as in the reference: https://www.cplusplus.com/reference/cstdlib/itoa/
- The function is also overloaded - you can use 'std::string' as an input, not only 'char*'.


## Technologies Used
- C++03
- OOP
- Visual Studio IDE
- GitHub Desktop


## Features
The function works as the original 'itoa()' https://www.cplusplus.com/reference/cstdlib/itoa/ <br>
It returns 'char*' - a pointer to char with the first sign of the value (1st argument of 'itoa()') written in the propper system - base is the 3rd argument of the 'itoa()' function.<br>
But it's also overloaded - you can use 'std::string' as the 2nd argument and return value.


## Setup
Simply download the file 'itoa.cpp', move to the same directory as your project and add:
```cpp
#include "itoa.cpp'
```


## Project Status
Project is: _complete_. This version works well. 


## Contact
Created by [@Bartosz-Bien](https://bartosz-bien.github.io/) - feel free to contact me!
