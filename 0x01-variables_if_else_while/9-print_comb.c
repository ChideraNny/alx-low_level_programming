#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
int c = 0;
while (c < 10)
{
putchar(48 + c);
if (c != 9)
{
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
