#include "monty.h"

/**
 * main - jhf
 * Return: jhfi
*/
int main(int ac, char** av)
{
	FILE * fd = 0;
	char line[255];
	char *token = NULL, *str = NULL, **opcode == NULL;
	unsigned int line_number = 0;

	if (ac == 2)
	{
		fd = fopen(av[1], "r");
		if (fd == NULL)
		{
			fprintf(stderr, "Error: Can't open file %s\n", av[1]);
			exit(EXIT_FAILURE);
		}
		while ((str = fgets(line, sizeof(line), fd)) != NULL)
		{
			line_number++;
			str[strlen(str) - 1] = '\0';
			space_remover(str);
			if (strlen(str) != 0)
			{
				token = strtok(line, " ");
				opcode[0] = token;
				token = strtok(NULL, " ");
				check_instruction(line, token, line_number);
			}
		}
		fclose(fd);
	}
	else
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	return (0);
}
/**
 * space_remover - shs
 * @str: ijq
 * Return: void.
*/
void space_remover(char *str)
{
	int i = 0, j = 0;

	while ((*(str + i) == ' ' || *(str + i) == '\t') && *(str + i))
		i++;
	for (; *(str + i) && *(str + j); i++, j++)
		*(str + j) = *(str + i);
	*(str + j) = '\0';
}
/**
 * check_instruction - shs
 * @line: ijq
 * @toke: jhdp
 * @line_number: kjd
 * Return: 1 on success and -1 on failure.
 */
int check_instruction(char *line)
{
	int i = 0;
	char *opc1 = "push", *opc2 = "pall";
	instruction_t instr_list[] = {
		{opc1, push_int(stack_t **stack, unsigned int line_number)},
		{opc2, print_all(stack_t **stack, unsigned int line_number)},
		{NULL, NULL}};

		while (instr_list[i].opcode != NULL)
		{
			v = strcmp(line, instr_list[i].opcode)
			if (v == 0)
			{
				instr_list[i].f();
				break;
			}
			i++;
		}
}
