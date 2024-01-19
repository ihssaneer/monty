#include "monty.h"
/**
 * pint - function
 * @stack: kjdw
 * @line_number: kmdfwfm
 * Return: void
 */

void pint(stack_t **stack, unsigned int line_number)
{
    /* Variable section: */
    int count = 0;
    
    /* Node declaration section: */
    stack_t *current = (stack_t *) malloc(sizeof(stack_t));
    current = *stack;

     if (stack == NULL)
        return;
    
    while (current != NULL)
    {
        count ++;
        if (count == line_number)
        {
            printf("%d", current->n);
            break;
        }
        current = current->next;
    }
}
