#include <stdio.h>
/**
*main - Entry point
*Description: Print all possible combinations of single-digit numbers
*Return: Always 0
*/
int main(void)
{
int i;

for (i = 0; i <= 9; i++)
{
putchar(i + '0');
putchar(',');
putchar(' ');
}
putchar('$');
putchar(' ');
return (0);
}
