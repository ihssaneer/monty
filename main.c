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
        if (_file.array)
        {
            /* this for nop and #  comtinue*/
            if (strcmp(_file.array[0], "push") == 0)
            {
                if (!(_file.array[1] && check_number()))
                {
                    fprintf(stderr, "L%d: usage: push integer\n", L);
                    free_stack(), free_array();
                    exit(EXIT_FAILURE);
                }
            }
            execute_opc(L);
        }
        L++;
    }
    fclose(_file.file);
    return (EXIT_SUCCESS);
}
/**
 * divide - jhf
 * @line: jfJV
 * Return: kjfij
*/
void arrage_line(char *line)
{
	char *token = NULL;

	line[strlen(line) - 1] = '\0', remove_space(line);
	if (strlen(line) != 0)
	{
		_file.array[0] = (char *)malloc(sizeof(char *));
		_file.array[1] = (char *)malloc(sizeof(char *));
		token = strtok(line, " ");
		_file.array[0] = token;
		token = strtok(NULL, " ");
		if (token)
			_file.array[1] = token;
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
 * check-args - jhd
 * @ac: jhd
 * @av: jd
 * Return: void
*/
void check_args(int ac,char **av)
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
 * free_array - jkhsd
 * Return: void
*/
void free_array(void)
{
	if (!_file.array)
		return;
	free(_file.array[0]), free(_file.array[1]);
	_file.array = NULL;
}
/**
 * free_stack - jkhsd
 * @head: hh
 * Return: void
*/
void free_stack(void)
{
	printf("free stack\n");
}
/**
 * execute_opc - kjf
 * @L: 
*/
void execute_opc(unsigned int L)
{
	printf("execute opc %d\n", L);
}
