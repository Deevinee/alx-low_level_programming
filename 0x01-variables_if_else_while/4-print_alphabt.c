#include <stdio.h>
/**
 * main - print alpha in lowercase
 * Return: 0
 */
int main(void)
{
char d;
for (d = 'a'; d <= 'z'; d++)
{
if (d != 'e' && d != 'f')
putchar(d);
}
putchar('\n');
return (0);
}
