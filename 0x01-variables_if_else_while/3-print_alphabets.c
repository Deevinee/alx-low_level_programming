#include <stdio.h>
/**
 * main - print case in lower and upper
 * Return: 0
 */
int main(void)
{
char h;
for (h = 'a'; h <= 'z'; h++)
putchar(h);
for (h = 'A'; h <= 'Z'; h++)
putchar(h);
putchar('\n');
return (0);
}
