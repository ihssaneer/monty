#include "monty.h"

/**
 * execute_opc - kjf
 * @L: dhfofhr
 */
void execute_opc(unsigned int L)
{
	int i = 0;

	instruction_t op[] = {
		{"push", push_fun},
		{"pall", pall_fun},
		{"pint", pint_fun},
		{"pop", pop_fun},
		{"swap", swap_fun},
		{"add", add_fun},
		{"sub", sub_fun},
		{"div", div_fun},
		{"mul", mul_fun},
		{"mod", mod_fun},
		{"pchar", pchar_fun},
		{"pstr", pstr_fun},
		{NULL, NULL}
	};

	while (op[i].opcode)
	{
		if (strcmp(_file.array[0], op[i].opcode) == 0)
		{
			op[i].f(&_file.stack, L);
			return;
		}
		i++;
	}
	fprintf(stderr, "L%d: unknown instruction %s\n", L, _file.array[0]);
	free(_file.array);
	free_stack(&_file.stack);
	fclose(_file.file);
	exit(EXIT_FAILURE);
}
