#include "function_pointers.h"
/**
 * int_index - return index place if comparison = true, else -1
 * @size: size of elements in array
 * @array: array
 * @cmp: pointer to func of one of the 3 in main
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int u;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (u = 0; u < size; u++)
	{
		if (cmp(array[u]))
			return (u);
	}
	return (-1);
}
