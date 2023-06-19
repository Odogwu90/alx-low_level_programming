#include <stdio.h>
/**
*main - Entry point
*Description: Print all possible combinations of single-digit numbers
*Return: Always 0
*/
int main(void)
{
int n;

for (n = 0; n <= 9; n++)
{
putchar(n + '0');
putchar(' ');
}
putchar('\n');
return (0);
}
