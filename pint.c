#include "monty.h"
/**
 * _pint - prints the top
 * @hd: stack head
 * @cntr: line_number
 * Return: no return
*/
void _pint(stk_t **hd, unsigned int cntr)
{
	if (*hd == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", cntr);
		fclose(bus.file);
		free(bus.cont);
		free_stack(*hd);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*hd)->n);
}
