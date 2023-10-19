#include "main.h"

/**
 * ge_puts - using puts function to print strings
 * @strg: the string to print out
 *
 * Return: void
 */

void ge_puts(char *strg)
{
	int j;

	for (j = 0; strg[j] != '\0'; j++)
	{
		ge_myputchar(strg[j]);
	}
}
