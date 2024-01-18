#include "monty.h"
/**
 * pstr - fun
 * @stack: stack
 * @line_number: num
 */
void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *current;
	(void) line_number;
       
	current	= *stack;

	while (current != NULL && current->n != 0 && current->n >= 0 && current->n <= 127)
	{
		putchar(current->n);
		current = current->next;
	}

	putchar('\n');
}
