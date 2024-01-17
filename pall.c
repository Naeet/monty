#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * pall - fun
 * @stack: stack
 * @line_number: num
 */

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current;
	(void)line_number;

	current	= *stack;
	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
