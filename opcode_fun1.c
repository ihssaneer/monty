#include "monty.h"
/**
 * push_fun - shs
 * @stack: ijq
 * @L: jhjn
 * Return: void.
 */
void push_fun(stack_t **stack, unsigned int L)
{
	/* Node declaration section: */
	stack_t *new_node = NULL;

	if (stack == NULL)
		return;
	/*stack update qures*/
	new_node = (stack_t *)malloc(sizeof(stack_t));
	if (!new_node)
	{
		fprintf(stderr, "Error: malloc failed %d\n", L);
		exit(EXIT_FAILURE);
	}
	new_node->n = _file.num;
	new_node->next = *stack;
	new_node->prev = NULL;
	if (*stack != NULL)
		(*stack)->prev = new_node;
	*stack = new_node;
}
/**
 * pall_fun - shs
 * @stack: ijq
 * @L: jhjn
 * Return: void.
 */
void pall_fun(stack_t **stack, unsigned int L)
{
	stack_t *tmp;
	(void) L;

	if (*stack == NULL)
		return;
	tmp = *stack;
	while (tmp->next != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
	printf("%d\n", tmp->n);
}
/**
 * pint_fun - function
 * @stack: kjdw
 * @L: kmdfwfm
 * Return: void
*/
void pint_fun(stack_t **stack, unsigned int L)
{
	if (*stack == 0)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", L);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
/**
 * pop_fun - function
 * @stack: kjdw
 * @L: kmdfwfm
 * Return: void
*/
void pop_fun(stack_t **stack, unsigned int L)
{
	stack_t *tmp = NULL;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", L);
		exit(EXIT_FAILURE);
	}
	tmp = *stack;
	if (tmp->next == NULL)
		*stack = NULL;
	else
		*stack = (*stack)->next;
	free(tmp);
}
/**
 * swap_fun - function
 * @stack: kjdw
 * @L: kmdfwfm
 * Return: void
*/
void swap_fun(stack_t **stack, unsigned int L)
{
	int n = 0;

	if (!*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", L);
		exit(EXIT_FAILURE);
	}
	n = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = n;
}
