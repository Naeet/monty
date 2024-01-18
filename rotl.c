#include "monty.h"
/**
 * rotl - fun
 * @stack: stack
 * @line_number: num
 */
void rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *last;
	(void) line_number;
       
	last = *stack;

	if (*stack == NULL || (*stack)->next == NULL)
		return;

	while (last->next != NULL)
		last = last->next;

	last->next = *stack;
	(*stack)->prev = last;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
}
