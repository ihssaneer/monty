#include "monty.h"

/**
 * execute_opc - kjf
 * @L: dhfofhr
 */
void execute_opc(unsigned int L)
{
	int i = 0;

	instruction_t op[] = {
		{"push", _push},
		{"pall", _pall},
		{NULL, NULL}
	};

	while (op[i].opcode)
	{
		if (strcmp(_file.array[0], op[i].opcode) == 0)
		{
			op[i].f(_file.stack, L);
			return;
		}
		i++;
	}
	fprintf(stderr, "L%d: unknown instruction %s\n", L, _file.array[0]);
	free(_file.array);
	free_stack(_file.stack);
	exit(EXIT_FAILURE);
}
/**
 * _push - shs
 * @stack: ijq
 * @L: jhjn
 * Return: void.
 */
void _push(stack_t **stack, unsigned int L)
{
	stack_t *new_node = NULL;

	if (stack == NULL)
		return;
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
 * _pall - shs
 * @stack: ijq
 * @L: jhjn
 * Return: void.
 */
void _pall(stack_t **stack, unsigned int L)
{
	stack_t *current;
	(void)L;

	current = (stack_t *) malloc(sizeof(stack_t));
	current = *stack;
	if (stack == NULL)
		return;
	while (current != NULL)
	{
		printf("%d", current->n);
		current = current->next;
	}
}
/**
 * _pint - function
 * @stack: kjdw
 * @L: kmdfwfm
 * Return: void
 */
void _pint(stack_t **stack, unsigned int L)
{
	unsigned int count = 0;
	stack_t *current = NULL;

	current = (stack_t *) malloc(sizeof(stack_t));
	current = *stack;
	if (stack == NULL)
		return;
	while (current != NULL)
	{
		count++;
		if (count == L)
		{
			printf("%d", current->n);
			break;
		}
		current = current->next;
	}
}
