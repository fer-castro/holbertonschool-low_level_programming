#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
* main - check the code
* Return: Always EXIT_SUCCESS.
**/
int main(void)
{
dlistint_t *head;
head = NULL;
add_nodeint(&head, 0);
add_nodeint(&head, 1);
add_nodeint(&head, 2);
add_nodeint(&head, 3);
add_nodeint(&head, 4);
add_nodeint(&head, 98);
add_nodeint(&head, 402);
add_nodeint(&head, 1024);
print_dlistint(head);
return (EXIT_SUCCESS);
}
