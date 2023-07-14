#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - 0-positive_or_negative.c
 * Return: 0
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
digit = n % 10;
if (digit == 0)
{
printf("Last digit of %d is &d and is 0\n", n, digit);
}
else if (digit < 6 && digit != 0)
{
printf("Last digit of %d is &d and is less than 6 and not 0\n", n, digit);
}
else if (digit > 5)
{
printf("Last digit of %d is &d and is greater that 5\n", n, digit);
}
return (0);
}
