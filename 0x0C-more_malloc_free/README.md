0x0C. C - More malloc and free

How to use the exit function.
What are the functions calloc and realloc, and how to use them.

0 - Trust no one.
	Write a function that allocates memory using malloc.
	- Returns a pointer to allocated memory.
	- If malloc fails, the malloc_checked function should cause normal
	  process termination with a status value of 98.

1 - string_nconcat
	Write a function that concatenates two strings.
	- The returned pointer shall point to a newly space in memory, which
	  contains s1, followed by the first n bytes of s2, and null terminated.
	- If the function fails, it should return NULL
	- If n is greater or equal to the length of s2, use the entire string.
	- If NULL is passed, treat it as an empty string.

2 - _calloc
	Write a function that allocates the memory for an array, using malloc
	- The _calloc function allocates memory for an array of nmemb elements
	  of size bytes each and returns a pointer to the allocated memory.
	- The memory is set to zero.
	- if nmemb or size is 0, than _calloc returns NULL.
	- If malloc fails, then _calloc returns NULL.
	Run man calloc

3 - array_range
	Write a function that creates an array of integers.
	- The array created should contain all the values of min to max, 
	  ordered from min to max.
	- Return: the pointer to the newly created array.
	- If min > max, return NULL
	- If malloc fails, return NULL.

Quiz answers:
#0: C
#1: A, D, F
#2: True
#3: True
#4: B, D
#5: No
#6: No
#7: Yes
#8: The heap
#9: D
