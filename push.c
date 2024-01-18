#include "monty.h"

/**
 * push - shs
 * @stack: ijq
 * @value: jhjn
 * Return: void.
*/

void push(stack_t **stack, unsigned int value)
{
    /* Node declaration section: */
    
    stack_t *head = (stack_t *) malloc(sizeof(stack_t));
    if (*stack == NULL)
    {
        printf("error stack is nul\n");
        exite (EXIT_FAILURE);
    }
    head->n = value;
    head->next = *stack;
    if (*stack != NULL)
    {
        (*stack)->prev = head;
    }
    head->prev = NULL;
    *stack = head;
}
