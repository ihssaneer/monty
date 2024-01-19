#include "monty.h"

/**
 * push - shs
 * @stack: ijq
 * @value: jhjn
 * Return: void.
*/

void _push(stack_t **stack, unsigned int value)
{
    /* Node declaration section: */
    stack_t *new_node = (stack_t *) malloc(sizeof(stack_t));

    if (stack == NULL)
        return;

    /* Stack update qures*/
    new_node->n = value;
    new_node->next = *stack;
    if (*stack != NULL)
    {
        (*stack)->prev = new_node;
    }
    new_node->prev = NULL;
    *stack = new_node;
}
