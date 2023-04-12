# File I/O

A file represents a sequence of bytes, regardless of it being a text file or a binary file. C programming language provides access on high level function as well as low level calls to handle file on your storage devices.

## Opening files
You can use the fopen() function to create a new file or to open an existing file. This call will initialize an object of the type FILE, which contains all the information necessary to control the stream.
```c
FILE *fopen(const char *filename, const char *mode);
```

Filename is a string literal, which you will use to name your file, and access mode.
- `r`: Opens an existing text file for reading purpose
- `w`: Opens a text file for writing. If it does not exist, then a new file is created. here your program will start writing content from the beginning of the file.
- `a`: Opens a text file for writing in appending mode. If it does not exist, then a new file is created. here your program will start appending content in the existing file content.
- `r+`: Opens a text file for both reading and writing.
- `w+`: Opens a text file for both reading and writing, it first truncates the file to zero length if it exists, otherwhise creates a file if it does not exist.
- `a+`: Opens a text file for both reading and writing, it creates the file if it does not exist. The reading will start from the beginning but writing can only be appended.

## Closing a file
To close a file, use the fclose() function.
```c
int fclose(FILE *fp);
```

## Writing a file
Following is the simplest function to write individual characters to the stream
```c
int fputc(int c, FILE *fp);
```

The function `fputc()` writes the character value of the argument c to the output stream referenced by fp. It returns the written character written on success otherwhise `EOF` if there is an error. You can use the following functions to write a null-terminated string to a stream.
```c
int fputs(const char *s, FILE *fp);
```

The function `fputs()` writes the string s to the output stream referenced by fp. It returns a non-negative value on sucess, otherwise `EOF` is returned in case of any error.

## Reading a file
Given below is the simplest function to read a single character from a file.
```c
int fgetc(FILE *fp);
```

The `fgetc()` function reads a character from the input file referenced by fp. The return value is the character read, or in case of any error, it returns `EOF`.
```c
char *fgets(char *buf, int n, FILE *fp);
```