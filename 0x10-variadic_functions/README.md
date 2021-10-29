0x11(10?) C - Variadic functions

General learning objectives:
What are variadic functions.
How to use va_start, va_arg, and va_end macros.
Why and how to use the const type qualifier.

Tasks:
0 - Beauty is variable, ugliness is constant.
	Write a function that returns the sum of all its parameters.
	Prototype: int sum_them_all(const unsigned int n, ...);

1 - To be is to be the value of a variable.
	Write a function that prints numbers, followed by newline.
	Prototype: void print_numbers(const char *separator, const unsigned int n, ...);

2 - One woman's constant is another woman's variable.
	Write a function that prints strings, followed by a newline
	Prototype: void print_strings(const char *separator, const unsigned int n, ...);
	- You are allowed to use printf

3 - To be a is to be the value of a variable.
	Write a function that prints anything
	Prototype: void print_all(const char * const format, ...);

Quiz:
No quiz this project.
