#include "monty.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LINE_LENGTH 1024

stack_t *stack = NULL;

int main(int argc, char *argv[])
{
	FILE *file;
	/*
	char *line;
	size_t len;
	*/
	unsigned int line_number;
	char line[MAX_LINE_LENGTH];

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	file = fopen(argv[1], "r");

	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
/*
	line = NULL;
	len = 0;
	*/
	line_number = 0;

	while (fgets(line, sizeof(line), file) != NULL)
	{
		line_number++;

		execute_instruction(line, line_number);

	}
	fclose(file);
/*
	if (line)
		free(line);
*/

	return (0);
}

