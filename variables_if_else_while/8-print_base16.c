#include <stdio.h>
/**
* main - prints all the numbers of base 16
* Description: prints all the numbers of base 16
* Return: Always 0 (Success)
*/
int main(void)
{
char c;
int d;
c = 'a';
c = 0;
while
(d < 10)
{
putchar(d + '0');
d++;
}
while
(c <= 'f')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
