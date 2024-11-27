# Libft

## Description
Libft is a project at 42 that involves creating a personal C library. The goal is to implement a collection of standard functions from the C standard library, as well as some additional utility functions. This project helps students deepen their understanding of memory management, data structures, and algorithm implementation, while also reinforcing their ability to write efficient and reusable code. It serves as a foundational project that students can use throughout their 42 curriculum.

**Technologies Used:**
- C

## Table of Contents
- [Installation](#installation)
- [Usage](#usage)
- [Features](#features)
- [Contributing](#contributing)
- [Acknowledgments](#acknowledgments)

## Installation

To use this project locally:

1. Clone this repository:
   ```bash
   git clone https://github.com/jack-pepper/Libft.git
   ```

2. Run make to compile the library libft.a:
   ```bash
   make
   ```

3. Include the library to your project files:
   ```bash
   #include "libft.h"
   ```

## Usage

1. The main purpose of this project is to give a better understanding of the inner workings of the functions implemented and how memory management, data structures, and algorithms are handled at a low level in C.
2. If you are a student, I would not recommend directly copying my implementations from Libft into your own projects. Their purpose is to provide an alternative reference that can help you compare your own work, that can and should differ as this is part of the learning process. Use it as a way to understand the correct behavior and compare your approach to handle specific scenarios.
3. Libft is designed to be modular, so you can easily add or remove functions depending on your needs.

## Features

### Standard Libraries Implementations)

#### From ctype.h
- `ft_isalpha` - Checks if a character is an alphabetic letter (A-Z or a-z).
- `ft_isdigit` - Checks if a character is a digit (0-9).
- `ft_isalnum` - Checks if a character is either alphabetic or a digit.
- `ft_isascii` - Checks if a character is a valid ASCII character.
- `ft_isprint` - Checks if a character is printable (including space).
- `ft_toupper` - Converts a lowercase letter to uppercase.
- `ft_tolower` - Converts an uppercase letter to lowercase.
- `ft_atoi` - Converts a string to an integer, handling whitespace and signs.

#### From string.h
- `ft_strlen` - Returns the length of a string (excluding the null terminator).
- `ft_memset` - Fills a block of memory with a specified value.
- `ft_bzero` - Sets a block of memory to zero.
- `ft_memcpy` - Copies a specified number of bytes from one memory location to another.
- `ft_memmove` - Similar to memcpy, but handles overlapping memory areas safely.
- `ft_strlcpy` - Copies a string to a destination buffer, ensuring it is null-terminated.
- `ft_strlcat` - Concatenates two strings, ensuring the result is null-terminated.
- `ft_strchr` - Finds the first occurrence of a character in a string.
- `ft_strrchr` - Finds the last occurrence of a character in a string.
- `ft_strncmp` - Compares two strings up to a specified number of characters.
- `ft_memchr` - Searches for a character in a block of memory.
- `ft_memcmp` - Compares two blocks of memory byte by byte.
- `ft_strnstr` - Finds the first occurrence of a substring in a string, searching up to a specified length.
- `ft_strdup` - Creates a copy of a string in dynamically allocated memory.
- `ft_strrev` - Reverses a string in place.

#### From stdlib.h
- `ft_calloc` - Allocates memory for an array and initializes it to zero.

### Additional Utility Functions
- `ft_itoa` - Converts an integer to a string representation.
- `ft_putchar_fd` - Writes a single character to a file descriptor.
- `ft_putstr_fd` - Writes a string to a file descriptor.
- `ft_putendl_fd` - Writes a string followed by a newline to a file descriptor.
- `ft_putnbr_fd` - Writes an integer as a string to a file descriptor.
- `ft_split` - Splits a string into an array of substrings, using a delimiter.
- `ft_strjoin` - Concatenates two strings into a new string.
- `ft_strmapi` - Applies a function to each character of a string and returns a new string with the results.
- `ft_strtrim` - Removes leading and trailing whitespace (or specified characters) from a string.
- `ft_substr` - Extracts a substring from a string, starting at a given position and with a specified length.
- `ft_striteri` - Applies a function to each character of a string, passing both the character and its index.

### Linked lists handling Functions
- `ft_lstnew` - Creates a new linked list node with a given content.
- `ft_lstadd_front` - Adds a new node at the front of a linked list.
- `ft_lstsize` - Returns the size (number of elements) of a linked list.
- `ft_lstlast` - Returns the last node in a linked list.
- `ft_lstadd_back` - Adds a new node at the end of a linked list.
- `ft_lstdelone` - Deletes a node from a linked list and frees its memory.
- `ft_lstclear` - Clears a linked list by deleting all its nodes and freeing their memory.
- `ft_lstmap` - Applies a function to each element in a linked list and returns a new list with the modified elements.
- `ft_lstiter` - Iterates over a linked list and applies a function to each element.

### Extra functions
As my cursus progresses and new challenges arise, I plan to expand this library by adding additional functions to meet specific project needs. These updates will enhance the functionality and versatility of the library.

## Contributing

Contributions are welcome! If you notice any areas where the implementation can be improved or have suggestions for new features, feel free to contribute. I am always willing to learn.

1. Fork the repository.
2. Create a new branch (`git checkout -b feature-branch`).
3. Commit your changes (`git commit -am 'Add new feature'`).
4. Push to the branch (`git push origin feature-branch`).
5. Open a pull request.

## Acknowledgments

- Thanks to 42 and to Marvin for being such an inspiration.
