*This project has been created as part of the 42 curriculum by gpecelli.*

# Libft — Your Very First Own Library

## Description

**Libft** is the first project of the 42 curriculum. The goal is to reimplement a set of standard C library functions from scratch, building a personal static library (`libft.a`) that can be reused throughout the entire 42 cursus.

By coding each function by hand, you gain a deep understanding of how fundamental C operations work under the hood — memory manipulation, string handling, linked lists, and more.

The library is organized into three parts:

- **Part 1 – Libc functions**: reimplementations of standard functions such as `ft_strlen`, `ft_memcpy`, `ft_atoi`, `ft_strchr`, etc.
- **Part 2 – Additional functions**: utility functions not present in libc or present in a different form, such as `ft_substr`, `ft_split`, `ft_itoa`, `ft_strmapi`, and output functions like `ft_putchar_fd`.
- **Part 3 – Linked list**: functions to create and manipulate a singly linked list (`t_list`), including `ft_lstnew`, `ft_lstadd_front`, `ft_lstmap`, `ft_lstclear`, and more.

---

## Function Reference

### Part 1 — Libc Functions

| Function | Description |
|---|---|
| `ft_isalpha` | Checks if a character is alphabetic |
| `ft_isdigit` | Checks if a character is a digit |
| `ft_isalnum` | Checks if a character is alphanumeric |
| `ft_isascii` | Checks if a character is in the ASCII table |
| `ft_isprint` | Checks if a character is printable |
| `ft_strlen` | Returns the length of a string |
| `ft_memset` | Fills a memory area with a constant byte |
| `ft_bzero` | Sets a memory area to zero |
| `ft_memcpy` | Copies a memory area |
| `ft_memmove` | Copies a memory area, handling overlaps |
| `ft_strlcpy` | Copies a string with size limit |
| `ft_strlcat` | Concatenates strings with size limit |
| `ft_toupper` | Converts a character to uppercase |
| `ft_tolower` | Converts a character to lowercase |
| `ft_strchr` | Locates first occurrence of a character in a string |
| `ft_strrchr` | Locates last occurrence of a character in a string |
| `ft_strncmp` | Compares two strings up to n characters |
| `ft_memchr` | Scans memory for a character |
| `ft_memcmp` | Compares two memory areas |
| `ft_strnstr` | Locates a substring in a string |
| `ft_atoi` | Converts a string to an integer |
| `ft_calloc` | Allocates and zeroes memory |
| `ft_strdup` | Duplicates a string |

### Part 2 — Additional Functions

| Function | Description |
|---|---|
| `ft_substr` | Extracts a substring from a string |
| `ft_strjoin` | Concatenates two strings into a new one |
| `ft_strtrim` | Trims characters from both ends of a string |
| `ft_split` | Splits a string by a delimiter into an array |
| `ft_itoa` | Converts an integer to a string |
| `ft_strmapi` | Applies a function to each character, returning a new string |
| `ft_striteri` | Applies a function to each character in place |
| `ft_putchar_fd` | Outputs a character to a file descriptor |
| `ft_putstr_fd` | Outputs a string to a file descriptor |
| `ft_putendl_fd` | Outputs a string followed by a newline to a file descriptor |
| `ft_putnbr_fd` | Outputs an integer to a file descriptor |

### Part 3 — Linked List Functions

| Function | Description |
|---|---|
| `ft_lstnew` | Creates a new list node |
| `ft_lstadd_front` | Adds a node at the beginning of the list |
| `ft_lstsize` | Returns the number of nodes in the list |
| `ft_lstlast` | Returns the last node of the list |
| `ft_lstadd_back` | Adds a node at the end of the list |
| `ft_lstdelone` | Frees a single node's content and the node itself |
| `ft_lstclear` | Frees all nodes of a list |
| `ft_lstiter` | Applies a function to each node's content |
| `ft_lstmap` | Creates a new list by applying a function to each node |

---

## Instructions

### Compilation

```bash
make        # Builds libft.a
make clean  # Removes object files
make fclean # Removes object files and libft.a
make re     # Rebuilds everything from scratch
```

### Usage

To use the library in another project, include the header and link against the archive:

```c
#include "libft.h"
```

```bash
cc -Wall -Wextra -Werror your_file.c -L. -lft -o your_program
```

---

## Resources

- [C standard library reference — cppreference.com](https://en.cppreference.com/w/c)
- [man pages online](https://man7.org/linux/man-pages/)
- [Understanding linked lists — GeeksForGeeks](https://www.geeksforgeeks.org/linked-list-data-structure/)
- [Makefile tutorial](https://makefiletutorial.com/)
- [Difference between glibc and BSD libc](https://wiki.musl-libc.org/functional-differences-from-glibc.html)

### AI Usage

AI was used in two specific ways during this project:

1. **Concept study**: to better understand the linked list functions (in particular `ft_lstadd_front` and related operations), AI was used similarly to asking a professor — exploring how the logic works step by step, not copying implementations.
2. **Writing assistance**: when writing comments, the README, and other text, AI was used to help express ideas more clearly and correctly in English — reviewing phrasing and suggesting cleaner formulations, while all technical decisions remained my own.