#include "main.h"
/**
 * more_numbers - checks lowercase
 * Return:
 */
void more_numbers(void)
{
int sec;
int sec1;
for (sec1 = 0; sec1 < 11; sec1++)
{
for (sec = 0; sec < 15; sec++)
{
if (sec > 9)
{
_putchar('1');
}
_putchar(sec % 10 + '0');
}
_putchar('\n');
}
}
