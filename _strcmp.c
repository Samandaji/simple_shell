#include "_shell.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: string one
 * @s2: string two
 * Return: equal(0) less(-1) more (1)
 */
int _strcmp(char *s1, char *s2)
{
	int count = 0;
	int count2 = 0;

	while (count == 0)
	{
		if ((*(s1 + count2) == '\0') && (*(s2 + count2) == '\0'))
			break;
		count = *(s2 + count2) - *(s2 + count2);
		count2++;
	}

	return (count);
}
