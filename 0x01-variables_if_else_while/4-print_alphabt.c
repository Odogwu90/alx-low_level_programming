#include <stdio.h>
/*
* main - Entry point
* Description: Print the alphabets except 'q' and 'e'
* Return: Always 0 (Success)
*/
int main(void)
{
int n = 97; /* Start with 'a' */

while (n <= 122) /* 'z' is represented by 122 in ASCII */
{
if (n != 101 && n != 113) /* Exclude 'e' and 'q' */
{
putchar(n);
}
n++;
}
putchar('\n');
return (0);
}
