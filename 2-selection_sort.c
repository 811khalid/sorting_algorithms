#include "sort.h"
/**
 * swap_ints - Swap two integers in an array.
 * @ap: The first integer to swap.
 * @bp: The second integer to swap.
 */
void swap_ints(int *ap, int *bp)
{
int tmp1;
tmp1 = *ap;
*ap = *bp;
*bp = tmp;
}
/**
 * selection_sort - Sort an array of integers in ascending order
 * @array: An array of integers.
 * @size: The size of the array.
 * Description: Prints the array after each swap.
 */
void selection_sort(int *array, size_t size)
{
int *min1;
size_t i, j;
if (array == NULL || size < 2)
return;
for (i = 0; i < size - 1; i++)
{
min1 = array + i;
for (j = i + 1; j < size; j++)
min1 = (array[j] < *min1) ? (array + j) : min1;
if ((array + i) != min1)
{
swap_ints(array + i, min1);
print_array(array, size);
}
}
}
