# libft
*This project has been created as part of the 42 curriculum by aabufarw

## Description
Libft is our very first coding project at 42. The main goal is to build a custom static C library (`libft.a`) from scratch. Instead of relying on standard C library functions, we get to reimplement them ourselves, alongside a bunch of extra utility functions and linked list operations. 

Building this library gives us a solid, foundational understanding of low-level programming, memory allocation (`malloc`/`free`), pointer manipulation, and how static libraries are put together. These functions become our personal toolkit that we can carry over and reuse in almost all upcoming C projects in the curriculum.

The project is structured into three mandatory parts:
* **Part 1 (Libc Functions):** Reimplementing standard library functions (like string checks, memory manipulation, and conversions) keeping the exact same behavior and prefixing them with `ft_`.
* **Part 2 (Additional Functions):** Creating brand-new utility functions that don't exist in standard C (such as string splitting, trimming, substring extraction, and file descriptor output functions).
* **Part 3 (Linked Lists):** Building a complete set of data structure functions to create, modify, iterate, and clear linked lists (`t_list`).

---

## Instructions & Compilation

### Makefile Rules
Your Makefile includes the following standard rules:
* `make`: Compiles all mandatory source files and creates the `libft.a` static library archive using `ar rcs`.
* `make clean`: Removes all temporary object (`.o`) files.
* `make fclean`: Removes all object files as well as the compiled `libft.a` library file.
* `make re`: Performs a full clean (`fclean`) and recompiles everything from scratch.

### How to Use and Test
To use `libft` in your own programs or test it manually with a custom `main.c` file, compile your test file by linking it directly against your library:
```bash
cc -Wall -Wextra -Werror test_file.c libft.a -o test_program
./test_program

## Libc Functions

### 1. Part 1 - Libc Functions
* **`ft_isalpha`**: Checks if a character is an alphabetic letter (A-Z or a-z).
* **`ft_isdigit`**: Checks if a character is a digit (0-9).
* **`ft_isalnum`**: Checks if a character is alphanumeric (letter or digit).
* **`ft_isascii`**: Checks if a character fits within the 128-character ASCII table.
* **`ft_isprint`**: Checks if a character is printable (including spaces).
* **`ft_strlen`**: Calculates the length of a string (excluding the null terminator).
* **`ft_memset`**: Fills a block of memory with a specific byte value.
* **`ft_bzero`**: Sets a block of memory to zero bytes.
* **`ft_memcpy`**: Copies a block of memory from a source to a destination (non-overlapping).
* **`ft_memmove`**: Copies memory safely even if the source and destination regions overlap.
* **`ft_strlcpy`**: A safer, size-bounded string copy function that guarantees null-termination.
* **`ft_strlcat`**: A safer, size-bounded string concatenation function.
* **`ft_toupper`**: Converts a lowercase letter to uppercase.
* **`ft_tolower`**: Converts an uppercase letter to lowercase.
* **`ft_strchr`**: Locates the first occurrence of a character in a string.
* **`ft_strrchr`**: Locates the last occurrence of a character in a string.
* **`ft_strncmp`**: Compares two strings up to a maximum number of bytes (`n`).
* **`ft_memchr`**: Searches for a specific byte in a block of memory.
* **`ft_memcmp`**: Compares two blocks of memory byte by byte.
* **`ft_strnstr`**: Locates a smaller substring inside a larger string up to a maximum length `n`.
* **`ft_atoi`**: Converts the initial portion of a string representation of a number into an integer.
* **`ft_calloc`**: Allocates heap memory for an array and initializes all bytes to zero.
* **`ft_strdup`**: Allocates fresh memory and duplicates a given string into it.

### 2. Part 2 - Additional Functions
* **`ft_substr`**: Extracts a smaller substring out of a string, starting at a given index with a maximum length.
* **`ft_strjoin`**: Allocates a new string and joins two strings (`s1` and `s2`) together end-to-end.
* **`ft_strtrim`**: Removes specific unwanted characters from both the beginning and the end of a string.
* **`ft_split`**: Splits a string into an array of separate strings using a specific delimiter character.
* **`ft_itoa`**: Converts an integer number into a newly allocated string.
* **`ft_strmapi`**: Applies a custom function to each character of a string along with its index, building a brand-new string.
* **`ft_striteri`**: Loops through a string and modifies each character directly in place by passing its address and index.
* **`ft_putchar_fd`**: Writes a single character to a specified file descriptor.
* **`ft_putstr_fd`**: Writes an entire string to a specified file descriptor.
* **`ft_putendl_fd`**: Writes a string followed by a newline character to a specified file descriptor.
* **`ft_putnbr_fd`**: Writes an integer number as text to a specified file descriptor.

### 3. Part 3 ⛓️ Linked List Functions 

**A collection of functions designed to create, manipulate, and traverse singly linked lists using the `t_list` structure.**

* **`ft_lstnew`**: Allocates and returns a new node. It initializes the content with the given value and sets the next pointer to `NULL`.
* **`ft_lstadd_front`**: Adds a new node at the very beginning of the list.
* **`ft_lstsize`**: Counts and returns the total number of nodes currently in the list.
* **`ft_lstlast`**: Traverses the list and returns a pointer to the last node.
* **`ft_lstadd_back`**: Adds a new node at the very end of the list.
* **`ft_lstdelone`**: Frees the memory of a specific node's content using a custom delete function, then frees the node itself.
* **`ft_lstclear`**: Deletes and frees a given node and all of its successors, setting the list pointer to `NULL`.
* **`ft_lstiter`**: Iterates through the list and applies a custom function to the content of each node.
* **`ft_lstmap`**: Iterates through the list, applies a function to each node's content to create a new list, and handles clean-up if an allocation fails.


## Resources & AI Usage

### Resources
* **Official Manuals & Documentation:** Unix manual pages (`man`) for C standard library functions, and the official 42 Amman project guidelines and Norminette documentation.
* **Online Coding & Reference Platforms:** GeeksforGeeks and W3Schools for logic explanations, syntax refreshers, and core programming concept reviews.
* **Community & Troubleshooting:** Stack Overflow for exploring common debugging hurdles, edge cases, and segmentation fault troubleshooting.
* **Video Tutorials:** A wide range of programming tutorials on YouTube, including detailed programming walkthroughs that helped break down complex memory management and pointer concepts.
* **Testing & Verification:** Community-driven testing references and units used for verifying edge cases and memory leak behavior.

### AI Usage
During the development of this project, AI was utilized strictly as a conceptual technical reference and collaborative mentor. Specifically, AI helped clarify low-level pointer arithmetic, review Makefile rule structures to prevent relinking issues, and understand edge case behaviors (such as handling `NULL` terminators in `ft_split` or memory management in `ft_lstmap`). All actual code implementations, debugging, and structural decisions were personally written, tested, and understood.
