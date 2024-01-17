#include "monty.h"

#include <stdlib.h>
#include <stdio.h>

extern stack_t *stack;
void execute_instruction(char *line, unsigned int line_number)
{
	char *opcode, *arg;
	opcode = strtok(line, " \t\n");

	if (opcode == NULL || opcode[0] == '#')
		return;

	if (strcmp(opcode, "push") == 0)
	{
		arg = strtok(NULL, " \t\n");

		if (arg == NULL || !is_numeric(arg))
		{
			fprintf(stderr, "L%d: usage: push integer\n", line_number);
			exit(EXIT_FAILURE);
		}
		push(&stack, atoi(arg));
	}
	else if (strcmp(opcode, "pall") == 0)
	{
		pall(&stack, line_number);
	}
	else
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", line_number, opcode);
		exit(EXIT_FAILURE);
	}
}
