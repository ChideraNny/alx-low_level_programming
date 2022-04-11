#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: print all numbers of base 16 in lowercase, followed by a new line
 * Return: 0
 */
int main(void)
{
char ch;
for (ch = '0'; ch <= '16'; ch++)
{
putchar(ch);
}
for (ch = 'a'; ch <= 'p'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
