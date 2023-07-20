#include "main.h"
/**
 * print_most_numbers - checks lowercase
 * Return:
 */
void print_most_numbers(void)
{
char sec;
for (sec = '0'; sec <= '9'; sec++)
{
if (sec == '2' || sec == '4')
{
continue;
}
_putchar(sec);
}
_putchar('\n');
}
