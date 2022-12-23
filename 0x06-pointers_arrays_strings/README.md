![C-programming-1024x530](https://user-images.githubusercontent.com/69214737/207556428-529708f7-af7c-4fda-ae5b-0bb9aca0cee6.png)







# Notes:<br><br>

## To run main.c while linking to main.h
> gcc main.c _putchar.c //function name from main.h
> 
<br><br>

## Segmentation fault Causes
  - Attempting to access a nonexistent memory address (outside process's address space)
  - Attempting to access memory the program does not have rights to (such as kernel structures in process context)
  - Attempting to write read-only memory (such as code segment)
  - These in turn are often caused by programming errors that result in invalid memory access:
    - Dereferencing a null pointer, which usually points to an address that's not part of the process's address space
    - Dereferencing or assigning to an uninitialized pointer (wild pointer, which points to a random memory address)
    - Dereferencing or assigning to a freed pointer (dangling pointer, which points to memory that has been freed/deallocated/deleted)
    - A buffer overflow
    - A stack overflow
    - Attempting to execute a program that does not compile correctly. (Some compilers[which?] will output an executable file despite the presence of compile-time errors.)
