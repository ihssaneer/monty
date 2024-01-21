#include "monty.h"
/**
 * pchar_fun - shs
 * @stack: ijq
 * @L: jhjn
 * Return: void.
 */
void pchar_fun(stack_t **stack, unsigned int L)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "%d: can't pchar, stack empty\n", L);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n >= 0 && (*stack)->n <= 127)
	{
			printf("%c\n", (*stack)->n);
			return;
	}
	fprintf(stderr, "%d: can't pchar, value out of range\n", L);
	exit(EXIT_FAILURE);
}
/**
 * pstr_fun - shs
 * @stack: ijq
 * @L: jhjn
 * Return: void.
 */
void pstr_fun(stack_t **stack, unsigned int L)
{
	stack_t *tmp = NULL;
	(void)L;

	if (*stack == NULL)
	{
		printf("\n");
		return;
	}
	tmp = *stack;
	while (tmp->next)
	{
		if (tmp->n <= 0 && tmp->n > 127)
			return;
		printf("%c", tmp->n);
		tmp = tmp->next;
	}
	printf("%c\n", tmp->n);
}
