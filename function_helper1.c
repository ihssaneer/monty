#include "monty.h"

/**
 * check_args - jhd
 * @ac: jhd
 * @av: jd
 * Return: void
 */
void check_args(int ac, char **av)
{
	_file.file = NULL;
	if (ac == 2)
	{
		_file.file = fopen(av[1], "r");
		if (_file.file == NULL)
		{
			fprintf(stderr, "Error: Can't open file %s\n", av[1]);
			exit(EXIT_FAILURE);
		}
		_file.array = NULL;
		_file.num = 0;
		_file.stack = NULL;
	}
	else
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
}
/**
 * arrage_line - jhf
 * @line: jfJV
 * Return: kjfij
 */
void arrage_line(char *line)
{
	char *token = NULL;
	int i = 0;

	line[strlen(line) - 1] = '\0', remove_space(line);
	if (strlen(line) != 0)
	{
		_file.array = malloc(sizeof(char *) * 2);
		if (!_file.array)
		{
			fprintf(stderr, "Error: malloc failed\n");
			exit(EXIT_FAILURE);
		}
		token = strtok(line, " \t");
		while (token && i < 2)
		{
			_file.array[i] = token;
			token = strtok(NULL, " \t");
			i++;
		}
	}
}
/**
 * remove_space - shs
 * @str: ijq
 * Return: void.
 */
void remove_space(char *str)
{
	int i = 0, j = 0;

	while ((*(str + i) == ' ' || *(str + i) == '\t') && *(str + i))
		i++;
	for (; *(str + i) && *(str + j); i++, j++)
		*(str + j) = *(str + i);
	*(str + j) = '\0';
}
/**
 * check_number - khd
 * Return: 1 on success and 0 on failure.
 */
int check_number(void)
{
	int i = 0;

	if (!_file.array[1])
		return (0);
	while (_file.array[1][i] != '\0')
	{
		if (_file.array[1][i] < 48 && _file.array[1][i] > 57)
			return (0);
	}
	_file.num = atoi(_file.array[1]);
	return (1);
}
/**
 * free_stack - fuction that frees our stack
 * @stack: first argument
 * Return: ,gj
 */
void free_stack(stack_t **stack)
{
	node *actuel = stack;

	while (actuel != NULL)
	{
		node *tmp;
		tmp = actuel;
		actuel = actuel->suivant;
		free(tmp->nom);
		free(tmp);
	}
}
