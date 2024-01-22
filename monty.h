#ifndef MONTY_H
#define MONTY_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <ctype.h>

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
 * @stack: jhf
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct file_s
{
	int num;
	FILE *file;
	char **array;
	stack_t *stack;
} file_t;
extern file_t _file;

void arrage_line(char *line);
void remove_space(char *line);
int check_number(void);
void check_args(int ac, char **av);
void free_array(void);
void free_stack(stack_t **stack);
void execute_opc(unsigned int L);
void push_fun(stack_t **stack, unsigned int L);
void pall_fun(stack_t **stack, unsigned int L);
void pint_fun(stack_t **stack, unsigned int L);
void pop_fun(stack_t **stack, unsigned int L);
void swap_fun(stack_t **stack, unsigned int L);
void add_fun(stack_t **stack, unsigned int L);
void sub_fun(stack_t **stack, unsigned int L);
void div_fun(stack_t **stack, unsigned int L);
void mul_fun(stack_t **stack, unsigned int L);
void mod_fun(stack_t **stack, unsigned int L);
void pchar_fun(stack_t **stack, unsigned int L);
void pstr_fun(stack_t **stack, unsigned int L);
void rotl_fun(stack_t **stack, unsigned int L);
void rotr_fun(stack_t **stack, unsigned int L);

#endif /*MONTY_H*/
