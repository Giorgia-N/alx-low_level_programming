#include <stdio.h>

void sent(void) __attribute__ ((constructor));

/**
 * sent - prints a sentence
 * function is executed
 */
void sent(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
