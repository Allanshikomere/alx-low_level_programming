#include "main.h"

/**
 * get_bit - Bits at an index are returned as decimal values
 * @n: the numbers that are to be searched
 * @index: The bit index
 *
 * Return: The bit's value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
