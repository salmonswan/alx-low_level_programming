#include "main.h"

/**
 * _isalpha - Checks for alphabetic character.
 * @c: integer input
 * Return: 0, 1
 */

int _isalpha(int c)
{
	int i = 'a';
	int j = 'A';

	while (i <= 'z' || j <= 'Z')
	{
		if (c == i || c == j)
		{
			return (1);
		}
		i++;
		j++;
	}
	return (0);
}
