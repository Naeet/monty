#include "monty.h"
/**
 * rotr - fun
 * @stack: stack
 * @line_number: num
 */
void rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *last;
	(void) line_number;

	if (*stack == NULL || (*stack)->next == NULL)
		return;

	last = *stack;
	while (last->next != NULL)
		last = last->next;

	last->prev->next = NULL;
	last->next = *stack;
	last->prev = NULL;
	(*stack)->prev = last;
	*stack = last;
}
