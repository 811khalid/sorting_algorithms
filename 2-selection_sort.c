#include "sort.h"
/**
 * swap_ints - Swap two integers in an array.
 * @ap: The first integer to swap.
 * @bp: The second integer to swap.
 */
void swap_ints(int *ap, int *bp)
{
int tmp;
tmp = *ap;
*ap = *bp;
*bp = tmp;
}
/**
 * selection_sort - Sort an array of integers in ascending order
 * @array1: An array of integers.
 * @size1: The size of the array.
 * Description: Prints the array after each swap.
 */
void selection_sort(int *array1, size_t size1)
{
int *min1;
size_t i, j;
if (array1 == NULL || size1 < 2)
return;
for (i = 0; i < size1 - 1; i++)
{
min = array1 + i;
for (j = i + 1; j < size1; j++)
min1 = (array1[j] < *min1) ? (array1 + j) : min1;
if ((array1 + i) != min1)
{
swap_ints(array1 + i, min1);
print_array(array1, size1);
}
}
}
