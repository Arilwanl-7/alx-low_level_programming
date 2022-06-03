#include <stdio.h>

/**
 * main - Entry point
 * description: print all the letters except q and e
 * Return: 0
 */
int main(void)
{
  char x;

  for (x = 'a'; x <= 'z'; x++)
    if (x != 'q' && x != 'e')
      putchar(x);
  putchar('\n');
  return (0);
}
