# Pointers
Pointers in C are easy and fun to learn. Some C programming tasks are performed more easily with pointers, and other tasks, such as dynamic memory allocation, cannot be performed without using pointers. So it becomes necessary to learn pointers to become a perfect C programmer. 

Every variable is a memory location and every memory location has its address defined which can be accessed using ampersand (&) operator, which denotes an address in memory.

## What are pointers?
A pointer is a variable whose value is the address of another variable, direct address of the memory location. Like any variable or constant, you must declare a pointer before using it to store any variable address. The general form of a pointer variable declaration is.
```c
type *var_name;
```
Type is the pointer's base type, it must be a valid C data type and var_name is the name of the pointer variable. The asterisk * is being used to designate a variable as a pointer.
```c
int *ip; //Pointer to an integer
double *dp; //Pointer to a double
float *fp;  //Pointer to a float
```

## how to use pointers?
There are a few important operations, which we will do with the help of pointers very frequently.
- Define a pointer variable
- Assing the address of a variable to a pointer
- Access the value at the address available in the pointer variable

```c
#include <stdio.h>

int main () {

   int  var = 20;   /* actual variable declaration */
   int  *ip;        /* pointer variable declaration */

   ip = &var;  /* store address of var in pointer variable*/

   printf("Address of var variable: %x\n", &var  );

   /* address stored in pointer variable */
   printf("Address stored in ip variable: %x\n", ip );

   /* access the value using the pointer */
   printf("Value of *ip variable: %d\n", *ip );

   return 0;
}
```

