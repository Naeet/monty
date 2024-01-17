#include "monty.h"
#include <stdlib.h>
#include <stdio.h>

void free_stack(stack_t *stack)
{
	stack_t *current = stack, *next;

	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
