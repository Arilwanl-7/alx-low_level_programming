#include <stdio.h>

/**
 * main - Entrry point
 * description: print lower case in reverse
 * Return: 0
 */
int main(void)
{
char a = 'z';

while (a >= 'a')
{
putchar(a);
a--;
}
putchar('\n');
return (0);
}
