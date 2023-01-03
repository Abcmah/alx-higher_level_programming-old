#include "lists.h"

/**
 * check_cycle - checks if a singly linked list has
 * @list:  list
 * Return: 1 if there is cycle,otherwise 0
 */
int check_cycle(listint_t *list)
{
listint_t *p2;
listint_t *prev;

p2 = list;
prev = list;
while (list && p2 && p2->next)
{
list = list->next;
p2 = p2->next->next;

if (list == p2)
{
list = prev;
prev =  p2;
while (1)
{
p2 = prev;
while (p2->next != list && p2->next != prev)
{
p2 = p2->next;
}
if (p2->next == list)
break;

list = list->next;
}
return (1);
}
}

return (0);
}
