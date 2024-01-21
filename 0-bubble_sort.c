#include "sort.h"
/**
 * swap_ints - Swap two int
 * @a1: The first integer
 * @b2: The second integer
 */
void swap_ints(int *a1, int *b2)
{
int tmp;
tmp = *a1;
*a1 = *b2;
*b2 = tmp;
}
/**
 * bubble_sort - Sort integers in ascending
 * @array: Sort array of integers
 * @size: The size of the array
 *
 * Description: Prints the array
 */
void bubble_sort(int *array, size_t size)
{
size_t i, len1 = size;
bool bubble = false;
if (array == NULL || size < 2)
return;
while (bubble == false)
{
bubble = true;
for (i = 0; i < len1 - 1; i++)
{
if (array[i] > array[i + 1])
{
swap_ints(array + i, array + i + 1);
print_array(array, size);
bubble = false;
}
}
len1--;
}
}
