#include "main.h"

/**
 * set_bit - An index-based bit is set to 1
 * @n: A pointer to the number that needs to be changed
 * @index: Sets a bit to 1 based on its index
 *
 * Return: A score of 1 indicates success, a score of -1 indicates failure
 *
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

