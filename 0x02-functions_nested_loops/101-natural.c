#include <stdio.h>
/**
 * main - print all natural number
 * Return: 0
 */

int main(void)
{
	int i;
	int sum;

	sum = 0;

	for (i = 0; i < 10; i++)
	{
		if ((i % 3 == 0) || i % 5 == 0)
		{
			sum = sum + i;
		}
	}
	printf("%d\n");
	return (0);
}
