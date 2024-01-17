#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

int is_numeric(const char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
			return (0);
		str++;
	}
	return (1);
}
