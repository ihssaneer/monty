#ifndef MONTY_H
#define MONTY_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
/**
 * struct file_s - fh
 * @num: the opcode
 * @file: function to handle the opcode
 * @array: ijfqsk
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct file_s
{
        int num;
        FILE *file;
        char **array;
        char **stack;
} file_t;
extern file_t _file;

void arrage_line(char *line);
void remove_space(char *line);
int check_number(void);
void check_args(int ac,char **av);
void free_array(void);
void free_stack(void);
void execute_opc(unsigned int L);

void pall(stack_t **stack);
void pint(stack_t **stack, unsigned int line_number);
void push(stack_t **stack, unsigned int value);

#endif /*MONTY_H*/
