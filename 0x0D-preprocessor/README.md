0x0D. C - Preprocessor

What are macros and how to use them.
What are the most common predefinied macros.
How to include guard header files.

0 - Object-like macro:
	Create a header file that definies a macro named SIZE as an
	abbreviation for the token 1024.

1 - Pi:
	Create a header file that defines a macro named PI as an
	abbreviation for the token 3.14159265359.

2 - File name:
	Write a program that prints the name of the file it was compiled
	from, followed by a newline.
	-You are allowed to use the standard library

3 - Function-like macro:
	Write a function-like macro ABS(x) that computes the absolute
	value of the number x.

4 - SUM:
	Write a function-like macro SUM(x, y) that computes the sum
	of the numbers x and y.

Quiz questions:
0: What are the steps of compilation?
	B. preprocessor, compiler, assembler, linker
1: The preprocessor generates assembly code.
	False
2: The preprocessor generates object code.
	False
3: The preprocessor links our code with libraries.
	False
4: This portion of code is acually using the library stdlib.
	False
5: The preprocessor removes all comments.
	True
6: What is the gcc option that runs only the preprocessor?
	-E
7: NULL is a macro.
	True
8: What will be the last 5 lines of the command gcc -E on this code?
	C.
9: This code will try to allocate 1024 bytes in the heap.
	True
10: What does the macro TABLESIZE expand to?
	B. 37
11: This is the correct way to define the macro SUB.
	D. No
12: Why should we use include guards in our header files?
	B.
13: The macro __FILE__ expands to the name of the current input file, 
    in the form of a C string constant
	True
14: What will be the output of this program?
	F. sizeof(i)=1
