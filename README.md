*This project has been created as part of the 42 curriclum by cltan.*

# Description
### ft_libft: cltan's 42 C library

Personal static library ('libft.a') consisting re-implementations of standard C library functions and several utility functions.

This is the libft project from 42 Singapore's Circle 0. This library will serve as the foundation for subsequent projects in the core cirriculum.

# Instructions
## Usage and compilation

### Compilation

To compile the library, navigate to the root directory of the projet and fun the detault 'Makefile' rule:

```bash
make
```
Compiles all the functions into a libft.a

```bash
make clean
```
Removes all object files

```bash
make fclean
```
Removes all object files and resulting library file

```bash
make re
```
Rebuilds the entire project (runs fclean followed by make)

---
### Testing Usage

For testing purpose, you may git clone https://github.com/clark7walker/libft.git to download my entire libft folder which includes Tripouille/libftTester and my own personal main.c file.

#### To use Tripouille/libftTester

Navigate to the libft_tester direction and '~ make' to start the tester.

# Resources

**Official Documentation**

Man Pages

**Tutorials/Articles**

https://42-cursus.gitbook.io/guide

https://youtu.be/yWLkyN_Satk?si=4oougl1Ik_F3Ktkm


**Collaborative Help**

Discussion with @ryatan, @fkoh, @jatansil, @bralee and @stelim for various functions explanation and understating.

**AI Usage**

ChatGPT 4 & Gemini 2.5 Pro - In assisting explanation of certain features and why code was done in a certain way. As well as assiting in structing for README.md.

# Functions list (Part 1, 2 & 3)

### Part 1 - Functions List
---
### *Character Checks*

**ft_isalpha** - checks for alphabetic character

**ft_isdigit** - checks for a digit (0 through 9)

**ft_isalnum** - checks for an alphanumeric character.

**ft_isascii** - checks where c is a 7-bit unsigned char value that fits into the Ascii character set.

**ft_isprint** - checks for any printable character include space.

### *String & Memory*
**ft_strlen** - calculate the length of a string.

**ft_memset** - fill memory with a constant byte.

**ft_bzero** - erases the data in n byte by writing 0.

**ft_memcpy** - copies n byes from memory area src to memory area dest, it must not overlap.

**ft_memmove** - copies n bytes from memory area src to dest, memory might overlap.

**ft_strlcpy** - size-bounded string copying.

**ft_strlcat** - size-bounded string concatenation.

**ft_toupper** - convert lowercase to uppercase.

**ft_tolower** - convert uppercase to lowercase.

**ft_strchr** - locate first character occurrence in a string.

**ft_strrchr** - locate a character of last occurerence in a string.

**ft_strncmp** - compare two strings.

**ft_memchr** - scan memory for character.

**ft_memchr** - compare memory areas.

**ft_strnstr** - locate a substring in a string.

**ft_atoi** - convert a string to integer

### *Memory Allocation*
**ft_calloc** - allocates memory with set memory to zero.

**ft_strdup** - a new pointer to a new string with malloc.

---
### Part 2 - Functions List (Additional functions)
---

**ft_substr** - allocate memory and returns a substring with an index 'start' with a maximum length of 'len' from within 's'.

**ft_strjoin** - allocate memory and return a new string that concatenate 's1' and 's2'.

**ft_strtrim** - allocate memory and return a copy of 's1' with characters from 'set' removed from the beginning and the end.

**ft_split** - allocate memory and return an array of strings obtained by splitting 's' with the character 'c' as a delimiter.

**ft_itoa** - convert to a string representing the integer and negative numbers must be handled.

**ft_strmapi** - applies function 'f' to each character of the string 's' with a new string, return a new string.

**ft_striteri** - applies function 'f' to each character of the string 's'.

**ft_putchar_fd** - outputs the character 's' to specified file descriptor.

**ft_putstr_ft** - outputs the string 's' to specified file descriptor.

**ft_putendl_fd** - outputs the string 's' to specified file descriptor followed by a newline.

**ft_putnbr_ft** - outputs the integer 'n' to specified file descriptor.

---
### Part 3 - Functions List (Linked List)
---

**ft_lstnew** - allocate a memory and return a new node with content initialised and next is initalised to NULL.

**ft_lstadd_front** - add a new node 'new' to the beginning of the list.

**ft_lstsize** - counts the number of nodes in the list.

**ft_lstlast** - return the last node of the list

**ft_lstadd_back** - add a new node 'new' to the end of the list.

**ft_lstdelone** - take a node as a parameter, free its content with function 'del' and free the node itself.

**ft_lstclear** - Deletes and frees the given node and all its successors.

**ft_lstiter** - Iterates through the list 'lst' and apply function 'f' to the content of each node.

**ft_lstmap** - Iterates through the list 'lst', apply function 'f' to each nodes to a new list.