#include "sort.h"
/**
 * swap - swaping two element
 * @a: first ele
 * @b: second ele
 * Return: 1 success
*/
int swap(int *a, int *b)
{
	int temp = 0;

	if (*a == *b)
		return (0);

	temp = *a;
	*a = *b;
	*b = temp;

	return (1);
}
/**
 * lomuto_sort - sorting in lomuto
 * @arr: array to be sorted
 * @size: the size of array
 * @left: left side of the array
 * @right: right side of the array
 * Return: size_t
*/
size_t lomuto_sort(int *arr, size_t size, int left, int right)
{
	int i, j, pivot, c;

	i = left - 1;
	pivot = arr[right];

	for (j = left; j <= right - 1; j++)
	{
		if (pivot >= arr[j])
		{
			i++;
			c = swap(&arr[i], &arr[j]);
			if (c)
			{
				print_array(arr, size);
				c = 0;
			}
		}
	}
	c = swap(&arr[i + 1], &arr[right]);
	if (c)
	{
		print_array(arr, size);
		c = 0;
	}
	return (i + 1);
}
/**
 * quick - help function of quick sort
 * @arr: array
 * @size: the size of arr
 * @left: left side of the array
 * @right: right side of the array
*/
void quick(int *arr, size_t size, int left, int right)
{
	int pivot;

	if (left < right)
	{
		pivot = lomuto_sort(arr, size, left, right);

		quick(arr, size, left, pivot - 1);
		quick(arr, size, pivot + 1, right);
	}
}
/**
 * quick_sort - soting function using quick method
 * @arr: array to be sorted
 * @size: the size of the array
*/
void quick_sort(int *arr, size_t size)
{
	size_t left, right;

	left = size - size;
	right = size - 1;
	quick(arr, size, (int) left, (int) right);
}
