#include "main.h"
/**
 * print_alphabet - Entry point
 * Return:0
 */
void print_alphabet(void)
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
