#include "monty.h"
/**
 * f_pall - A function that prints the stack
 * @head: The stack head
 * @counter: unsigned use
 * Return: returns nothing
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
