#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of chars
 * @size: size of array
 * @c: specific char
 * Return: a pointer to the array or NULL if error
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return (NULL);

	a = malloc(size * sizeof(char));
	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		a[i] = c;

	return (a);
}
