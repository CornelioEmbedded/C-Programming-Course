# Arrays in C
Arrays is a kind of data structure that can store a fixed-size sequential collection of elements of the same type. An rray is used to store a collection of data, but it is often more useful to think of an array as a collection of variables of the same type.

## Declaring arrays
To decalre an array in C, a programmer specifies the type of elements and the number of elements required by an array.
```c
type arrayName [arraySize];
```

This is called a single-dimensinoal array. The arraySize must be an integer constant greater than zero and type can be any valid C data type.
```c
double balance[10];
```

## Initializing arrays
You can initialize an array in C like this.
```c
double balance[5] = {1000.0, 2.0, 3.4, 7.0, 50.0};
```
The number of values between braces cannot be larger than the number of elements that we declare for the array between square brackets.

Another example can be this:
```c
double balance[4] = 50.0;
```

The above statement assigns the 5th element in the array with the value of 50.0, all array elements remaining have 0.