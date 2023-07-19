#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * Return:0
 */
void print_alphabet_x10(void)
{
int i;
for (i = 1; i <= 10; i++)
{
char ch = 'a';
while (ch <= 'z')
{
_putchar(ch);
ch++;
}
_putchar('\n');
}
}
