# Dynamic memory alocation in C

Since C is a structured language, it has some fixed rules for programming, one of them includes changing the size of an array. An array is a collection of items stored at contiguous memory locations.

As it can be seen that the length of the array above made is 9, but what if we want to change the size to 5 or to 13, that procedure is referred to as dynamic memory allocation in C.

C Dynamic Memory Allocation can be defined as a procedure in which the size of data structure is changed during the runtime.

## malloc() method
The `malloc` (memory alocation) method in C is used to dynamically allocate a single large block of memory with the specified size. It returns a pointer of type which can be cast into a pointer of any form. It doesnt initialize memory at execution time so that it has initilized each block with the default garbage value initially

```c
//Syntax
ptr = (cast-type*)malloc(byte-size);

//Example
ptr = (int *)malloc(100 * sizeof(int));
```

## calloc() method

`calloc` (contiguous allocation) method in C is used to dynamically allocate the specfied number of blocks of memory of the specified type, it is very much similar to `malloc` but has two different points:
- It initializes each block with default value 0
- It has two parameters or arguments as compare to ``malloc()``

```c
//Syntax
ptr = (cast-type*)calloc(n, element-size);

//Example
ptr = (float *)calloc(25, sizeof(float));
```

## realloc() method
`realloc()` (re-allocatiion) method in C is used to dynamically change the memory allocation of a previously allocated memory, if the memory previously allocated with the help of malloc or calloc is insufficient, realloc can be used to dynamically re-allocate memory, re-allocation of memory maintains the already present value and new blocks will be initialized with the default garbage value.

```c
//Syntax
ptr = realloc(ptr, newSize);
```