#include<stdio.h>

/**
 * main - Entry point
 * Prints the size of various types on the computer it is compiled and run on.
 * Return: 0
 */

int main(void)
{
	printf("Size of a char: %u byte(s)\nSize of an int: %u byte(s)\n
		Size of a long int: %u byte(s)\n
		Size of a long long int: %u byte(s)\n
		Size of a float: %u byte(s)\n", sizeof(char), sizeof(int),
		sizeof(long int), sizeof(long long int), sizeof(float));
	return (0);
}
