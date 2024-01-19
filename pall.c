#include "monty.h"

/**
 * pall - shs
 * @stack: ijq
 * @value: jhjn
 * Return: void.
*/

void pall(stack_t **stack, unsigned int line_number) 
{
    (void)line_number;

    /* Node declaration section: */
    stack_t *current = (stack_t *) malloc(sizeof(stack_t));
    current = *stack;

    if (stack == NULL)
    return;

    while (current != NULL) {
        printf("%d", current->n);
        current = current->next;
    }
}
