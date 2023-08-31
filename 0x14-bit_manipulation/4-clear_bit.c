#include "main.h"

/*
 * clear_bit - The value of a given bit is set to 0
 * @n: A pointer to the number that needs to be changed
 * @index: The index of the bit that needs to be cleared
 *
 * Return: A score of 1 indicates success, a score of -1 indicates failure
 *
 *
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
