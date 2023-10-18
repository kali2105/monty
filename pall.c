#include "monty.h"
/**
 * f_pall - prints all values to the stacks 
 * @head: stack head
 * @counter: none used
 * Return: void
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
