# Functions

A function is a group of statements that together perform a task. Every C program has at least one function, which is main(), and all the most trivial programs can define additional functions.

A function declarations tells the compiler about a function's name, return type, and parameters. A functino definition provides the actual body of the function.

```c
return_type function_name(parameter)
{
    body of the function
}
```

A function definition in C programming consists of a function header and a function body.
- Return type: A function may return a value. The return_type is the data type of the value the functions returns. Some functions perform the desired operations without returning a value, In this case, the return_type is the keyword `void`.
- Function name: This is the actual name of the function. The function name and the parameter list together constitute the function signature.
- Parameters: A parameter is like a placeholder. When a function is invoked, you pass a value to the parameter. This value is referred to as actual parameter or argument. The parameter list refers tot he type, order, and number of parameters of a function. Parameters are optional.
- Function body: The function body contains a collection of statements that define what the function does.

```c

int getMaximumValue(int num_a, int num_b)
{
    int result;
    if(num_a > numb_b)
    {
        result = num_a;
        printf("%i is bigger", num_a);
    }else
    {
        result = num_b;
        printf("%i is bigger", num_b);
    }
    return result;
}
```

## Function declarations
A function decalration tells the compiler about a function name and how to call the function.

```c
return_type function_name(parameter);
````

```c
int getMaximumValue(int, int)
```
We can omit the name parameter in functions declarations

## Calling a function
To call a function, you simply need to pass the requeired parameters along with the function name, and if the function returns a value, then you can store the returned value.
