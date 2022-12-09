#include <stdio.h>

/**
 * main - Entry pont
 * Return: Always 0 (succes)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
			putcahr(c);
	}
	putchar('\n');
	return (0);
}
