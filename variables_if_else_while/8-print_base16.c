#include <stdio.h>
/**
* main - prints all the numbers of base 16
* Description: prints all the numbers of base 16
* Return: Always 0 (Success)
*/
int main(void)
{
int d;
for (d = 0; d < 10; d++)
{
putchar(d + '0');
}
char c = 'a';
while (c <= 'f')
{
putchar(c);
c++;
}
putchar ('\n');
return (0);
}
