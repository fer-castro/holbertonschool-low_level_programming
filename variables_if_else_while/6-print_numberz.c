#include <stdio.h>
/**
* main - prints all single digit numbers
* Description - prints all single digit numbers
* Return: Always 0 (Success)
*/
int main(void)
{
int c;
c = 0;
while
(c < 10)
{
putchar(c + '0');
c++;
}
putchar('\n');
return (0);
}
