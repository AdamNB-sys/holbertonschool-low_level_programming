0x0A(B?) C - argc, argv.

How to use arguments passed to my programs.
What are the two main prototypes of 'main', and in which cases to use them.
How to use __attribute__((unused)) or (void) to compile functions with 
unused variables or parameters.

argc - A count of the arguments supplied to the program
argv - A one-dimensional array of strings, where each string is one of the
       arguments passed to the program.


Tasks:
-- 0. It ain't what they call you, it's what you answer to.
	Write a program that prints its name followed by a newline.
	 -If it is renamed, it will print the new name without recompilation
	 -You should not remove the path before the name of the program

-- 1. Silence is argument carried out by other means.
	Write a program that prints the number of arguments passed to it.
	 - The program should print a number followed by a newline

-- 2. The best argument against democracy is a five-minute conversation with the average voter.
	Write a program that prints all arguments it receives.
	 - All arguments including the first one should be printed
	 - Only print one argument per line, ending with a newline

-- 3. Neither irony nor sarcasm is argument.
	(Quote by some schmuck with no sense of humor)
	Write a program that multiplies two numbers.
	 - Print the result of the multiplication, followed by newline
	 - Assume the two numbers and result can be stored in an int variable
	 - If two areguments aren't received, the program should print "Error"
	   followed by a newline, and return (1)
