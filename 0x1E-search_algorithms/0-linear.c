#include "search_algos.h"

/**
 * linear_search - seraches for a value in an array of intergers linearly
 * @array: pointer to array first element
 * @size: size of array
 * @value: value searching for
 * Return: index where first value found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;


	if (!array)
		return (-1);
	if (array)
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%li] = [%d]\n",
			       i, array[i]);
			if (value ==  array[i])
				return (i);
		}
	return (-1);
}
