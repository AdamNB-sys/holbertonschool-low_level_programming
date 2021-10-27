0x0F (0x10?) C - Function pointers

What are function pointers and how to use them.
What does a function pointer exactly hold.
Where does a function pointer point to in the virtual memory.

0 - What's my name.
	Write a function that prints a name.
	Prototype: void print_name(char *name, void (*f)(char *));

1 - If you spend too much time thinking about a thing, you'll never get it done.
	Write a function that executes a function given as a parameter on each element of an array.
	Prototype: void array_iterator(int *array, size_t size, void (*action)(int));

2 - To hell with circumstances; I create opportunities.
	Write a function that searches for an integer.
	Prototype: int int_index(int *array, int size, int (*cmp)(int));

3 - A goal is not always meant to be reached, it oftem serves simply as something to aim at.
	Write a program that performs simple operations.
	- The standard library is allowed

Quiz answers:
0: C
1: A, B
2: A, B
3: D
4: B, D
