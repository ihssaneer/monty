#include "monty.h"

/**
 * main - jhf
 * Return: jhfi
*/
int main(int ac, char** av)
{
	FILE * fd = 0;
	char line[255];
	char *token = NULL, *str = NULL;
	int i = 0;

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
			str[strlen(str) - 1] = '\0';
			space_remover(str);
			if (strlen(str) != 0)
			{
				token = strtok(line, " ");
				while (token)
				{
					i++, token = strtok(NULL, " ");
					/*if (token)
						printf("%s\n", token);*/
				}
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
