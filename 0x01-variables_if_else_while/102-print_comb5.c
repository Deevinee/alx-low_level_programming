#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
int s, f;
for (s = 0; s <= 98; s++)
{
for (f = s + 1; f <= 99; f++)
{
putchar((s / 10) + '0');
putchar((s % 10) + '0');
putchar(' ');
putchar((f / 10) + '0');
putchar((f % 10) + '0');
if (s == 98 && f == 99)
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
