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
/**
 * sub_fun - function
 * @stack: kjdw
 * @L: kmdfwfm
 * Return: void
*/
void sub_fun(stack_t **stack, unsigned int L)
{
	if (!*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", L);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n = (*stack)->next->n - (*stack)->n;
	*stack = (*stack)->next;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}
/**
 * div_fun - function
 * @stack: kjdw
 * @L: kmdfwfm
 * Return: void
*/
void div_fun(stack_t **stack, unsigned int L)
{
	if (!*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", L);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", L);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n = (*stack)->next->n / (*stack)->n;
	*stack = (*stack)->next;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}
/**
 * mul_fun - function
 * @stack: kjdw
 * @L: kmdfwfm
 * Return: void
*/
void mul_fun(stack_t **stack, unsigned int L)
{
	if (!*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't mul, stackk too short\n", L);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n *= (*stack)->n;
	*stack = (*stack)->next;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}
/**
 * mod_fun - function
 * @stack: kjdw
 * @L: kmdfwfm
 * Return: void
*/
void mod_fun(stack_t **stack, unsigned int L)
{
	if (!*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", L);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%d: division byy zero\n", L);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n = (*stack)->next->n % (*stack)->n;
	*stack = (*stack)->next;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}
