# Libft

A custom C library implementing standard libc functions and additional utility functions.

## Description

Libft is the first project at 42 School, focused on recreating essential C standard library functions from scratch. This library serves as a foundation for future projects and deepens understanding of basic algorithms and C programming.

## Table of Contents

- [Functions](#functions)
  - [Part 1 - Libc Functions](#part-1---libc-functions)
  - [Part 2 - Additional Functions](#part-2---additional-functions)
  - [Bonus - List Functions](#bonus---list-functions)
- [Compilation](#compilation)
- [Usage](#usage)
- [Testing](#testing)

## Functions

### Part 1 - Libc Functions

**Character Checks & Conversions:**
- `ft_isalpha` - checks for alphabetic character
- `ft_isdigit` - checks for digit (0-9)
- `ft_isalnum` - checks for alphanumeric character
- `ft_isascii` - checks for ASCII character
- `ft_isprint` - checks for printable character
- `ft_toupper` - converts to uppercase
- `ft_tolower` - converts to lowercase

**String Functions:**
- `ft_strlen` - calculates string length
- `ft_strlcpy` - size-bounded string copying
- `ft_strlcat` - size-bounded string concatenation
- `ft_strchr` - locates first occurrence of character
- `ft_strrchr` - locates last occurrence of character
- `ft_strncmp` - compares strings up to n bytes
- `ft_strnstr` - locates substring in string
- `ft_strdup` - duplicates string

**Memory Functions:**
- `ft_memset` - fills memory with constant byte
- `ft_bzero` - zeros out memory
- `ft_memcpy` - copies memory area
- `ft_memmove` - copies memory area (handles overlap)
- `ft_memchr` - scans memory for character
- `ft_memcmp` - compares memory areas
- `ft_calloc` - allocates and zeros memory

**Conversion:**
- `ft_atoi` - converts string to integer

### Part 2 - Additional Functions

- `ft_substr` - extracts substring from string
- `ft_strjoin` - concatenates two strings
- `ft_strtrim` - trims characters from string ends
- `ft_split` - splits string into array using delimiter
- `ft_itoa` - converts integer to string
- `ft_strmapi` - applies function to each character (with index)
- `ft_striteri` - iterates string with function (with index)
- `ft_putchar_fd` - outputs character to file descriptor
- `ft_putstr_fd` - outputs string to file descriptor
- `ft_putendl_fd` - outputs string with newline to fd
- `ft_putnbr_fd` - outputs integer to file descriptor

### Bonus - List Functions

- `ft_lstnew` - creates new list element
- `ft_lstadd_front` - adds element at beginning of list
- `ft_lstsize` - counts elements in list
- `ft_lstlast` - returns last element
- `ft_lstadd_back` - adds element at end of list
- `ft_lstdelone` - deletes element with given function
- `ft_lstclear` - deletes and frees list
- `ft_lstiter` - applies function to each element
- `ft_lstmap` - applies function and creates new list

## Compilation

Compile the library using the provided Makefile:

```bash
# Compile mandatory functions
make

# Compile with bonus functions
make bonus

# Clean object files
make clean

# Clean everything (objects and library)
make fclean

# Recompile everything
make re
```

This generates `libft.a`, a static library.

## Usage

Include the header in your C files:

```c
#include "libft.h"
```

Compile your project with the library:

```bash
gcc -Wall -Wextra -Werror your_file.c -L. -lft -o your_program
```

Example:

```c
#include "libft.h"

int main(void)
{
    char *str = ft_strdup("Hello, Libft!");
    ft_putendl_fd(str, 1);
    free(str);
    return (0);
}
```

## Testing

Recommended testers:
- [Tripouille/libftTester](https://github.com/Tripouille/libftTester)
- [alelievr/libft-unit-test](https://github.com/alelievr/libft-unit-test)
- [jtoty/Libftest](https://github.com/jtoty/Libftest)

## Notes

- All functions follow the 42 Norm coding standard
- No global variables used
- Memory leaks are handled appropriately
- Functions using malloc check for allocation failures

## Author

Created as part of the 42 School curriculum.

## License

Free to use for educational purposes.
