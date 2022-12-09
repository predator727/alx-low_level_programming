#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * description - get a random number and print number
 * Return 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%d is negative \n", n);
	else if (n < 0)
		printf("%d is zero \n", n);
	else
		printf("%d is positive \n", n);
	return (0);
}
