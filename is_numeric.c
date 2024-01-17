#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * is_numeric - fun
 * @str: stri
 * Return: num
 */

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
