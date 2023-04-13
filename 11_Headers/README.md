# Header files

A header file is a file with extension .h which contains C function declrations and macro definitions to be shared between several source files. There are two types of headers files, the files that the programmer writes and the files that comes with the compiler.

You request to use a header file in your program by inlcuding it with the C preprocessing directive ``#include``, like you have seen inclusion of ``stdio.h`` header file, which comes along with your compiler.


```c
#include <file>
```
This form is used for system header files, it searches for a file named `file` in a standar list of system directories.

```c
#include "file"
```
This form is used for header files of your own program. It searches for a file named `file` in the directory containing the current file.

# Preprocessors

The C preprocessor is not a part of the compiler, but is a separate step in the compilation process. A C preprocessor is just a text substitution tool and it instructs the compiler to do required preprocessing before the actual compilation. 

| Directive | Description |
|:---------:|:-----------:|
| #define | substitutes a preprocessor macro |
| #include | inserts a particular header from another file |
| #undef | undefines a preprocessor macro |
| #ifdef | returns true if this macro is defined |
| #ifndef | returns true if this macro is not defined |
| #if | tests if a compile time condition is true |
| #else | the alternative of if |
| #elif | ``else`` and ``if`` in one statement |
| #endif | ends preprocessor conditional |
| #error | prints error message on stderr |
| #pragma | issues special commands to the compiler, using stanrdardized method |
