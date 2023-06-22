#include <stdio.h>
/**
* main - prints all the numbers of base 16
* Description: prints all the numbers of base 16
* Return: Always 0 (Success)
*/
int main(void)
{
int i;
for (i = 0; i < 10 || i < 'g'; i++)
{
if (i < 10)
putchar(i + '0');
else
putchar(i);
}
putchar('\n');
return (0);
}
