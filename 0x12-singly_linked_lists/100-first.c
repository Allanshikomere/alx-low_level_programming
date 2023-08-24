#include <stdio.h>

void first(void) __attribute__ ((constructor));

/*
 *first-before the main text, prints a sentence
 * execution of the function
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

