#include "sort.h"
/**
 * swap - sawaping two integers
 * @a: first
 * @b: second integer
 * Return: int
*/
void swap(int *a, int *b)
{
	int temp = 0;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * selection_sort - sorting using selrction method
 * @arr: array to be sorted
 * @n: array size
*/
void selection_sort(int *arr, int n)
{
	int i, j, mini;

	if (!arr || n < 2 || !(*arr))
		return;

	for (i = 0; i < n - 1; i++)
	{
		mini = i;
		for (j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[mini])
				mini = j;
		}
		if (mini != i)
		{
			swap(&arr[mini], &arr[i]);
			print_array(arr, n);
		}
	}
}
