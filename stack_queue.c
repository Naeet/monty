#include "monty.h"
/**
 * stack - fun
 * @stack: stack
 * @line_number: num
 */
void stack(stack_t **stack, unsigned int line_number)
{
	(void)line_number;
	(void)stack;

}
/**
 * queue - fun
 * @stack: stack
 * @line_number: num
 */
void queue(stack_t **stack, unsigned int line_number)
{
	(void)line_number;

	if (*stack != NULL)
	{
		stack_t *current = *stack;
		stack_t *prev = NULL;
		stack_t *next = NULL;

		while (current != NULL)
		{
			next = current->next;
			current->next = prev;
			current->prev = next;
			prev = current;
			current = next;
		}

		*stack = prev;
	}
}
