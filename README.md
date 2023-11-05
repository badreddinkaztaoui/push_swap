# Push Swap Project

This is a C program for sorting a stack of numbers using a specific set of operations. The program implements various sorting algorithms based on the size of the input list. It includes functions for operations like pushing, popping, rotating, and swapping elements in the stacks.

## Table of Contents
1. [Introduction](#introduction)
2. [Algorithms](#algorithms)
3. [Utility Functions](#utility-functions)
4. [Main Function](#main-function)
5. [Input Validation](#input-validation)
6. [Error Handling](#error-handling)
7. [Print Functions](#print-functions)
8. [Memory Management](#memory-management)
9. [Compilation and Execution](#compilation-and-execution)

## Introduction

The program is designed to sort a stack of numbers using a set of specific operations. It includes the following main components:

### Algorithms
- `algorithm`: This function determines which sorting algorithm to use based on the size of the stack.

- `sort_three_nums`: Sorts three numbers in the stack.

- `sort_five_nums`: Sorts five numbers in the stack.

- `sort_ten_num`: Sorts ten numbers in the stack.

- `sort_mult_nums`: Sorts a stack with more than ten numbers.

### Utility Functions
- `quick_sort`: Implements a quick sort algorithm for sorting arrays.

- Various stack manipulation functions like `push`, `pop`, `rotate`, `swap`, etc.

### Main Function
- `main`: Reads input numbers, initializes stacks, calls the sorting algorithm, and prints the result.

### Input Validation
- `ft_atoi`: Converts a string to an integer, handling whitespace and error cases.

### Error Handling
- `ft_error`: Prints an error message and exits the program.

### Print Functions
- `print_list`: Prints the elements of a linked list.

### Memory Management
- `deallocate`: Frees memory allocated for a linked list.

## Compilation and Execution

To compile and run the program, use the following commands:

```bash
make
./push_swap <list_of_numbers>
```

Replace `<list_of_numbers>` with the numbers you want to sort, separated by spaces.

Note: This program assumes that the input is valid and contains only integer values.

Feel free to modify, improve, and extend this code as needed for your specific use case. Happy coding!
