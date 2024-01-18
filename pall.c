#include "monty.h"

/**
 * pall - shs
 * @stack: ijq
 * @line_number: jhjn
 * Return: void.
*/

void pall(stack_t **stack, unsigned int line_number) 
{
    stack_t *current = (stack_t *) malloc(sizeof(stack_t));
    current = *stack;
    while (current != NULL) {
        printf("%d", current->n);
        current = current->next;
    }
}
