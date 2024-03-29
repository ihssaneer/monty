#include "monty.h"
file_t _file;
/**
 * main - Enter points
 * @ac: the number of args
 * @av: an array of string
 * Return: 1, 0
 */
int main(int ac, char **av)
{
	char line[151];
	unsigned int L = 1;

	check_args(ac, av);
	while (fgets(line, sizeof(line), _file.file) != NULL)
	{
		arrage_line(line);
		if (_file.array[0])
		{
			if (strcmp(_file.array[0], "nop") == 0 || _file.array[0][0] == '#')
			{
				free(_file.array);
				continue;
			}
			if (strcmp(_file.array[0], "push") == 0)
			{
				if (!check_number())
				{
					fprintf(stderr, "L%d: usage: push integer\n", L);
					free_stack(&_file.stack), free(_file.array), fclose(_file.file);
					exit(EXIT_FAILURE);
				}
			}
			execute_opc(L);
			free(_file.array);
		}
		L++;
	}
	free_stack(&_file.stack);
	fclose(_file.file);
	return (EXIT_SUCCESS);
}
