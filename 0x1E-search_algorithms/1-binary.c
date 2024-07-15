#include "search_algos.h"

/**
 * print_arr - helper func to print array everytime array is halved
 * @array: array
 * @left: left index of original array
 * @right: right index of original array
 */
void print_arr(int *array, size_t left, size_t right)
{
	size_t idx = 0;

	printf("Searching in array: ");
	for (idx = left; idx <= right; idx++)
	{
		if (idx != right)
		{
			printf("%d, ", array[idx]);
		}
		else
		{
			printf("%d", array[idx]);
			printf("\n");
		}
	}
}

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index at which value is found
 *
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t mid;

	if (!array)
	{
		return (-1);
	}

	while (left <= right)
	{
		print_arr(array, left, right);
		mid = (left + right) / 2;
		if (value == array[mid])
		{
			return (mid);
		}
		else if (value < array[mid])
		{
			right = mid - 1;
		}
		else
		{
			left = mid + 1;
		}
	}
	return (-1);
}
