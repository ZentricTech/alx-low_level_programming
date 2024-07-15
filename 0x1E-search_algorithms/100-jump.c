#include "search_algos.h"

/**
  * jump_search - Use jump search to find a value in an array
  * @array: array to search
  * @size: size of  search
  * @value: value to search for
  *
  * Return: return index where value resides or -1 if none
  */
int jump_search(int *array, size_t size, int value)
{
	unsigned int idx = 0;
	unsigned int jump = sqrt(size);

	if (!array)
		return (-1);

	while (idx < size && array[idx] < value)
	{
		printf("Value checked array[%d] = [%d]\n", idx, array[idx]);
		idx += jump;
	}
	idx -= jump;
	printf("Value found between indexes [%d] and [%d]\n", idx, idx + jump);
	for (; idx <= (idx + jump) && idx < size; idx++, jump--)
	{
		printf("Value checked array[%d] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
			return (idx);
	}
	return (-1);
}
