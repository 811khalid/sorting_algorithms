#include "sort.h"
/**
 * swap_nodes - Swap two nodes
 * @h1: A pointer to the head.
 * @np: A pointer to the first node.
 * @mp: The second node.
 */
void swap_nodes(listint_t **h1, listint_t **np, listint_t *mp)
{
(*np)->next = mp->next;
if (mp->next != NULL)
{
mp->next->prev = *np;
}
mp->prev = (*np)->prev;
mp->next = *np;
if ((*np)->prev != NULL)
{	
(*np)->prev->next = mp;
}
else
{
*h1 = mp;
}
(*np)->prev = mp;
*np = mp->prev;
}
/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 * @list1: A pointer to the head of a doubly-linked list
 * Description: Prints the list after swap
 */
void insertion_sort_list(listint_t **list1)
{
listint_t *iter1, *insert1, *tmp1;
if (list1 == NULL || *list1 == NULL || (*list1)->next == NULL)
{
return;
}
for (iter1 = (*list1)->next; iter1 != NULL; iter1 = tmp1)
{
tmp1 = iter1->next;
insert1 = iter1->prev;
while (insert1 != NULL && iter1->n < insert1->n)
{
swap_nodes(list1, &insert1, iter1);
print_list((const listint_t *)*list1);
}
}
}
