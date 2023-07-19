#include "main.h"
/**
 * print_last_digit - Entry point
 * @n: character to check
 * Return:0
 */
int print_last_digit(int n)
{
int r = n % 10;
if (r < 0)
{
r *= -1;
}
return (r);
}

