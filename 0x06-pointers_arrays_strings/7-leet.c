#include "main.h"

/**
 * leet - function that encodes a string into 1337.
 * @s: Pointer to Char
 * Return: the value of n
 */
char *leet(char *s)
{
	int i, j;
	char *l = "aAeEoOtTlL";
	char *n = "4433007711";

	while (*(s + i) != '\0')
	{
		while (*(l + j) != '\0')
		{
			if (*(s + i) == *(l + j))
				*(s + i)  = *(n + j);
			j++;
		}
		j = 0;
		i++;
	}
	return (s);
}









