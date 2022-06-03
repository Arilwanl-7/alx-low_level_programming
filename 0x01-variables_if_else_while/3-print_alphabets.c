#include <stdio.h>

/**
* main - Entry point
* description: print alphabet in lc,uc
* Return: 0
*/
int main(void)
{
char a = 'a';

while (a <= 'z')
{
putchar(a);
a++;
}

a = 'A';

while (a <= 'Z')
{
putchar(a);
a++;
}

putchar('\n');
return (0);
}
