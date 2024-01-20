#include "sort.h"
void swap_ints(int *a1, int *b1);
int lomuto_partition(int *array1, size_t size1, int left1, int right1);
void lomuto_sort(int *array1, size_t size1, int left1, int right1);
void quick_sort(int *array1, size_t size1);
/**
 * swap_ints - Swap two integers
 * @a1: The first integer to swap.
 * @b1: The second integer to swap.
 */
void swap_ints(int *a1, int *b1)
{
int tmp1;
tmp1 = *a1;
*a1 = *b1;
*b1 = tmp1;
}
/**
 * lomuto_partition - Order a subset of an array of integers
 * @array1: The array of integers.
 * @size1: The size of the array.
 * @left1: The starting index of the subset to order.
 * @right1: The ending index of the subset to order.
 *
 * Return: The final partition index.
 */
int lomuto_partition(int *array1, size_t size1, int left1, int right1)
{
int *pivot1, above1, below1;
pivot1 = array1 + right1;
for (above1 = below1 = left1; below1 < right1; below1++)
{
if (array1[below1] < *pivot1)
{
if (above1 < below1)
{
swap_ints(array1 + below1, array1 + above1);
print_array(array1, size1);
}
above1++;
}
}
if (array1[above1] > *pivot1)
{
swap_ints(array1 + above1, pivot1);
print_array(array1, size1);
}
return (above1);
}
/**
 * lomuto_sort - Implements the quicksort algorithm through recursion.
 * @array1: An array of integer.
 * @size1: The size of the array.
 * @left1: The starting index of the array partition.
 * @right1: The ending index of the array partition.
 * Description: Uses the Lomuto partition scheme.
 */
void lomuto_sort(int *array1, size_t size1, int left1, int right1)
{
int part1;
if (right1 - left1 > 0)
{
part1 = lomuto_partition(array1, size1, left1, right1);
lomuto_sort(array1, size1, left1, part1 - 1);
lomuto_sort(array1, size1, part1 + 1, right1);
}
}
/**
 * quick_sort - Sort an array of integers in ascending.
 * @array1: An array of integers.
 * @size1: The size of the array.
 * Description: Uses the Lomuto partition scheme.
 */
void quick_sort(int *array1, size_t size1)
{
if (array1 == NULL || size1 < 2)
return;
lomuto_sort(array1, size1, 0, size1 - 1);
}
