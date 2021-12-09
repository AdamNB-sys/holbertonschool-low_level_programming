0x18 C - Doubly linked lists

Learning objectives:

	 - What is a doubly linked list.
	 - How to use doubly linked lists.
	 - Start to look for the right source of information without too much help


Tasks:

0. Print list

	Write a function that prints all the elements of a `dlistint_t` list.

	 - Prototype: `size_t print_dlistint(const dlistint_t *h);`
	 - Return: the number of nodes


1. List length

	Write a function that returns that number of elements in a linked `dlistint_t` list.

	 - Prototype: `size_t dlistint_len(const dlistint_t *h);`


2. Add node

	Write a function that adds a new node at the beginning of a `dlistint_t list`.

	 - Prototype: `dlistint_t *add_dnodeint(dlistint_t **head, const int n);`
	 - Return: the address of the new element, or `NULL` if it failed


3. Add node at the end

	Write a function that adds a new node at the end of a `dlistint_t` list.

	 - Prototype: `dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);`
	 - Return: the address of the new element, or `NULL` if it failed


4. Free list

	Write a function that frees a `dlistint_t` list.

	 - Prototype: `void free_dlistint(dlistint_t *head);`


5. Get node at index

	Write a function that returns the nth node of a `dlistint_t` list.

	 - Prototype: `dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);`
	 - where `index` is the index of the node, starting from `0`
	 - if the node does not exist, return `NULL`


6. Sum list

	Write a function that returns the sum of all the data `(n)` of a `dlistint_t` linked list.

	 - Prototype: `int sum_dlistint(dlistint_t *head);`
	 - if the list is empty, return `0`


7. Print list backward

	Write a function that prints all the elements of a dlistint_t list backward.

	 - Prototype: `size_t print_dlistint_backward(const dlistint_t *h);`
	 - Return: the number of nodes


8. Delete at index

	Write a function that deletes the node at index `index` of a `dlistint_t` linked list.

	 - Prototype: `int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);`
	 - where `index` is the index of the node that should be deleted. Index starts at `0`
	 - Returns: `1` if it succeeded, `-1` if it failed



Quiz:

0. A, B

1. B
