#include "main.h"
/**
 * swap_int - takes a pointer to an int as
 * @a:the parameter
 * @b:the parameter
 * Return: 0
*/
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
