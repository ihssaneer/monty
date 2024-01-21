#include "monty.h"
/**
 * add_fun - function
 * @stack: kjdw
 * @L: kmdfwfm
 * Return: void
*/
void add_fun(stack_t **stack, unsigned int L)
{
	if (!*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", L);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n += (*stack)->n;
	*stack = (*stack)->next;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}
