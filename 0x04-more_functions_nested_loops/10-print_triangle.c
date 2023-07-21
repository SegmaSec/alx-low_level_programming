#include "main.h"
/**
 * print_triangle - checks lowercase
 * @size: is a variable
 * Return:
 */
void print_triangle(int size)
{
int i;
int j;
if (size <= 0)
{
_putchar('\n');
return;
}
for (i = 0; i < size; i++)
{
for (j = size - i; j > 1; j--)
{
_putchar(' ');
}
for (j = 0; j <= i; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
