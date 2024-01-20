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
 * @array1: Sort array of integers
 * @size1: The size of the array
 *
 * Description: Prints the array
 */
void bubble_sort(int *array1, size_t size1)
{
size_t i, len = size1;
bool bubble = false;
if (array == NULL || size < 2)
return;
while (bubble == false)
{
bubble = true;
for (i = 0; i < len - 1; i++)
{
if (array1[i] > array1[i + 1])
{
swap_ints(array1 + i, array1 + i + 1);
print_array(array1, size);
bubble = false;
}
}
len--;
}
}
