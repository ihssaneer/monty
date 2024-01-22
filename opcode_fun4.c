#include "monty.h"

/**
 * rotr_fun - function
 * @stack: kjdw
 * @L: kmdfwfm
 * Return: void
*/
void rotr_fun(stack_t **stack, unsigned int L)
{
	int n = 0;
	stack_t *tmp = NULL;
	(void)L;

	if (!*stack || !(*stack)->next)
		return;
	tmp = *stack;
	while (tmp->next)
		tmp = tmp->next;
	n = tmp->n;
	while (tmp->prev)
	{
		tmp->n = tmp->prev->n;
		tmp = tmp->prev;
	}
	tmp->n = n;
}
