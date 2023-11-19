#include "sort.h"
/**
 * swap - swapint two value
 * @a: first value
 * @b: second value
 * Return: int
*/
int swap(int *a, int *b)
{
	int temp = 0;

	temp = *a;
	*a = *b;
	*b = temp;

	return (1);
}

/**
 * bubble_sort - sorting in buble method
 * @array: array to be sorted
 * @size: size of the array
*/
void bubble_sort(int *array, size_t size)
{
	int c = 0;
	size_t i, j;

	if (size < 2)
		return;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
			if (array[j] > array[j + 1])
			{
				c += swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		if (c == 0)
			return;
		c = 0;
	}
}
